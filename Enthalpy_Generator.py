print('call Enthalpy_Generator OK')

import numpy as np
import pandas as pd
import torchani
import torch
import time
import sys
import ase
import re
import h5py

# import subprocess as sp

import Symmetry_Calculation as symcal
import Molecule_Database_creation as MDc
# import external symmertry calculation here

from scipy import constants,optimize

from rdkit import Chem
from rdkit.Chem import AllChem


from ase.thermochemistry import IdealGasThermo
from ase.vibrations import Vibrations
from ase.optimize import BFGS
from ase.units import invcm


'''
Constants
'''
Hartree_2_Joule = (constants.physical_constants['Hartree energy'])
R = constants.physical_constants['molar gas constant']
kb = constants.physical_constants['Boltzmann constant']
pi = constants.pi
Na = constants.physical_constants['Avogadro constant']
h = constants.physical_constants['Planck constant']
ev = constants.physical_constants['electron volt']
c = constants.physical_constants['speed of light in vacuum']
amu  = constants.physical_constants['atomic mass constant']

'''
Chris's Functions & Subroutines
'''

# ZPE = (1/2)* [summation of planck constant*(frequencies)]
def get_ZPE(freqs):

    ZPE = 0
    for freq in freqs:
        if np.isnan(freq) or freq <= 0.0001:
            continue
        else:
            ZPE += 0.5*h[0]*c[0]*100*freq#/invcm

    ZPE = ZPE/1.602E-19*ev[0]*Na[0]/1000

    return ZPE

def Shomate_S(param,T,S_data):
    t = T/1000.0
    # print('param in Shomate_S', param)
    S = param[0]*np.log(t) + param[1]*t + param[2]*t*t/2 + param[3]*t*t*t/3 - param[4]/(2*t*t) + param[5] #A + B + C + D - E + G
    Sdiff = S - S_data
    return Sdiff


def Shomate_H(param, T):
    t = T/1000.0
    H = param[0]*t + param[1]*t**2/2 + param[2]*t**3/3 + param[3]*t**4/4 - param[4]/t + param[5] # A + B + C + D - E + F -H
    return H

'''
'get_T_corrections' calculates the temperature corrections necessary for calculating
the enthalpy.

H = U0 + ZPE + T_corrections

The temperature corrections are calculated by computing a list of entropies
across a temperature range, which is fit to Shomate parameters.-function 'Shomate_S'.

The fit allows us to etimate the magnitude of each parameter. A seperate
Shomate parameter function allows us to estimate the enthalpy.-function 'Shomate_H'.

The enthalpy is returned in [kJ/mol]

'''
def get_T_corrections(T,T_arr,d_points,S_dat,t0,H0):

    #initial guess for Shomate_S parameters.
    initparam = (1,1,1,1,1,1)

    #output from non-linear scipy least squares optimization.
    optimize_output = optimize.least_squares(Shomate_S,initparam,args=(T_arr,S_dat))

    #Solution to scipy fit for S(T) vs. T.
    param = optimize_output.x
    RMSE = np.std(optimize_output.fun)

    #append (U0+ZPE) to Shomate parameters.
    ShomatePar = [param[0],param[1],param[2],param[3],param[4],0,param[5],H0]

    #Solve for Shomate parameter[5]
    ShomatePar[5] = H0-param[0]*t0-param[1]*t0**2/2-param[2]*t0**3/3-param[3]*t0**4/4+param[4]/t0

    #Shomate: A,B,C,D,E,F,G
    param_ordered = [param[0],param[1],param[2],param[3],param[4],H0-ShomatePar[5],param[5]]
    #Calculate the enthalpy.
    H = Shomate_H(ShomatePar,T)

    return param_ordered, RMSE, H


'''
main code
'''

def Enthalpy_torchANI(dataset_filename, number_Conformer, One_SMILES_String):

    f = h5py.File('%s.hdf5' % dataset_filename, 'a')
    groupnames = list(f.keys())
    if One_SMILES_String in groupnames:
        print('[Enthalpy_Generator]%s properties data exists in h5py file!' % One_SMILES_String)
        Enthalpy_torchANI_result = True
        pass
    else:
        hdf5_file, molecule_ase, molecule_sum_AtomNum = MDc.TorchANI_Energy(One_SMILES_String, dataset_filename, number_Conformer) # argument 0 = species file from RING
        # def TorchANI_Energy(path_species_file, h5py_filename, number_Conformer)
        if molecule_ase is False:
            # print('molecule embedding FAILED. Return False.')
            Enthalpy_torchANI_result = False
        else:
            # print('moleculeAtom Num:', molecule_sum_AtomNum)
            # print('hdf5_file:', hdf5_file)
            mol_i = One_SMILES_String # A short-cut! I don't want bother change every keyword so used this equal expression.
            # print(mol_i)
            # print('type of mol_i:', type(mol_i))
            S_temp = []
            G_temp = []
            H_temp = []

            # dset_atom = hdf5_file['%s/molecule_ase' % mol_i] --> this don't work
            dset_atom = molecule_ase
            dset_ePot_ANI = hdf5_file['%s/potentialenergy(Hartree_ani)' % mol_i]
            # dset_ePot = hdf5_file['%s/potentialenergy(eV)' % mol_i]
            dset_freq = hdf5_file['%s/vibrational_freq' % mol_i]
            dset_freq_ZPE = np.zeros(len(dset_freq))  #otherwise the ZPE calcaultion will be messed up.
            dset_freq_ZPE[:] = dset_freq[:]
            # dset_fconst = hdf5_file['%s/force_constants' % mol_i]
            # dset_rmasses = hdf5_file['%s/reduced_mass' % mol_i]
            # dset_modes = hdf5_file['%s/Modes' % mol_i]


            # print('++ symmertry calculation start ++')
            pgroup, sno = symcal.get_sno(dset_atom)
            # print('point group:', pgroup, '\nsymmetry number:', sno)
            # print('++ symmertry calculation end ++')

            # define the geometry:
            if molecule_sum_AtomNum <= 2:
                geometry_cal = 'linear'
            else:
                geometry_cal = 'nonlinear'

        # Uncomment this for replacing all nan and <50 freq to 50.
            for count, i in enumerate(dset_freq):
                if np.isnan(i) or i < 50.0:
                    dset_freq[count] = 50.0
            # print('dset_freq', dset_freq[:], len(dset_freq[:]))
            vib_energies= np.zeros(len(dset_freq))
            for freq_index in range(len(dset_freq)):
                vib_energies[freq_index] = dset_freq[freq_index] * invcm
            # print('vib_energies:', vib_energies, len(vib_energies))

        # Uncomment this for replacing all nan and <50 freq to 50: compared, make first 6 freq extreme case.
            # for i in range(6):
            #     dset_freq[i] = 5000.0
            # print('dset_freq', dset_freq[:], len(dset_freq[:]))
            # vib_energies= np.zeros(len(dset_freq))
            # for freq_index in range(len(dset_freq)):
            #     vib_energies[freq_index] = dset_freq[freq_index] * invcm
            # print('vib_energies:', vib_energies, len(vib_energies))

            # vib.summary(method='standard', direction='central', freq=dset_freq[:],log=sys.stdout) # default freq = None
            # Uncomment this for using ase.Vibrations().

            # vib = Vibrations(dset_atom)
            # vib.run()
            # vib.summary()
            # vib_energies = vib.get_energies() #ase.vibrations.Vibrations.get_energies will take atom geometry and species
            # print('vib_energies:', vib_energies, len(vib_energies))
            # print('vib_energies:', vib_energies[:])
            # print('type of ener..', type(vib_energies),type(vib_energies[:]),)
            # print('geometry:', geometry_cal)
            for temp in (298.15, 500):
                thermo = IdealGasThermo(vib_energies=vib_energies,
                                    potentialenergy=dset_ePot_ANI[:]*27.211, #ePot_ANI is Hartree, need to change into eV
                                    atoms=dset_atom,
                                    geometry=geometry_cal,
                                    symmetrynumber=sno, spin=0)
                        # The ASE.IdealGasThermo take potential energy in eV
                        # Manual_SymNum[molecule_SMILES_string.index(mol_i)]

                S = thermo.get_entropy(temperature=temp, pressure=101325.,verbose=False)*ev[0]*Na[0]
                # print('[check vibration usage] S from ase.get_entropy():', S)
                # print('dset_freq_ZPE:',dset_freq_ZPE[:])
                ZPE = get_ZPE(dset_freq_ZPE) #[kJ/mol]
                # print('freqency from torchani(should be):',dset_freq[:])
                # print('ZPE[kJ/mol]:', ZPE)
                U0_ZPE = dset_ePot_ANI[:]*27.211*ev[0]*Na[0]/1000+ZPE #[kJ/mol]
                # print('U0_ZPE:', U0_ZPE)

                '''
                Fitting Shomate parameters to calculate enthalpy (Caution: NOT Enthalpy of formation).
                '''
                #Here, we solve for the enthalpy of formation from zero [K] to the NIST standard state of 298.15 [K]
                #We approximate the 0 [K] enthalpy to be at 10 [K]; at this temperature H(10 K) ~ (U0 +ZPE)
                T_range = [10.0,300.00]#Peng's code used this range.
                d_points = 100#also used in Peng's code. 100 data points is sufficient for adequate enthalpy estimation.
                T_arr = np.linspace(T_range[0],T_range[-1],num=d_points)#Create Temperature range.

                #Calculate entropy across first temperature range.
                S_dat = []
                for i,T in enumerate(T_arr):
                    S_dat.append(thermo.get_entropy(temperature=T, pressure=101325.,verbose=False)*ev[0]*Na[0]) #[J/mol/K]
                    # print('T in T_arr:', T)
                # print('S_dat:', S_dat)
                H0 = U0_ZPE
                param_ordered_298, RMSE_298, H_298 = get_T_corrections(298.15,T_arr,d_points,S_dat,10.0/1000.0,H0)
                # print('param_ordered_298', param_ordered_298)
                # print('RMSE_298', RMSE_298)
                # print('H_298', H_298)

                #Now we solve for NIST's standard enthalpy of formation (from reference state of 298.15 K) to T.
                #We now expand our temperature range to [300,1200] and use T = 298.156 [K] as our reference state.
                T_range = [300.0,1200.0]
                T_arr = np.linspace(T_range[0],T_range[-1],num=d_points)#Create Temperature range.

                #Calculate entropy across second temperature range.
                S_dat = []
                for i,T in enumerate(T_arr):
                    S_dat.append(thermo.get_entropy(temperature=T, pressure=101325.,verbose=False)*ev[0]*Na[0]) #[J/mol/K]
                    # print('T in T_arr:', T)
                    # print('S_dat:', thermo.get_entropy(temperature=T, pressure=101325.,verbose=False)*ev[0]*Na[0])
                # print('S_dat:', S_dat)
                param_ordered, RMSE, H = get_T_corrections(temp,T_arr,d_points,S_dat,298.15/1000.0,H_298)
                # print('param_ordered', param_ordered)
                # print('RMSE', RMSE)
                # print('H', H)
                G_temp.append(H-temp*(S/1000.0))
                S_temp.append(S)
                H_final = dset_ePot_ANI[:]*2625.5 + ZPE + (H_298 - H0) # kJ/mol
                # print('H_final = E(DFT)+ZPE+delta H298-H0', H_final)
                H_temp.append(H_final)

                # print('G_temp:',G_temp,'\nS_temp:',S_temp,'\nH_temp:',H_temp) #how many will H_temp produce?

            Cal_Gibbs_Energy = G_temp[1]-G_temp[0]
            # Cal_Gibbs_Energy = G_temp[0]
            Cal_Entropy = S_temp[0] #S at 298.15K
            # Cal_Enthalpy = H_temp[1]- H_temp[0]
            Cal_Enthalpy = H_temp[0] #H at 298.15K

            group_i_dset_GibbsE = hdf5_file.create_dataset('%s/Gibbs_Energy' % mol_i ,(1,), data=Cal_Gibbs_Energy )
            group_i_dset_Entropy = hdf5_file.create_dataset('%s/Entropy_S' % mol_i, (1,), data=Cal_Entropy )
            group_i_dset_Enthalpy = hdf5_file.create_dataset('%s/Enthalpy_H' % mol_i, (1,), data=Cal_Enthalpy )

            dset_GibbsE = hdf5_file['%s/Gibbs_Energy' % mol_i]
            dset_Entropy = hdf5_file['%s/Entropy_S' % mol_i]
            dset_Enthalpy = hdf5_file['%s/Enthalpy_H' % mol_i] # kJ/mol
            print('Gibbs_Energy:', dset_GibbsE[:])
            print('Entropy:', dset_Entropy[:])
            print('Enthalpy:',dset_Enthalpy[:]) # kJ/mol
            print('Return True.')
            Enthalpy_torchANI_result = True


        hdf5_file.close()

    return Enthalpy_torchANI_result
