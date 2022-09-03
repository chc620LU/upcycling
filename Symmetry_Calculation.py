import libmsym as msym
import subprocess as sp
import numpy as np
import torchani
import torch
import time
import sys
import ase

from scipy import constants,optimize
from rdkit.Chem import AllChem
from rdkit import Chem

def set_basis(element):
      basis_function = msym.RealSphericalHarmonic(element = element, name = "1s")
      element.basis_functions = [basis_function]
      return basis_function

def get_sno(atoms):
    # print(atoms)
    elements = []
    # print(atoms.symbols,atoms.positions)
    for atom in atoms:
        # print('coordinates called by symmetry:/n',atom.symbol,atom.position)
        elements.append(msym.Element(name = atom.symbol, coordinates = map(float, atom.position)))
    # print('elements=',elements)
    basis_functions = [set_basis(e) for e in elements]
    # print('basis_functions=', basis_functions)

    with msym.Context(elements = elements) as ctx:
        # ctx.elements = elements

        try:
            # ctx.set_thresholds(zero = 1.0e-1)
            ctx.set_thresholds(geometry = 1.0e-1) #'Error determining symmetry operations': 'Unexpected number of elements (6) in asymmetric polyhedron'
            # ctx.set_thresholds(angle = 1.0e-1)
            ctx.set_thresholds(equivalence = 1.0e-1) #Vary this threshold if Error: "Point group has no primary axis for reorientation" arises.
            # ctx.set_thresholds(eigfact = 1.0e-1)
            # ctx.set_thresholds(permutation = 1.0e-1)
            # ctx.set_thresholds(orthogonalization = 1.0e-1) #'Error determining symmetry operations': 'Unexpected number of elements (6) in planar irregular polygon'
            point_group = ctx.find_symmetry()
            # print(point_group)
        except:
            point_group = 'C1'
            # print(point_group)
            pass
         #selements = ctx.symmetrize_elements()
        #write_xyz(args.outfile, selements, comment + " symmetrized by libmsym according to point group " + point_group)

    #Match Point group with External symmetry number
    if point_group[0] == 'C':
        if point_group[1] == '1':
            sigma = 1
        elif point_group[1].isdigit() and point_group[1] != '0':
            sigma = int(point_group[1])
        else:
            sigma = 1

    elif point_group[0] == 'D':
        if point_group[1].isdigit() and point_group[1] != '0':
            sigma = int(2*float(point_group[1]))
        else:
            sigma = 2

    elif point_group[0] == 'T':
        sigma = 12

    elif point_group[0] == 'S':
        n = float(point_group[-1])
        sigma = int(n/2.0)

    elif point_group[0] == 'O':
        sigma = 24

    elif point_group[0] == 'I':
        sigma = 60

    else:
        print('Unable to determine point group: ', point_group)
        print('Sigma set to 1')
        sigma = 1

    return point_group, sigma
