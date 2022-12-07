
import pandas as pd
import numpy as np

# filename = './OutputTxt/Standard_H_Feb17/Pathways_AnaResult__AA_4.txt'
# filename = './Standard_H_Jan01/Pathways_AnaResult_benzene_C8.txt'
filename = '/home/chc620/RING-intel/Upcycling_r2/Pathways_AnaResult_HS_77.txt'

"""
Functions
"""

def Convert(string):
    li = list(string.split(", "))
    LIST = []
    for i in range(len(li)):
        rename = 'Pathway' + li[i]
        LIST.append(rename)
    return LIST

# Redefine G_dict
def Redefine_G(G_dict_level):
    G_dict_level_next = {}
    for count, i in enumerate(G_dict_level):
        level_next_index = max(range(len(G_dict_level[i])),key=G_dict_level[i].__getitem__)
        level_next_Gvalue = max(G_dict_level[i])
        G_dict_level_next[i]=G_dict_level[i][(level_next_index+1):]
    return G_dict_level_next

def MinG(G_dict_level):
    MaxG = []
    for count, i in enumerate(G_dict_level):
        MaxG.append(max(G_dict_level[i]))
    minG = min(MaxG)
    return minG

def Redefine_Pathway(Current_dict):
    New_dict = {}
    MinG(Current_dict)
    print('minG in maxG_list', MinG(Current_dict))
    for count, i in enumerate(Current_dict):
        if max(Current_dict[i]) == MinG(Current_dict):
            New_dict[i] = Current_dict[i]
    return New_dict

# change to next level when re-define pathway
def run(dict):
    for i in range(len(dict)):
        if len(dict) == 1:
            break
        else:
            print('CURRENT dict',dict)
            dict = Redefine_G(dict)
            print('REDEFINE dict',dict)
            dict = Redefine_Pathway(dict)
            print('NEW dict',dict)
    return dict

"""
Main Program
"""

f = open(filename, 'r')
lines = f.readlines()
Lookup_pathway = Convert(lines[4][12:-2])
print(Lookup_pathway)

# Create completed dictionary includes Gibbs energy and reactions
G_dict = {} #dictionary includes Gibbs energy and reactions
for count,line in enumerate(lines):
    if 'Pathway' in line:
        for x in range(len(Lookup_pathway)):
            Gibbs_energy = []
            reaction_for_drawing = []
            if line.strip() == Lookup_pathway[x]:
                for i in range(20):
                    # print(i)
                    if 'Pathway' in lines[count+(i+1)]:
                        break
                    else:
                        reaction_HSG = lines[count+(i+1)].split("\t")
                        reaction = reaction_HSG[0]
                        deltaG = float(reaction_HSG[3].strip())
                        reaction_for_drawing.append(reaction)
                        Gibbs_energy.append(deltaG)
                G_dict[line.strip()] = (Gibbs_energy, reaction_for_drawing) #tuple created

# Create a temperaily dictionary for filtering
G_dict_initial = {} # dictionary includes only Gibbs energy
for count, i in enumerate(G_dict):
    G_dict_initial[i] = G_dict[i][0]

print(filename)
run(G_dict_initial)
