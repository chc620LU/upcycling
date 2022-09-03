"""
@author:chc620
Objective: Calculate molecule's energy and vibrational frequencies through TorchANI
"""

import torch
import torchani
import ase

import h5py
import numpy as np
import pandas as pd
import sys
import re
import os
import subprocess as sp

from rdkit import Chem
from rdkit.Chem import AllChem
from ase.optimize import BFGS
from ase.vibrations import Vibrations
from ase.units import kJ, Hartree, mol, kcal

#看一下倒數第二層參數 model.print()

def TorchANI_Energy(One_SMILES_String, h5py_filename, number_Conformer):
    # device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
    device = torch.device('cpu')
    model = torchani.models.ANI1ccx(periodic_table_index=False).to(device).double()#not use periodic_table_index, use atom symbol directly,e.g. C, H
    # summary(model)
    #Create hdf5 file for data staorage:
    f = h5py.File('%s.hdf5' % h5py_filename, 'a')

    groupnames = list(f.keys())
    if One_SMILES_String in groupnames:
        print('[Moleculue_Database]%s properties data exists in h5py file!' % One_SMILES_String)
        pass
    else:
        MoleculeMol = Chem.MolFromSmiles(One_SMILES_String)
        MoleculeMol = Chem.AddHs(MoleculeMol)

        # create multiple conformer for one signle molecule:
        cids = AllChem.EmbedMultipleConfs(MoleculeMol, numConfs = number_Conformer,ETversion=2) #  , randomSeed = 0xf00d, pruneRmsThresh = -2.0,maxAttempts=200
        # print('length of cids:',len(cids))
        if len(cids) == number_Conformer: #to aviod the embedding failure case.
            # Use molecule SMILES string to create group:
            group_i = f.create_group(One_SMILES_String)
            molAtomNeb = MoleculeMol.GetNumAtoms()

            # looping each conformers:
            cid_list = []
            epot_list = []
            mol_after_opt = []
            #for confId in range(1):
            for confId in range(len(cids)):
                XYZ_info = Chem.MolToXYZBlock(MoleculeMol, confId = confId)
                # print('raw coordiantes:',XYZ_info)
                #Trasform the XYZBlock output:
                line = 2 #line 0 and 1 need to be ruled out as line 0 is atom number and line 1 is empty.
                coordinate_list = []
                species_list = []
                while line < molAtomNeb+2:
                    split_inline = XYZ_info.splitlines()[line] #split XYZBlock into lines and select the targered line (eg. line 2 for first atom and line 3 for second atom)
                    split_t = split_inline.split() #split the targeted line into ['atom', 'x', 'y', 'z'] list
                    species_list.append(split_t[0]) #store the 'atom' which is localed at split_t[0]

                    split_xyz = [float(split_t[1]), float(split_t[2]), float(split_t[3])] #store x,y,z which is localed at split_t[1] & [2] & [3]
                    coordinate_list.append(tuple(split_xyz))
                    line +=1

                molecule = ase.Atoms(species_list, positions=coordinate_list, calculator=model.ase())

                opt = BFGS(molecule)
                opt.run(fmax=0.05) #columns are the solver name, step number, clock time, potential energy (eV), and maximum force.
                #Temporarily ignore the kinetic energy (Assuming temperature fixed.)
                #Getting the converged energy from opt.run results:
                epot = molecule.get_potential_energy() #This is used for selecting which conformer has lowest energy, cannot be deleted.
                # ekin = molecule.get_kinetic_energy()
                cid_list.append(confId)
                epot_list.append(epot) # Value created during BFGS optimization
                print(epot_list) #unit: eV
                # print('After BFGS coordinates:\n',molecule.get_positions())
                mol_after_opt.append(molecule)


            # find out which conformer has the least potential energy after optimization:
            index_min = min(range(len(epot_list)), key=epot_list.__getitem__)
            molecule = mol_after_opt[index_min]
            # if One_SMILES_String == '[HH]':
            #     molecule = ase.Atoms('H2', positions=[(0.000, 0.000, 0.380), (0.000, 0.000, -0.380)], calculator=model.ase())
            # else:
            #     pass
            molecule_ase = molecule
            #https://aiqm.github.io/torchani/examples/vibration_analysis.html
            species = torch.tensor(molecule.get_atomic_numbers(), device=device, dtype=torch.long).unsqueeze(0)
            coordinates = torch.from_numpy(molecule.get_positions()).unsqueeze(0).requires_grad_(True)
            masses = torchani.utils.get_atomic_masses(species)
            model = torchani.models.ANI1ccx(periodic_table_index=True).to(device).double() #redefine model

            #For uncertainty:
            energies_ensemble =[]
            for model_index in range(8):
                model_NUM=model[model_index]
                _, energies = model_NUM((species, coordinates))
                energies_detach = energies.detach().numpy()
                energies_ensemble.append(energies_detach* mol / kJ) # energy unit is Hartree in torchANI.

            group_i_dset_range = group_i.create_dataset('energies_range',(1,), data=max(energies_ensemble)-min(energies_ensemble))

            energies = model((species, coordinates)).energies
            energies_detach = energies.detach().numpy()
            print(' %s final_coordinates:\n %s' % (One_SMILES_String, coordinates))

            hessian = torchani.utils.hessian(coordinates, energies=energies)
            freq, modes, fconstants, rmasses = torchani.utils.vibrational_analysis(masses, hessian, mode_type='MDU') #MDU
            torch.set_printoptions(precision=3, sci_mode=False)

            # print('Frequencies (cm^-1):', freq)

            # group_i_dset_epot_torchani = group_i.create_dataset('coordinates',(len(coordinates),), data=coordinates) # not work
            group_i_dset_epot_torchani = group_i.create_dataset('potentialenergy(Hartree_ani)',(1,), data=energies_detach) # use this as potential energy!
            group_i_dset_freq = group_i.create_dataset('vibrational_freq',(len(freq),), data=freq ) #dtype='float64'

        else:
            molecule_ase = False
            molAtomNeb = False


    # f.close() # if close the file, trouble reading in Enthalpy_Generator.py!
    return f, molecule_ase, molAtomNeb
