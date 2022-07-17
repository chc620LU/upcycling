"""
Created on Tue Jan 01 2022
@author: chc620

"""

import pandas as pd

from rdkit import Chem
from Enthalpy_Generator import *

def justSMILES_species(filename):
    species_file = pd.read_csv(filename, sep ='  ', header = None, dtype =str, skiprows=1, engine= 'python')
    SMILES = ''
    for rows in range(len(species_file)):
        SMILES += species_file.iat[rows, 0] + '\n'
    return SMILES

def run(UnknownMoleculesTxt, h5py_filename, number_Conformer):
    f = open(UnknownMoleculesTxt)

    if len(f.readlines()) < 1:
        print('Error: No Molecules with Unknown Enthalpy Provided.')
    else:
        UnknownSMILES = justSMILES_species(UnknownMoleculesTxt)
        UnknownMolecules = UnknownSMILES.splitlines()

    Check_forUnKnown=[]
    for i in list(UnknownMolecules):
        flag_Enthalpy_torchANI = Enthalpy_torchANI(h5py_filename, number_Conformer, i)
        Check_forUnKnown.append(flag_Enthalpy_torchANI)
        if flag_Enthalpy_torchANI is False:
            print('UnKnownMolecule %s failed in conformer generation, remove from list.' % i)
    print('Check_forUnKnown:',Check_forUnKnown)


number_Conformer = 200
h5py_filename = './molecule_properties_conformer200'
UnknownMoleculesTxt = './species.txt'
run(UnknownMoleculesTxt, h5py_filename, number_Conformer)
