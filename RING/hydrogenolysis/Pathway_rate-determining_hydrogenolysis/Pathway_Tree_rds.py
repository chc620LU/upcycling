'''
Based on the group meeting suggestion:
The comparison of min-max delta G should be in the same reaction rules, i.e. de-H should only compare to de-H.
This file is intened to:
    - grab data from RING_Summary csv file
    - match to the pathway in "Pathway_to_a_molecule.txt"
    - depend on which rule is set as the rds step, compare delta G with the rds rule internally.
'''

import pandas as pd
import numpy as np

"""
Functions
"""

def proper_dict_show(dictionary):
    # print the contents using zip format.
    for each_row in zip(*([i] + (j)
                          for i, j in dictionary.items())):

          print(*each_row, " ")

def Convert(string):
    li = list(string.split(", "))
    LIST = []
    for i in range(len(li)):
        rename = 'Pathway' + li[i]
        LIST.append(rename)
    return LIST

# Redefine G_dict: remove the highest G step and steps before it.
def Redefine_G(Current_dict):
    G_dict_level_next = {}
    for count, i in enumerate(Current_dict):
        level_next_index = max(range(len(Current_dict[i][0])),key=Current_dict[i][0].__getitem__)
        G_dict_level_next[i] = [Current_dict[i][0][(level_next_index+1):], Current_dict[i][1][(level_next_index+1):]]

    return G_dict_level_next

def MinG(Current_dict):
    MaxG_list, MaxG_Rule_list = [],[]
    Category_MaxG_rule = {}
    # print('run through here, MinG')
    for count, i in enumerate(Current_dict):
        # print(Current_dict[i][0])
        if len(Current_dict[i][0]) == 0:
            # Seems like if there is one pathway contains no such a rds rule, the program will not save any MaxG (even other pathways may contain the rds rule)
            # Thus, give None to min_maxG and program stop
            # print('run through here, MinG-for-if None')
            return None
        else:
            MaxG_index = max(range(len(Current_dict[i][0])),key=Current_dict[i][0].__getitem__)
            MaxG_list.append(Current_dict[i][0][MaxG_index])
            MaxG_Rule_list.append(Current_dict[i][1][MaxG_index])
            Category_MaxG_rule[Current_dict[i][1][MaxG_index]] = None
#     print('MaxG in each pathway:', MaxG_list)
#     print('Rule of MaxG in each pathway:',MaxG_Rule_list)
    print('Count of MaxG:', len(MaxG_list))
    print('Types of MaxG:', Category_MaxG_rule.keys())

    minG = min(MaxG_list)
    return minG

def Redefine_Pathway(Current_dict):
    New_dict = {}
    min_maxG = MinG(Current_dict)
    if min_maxG == None:
        return None
    else:
        print('minG in maxG_list', min_maxG)
        for count, i in enumerate(Current_dict):
            if max(Current_dict[i][0]) == min_maxG:
                New_dict[i] = Current_dict[i]
        return New_dict

# change to next level when re-define pathway
def run(dict):
    for i in range(len(dict)):
        if len(dict) == 1:
            break
        else:
#             print('CURRENT dict\n',dict)
            print('---Find out maxG in each pathway->locate the min_maxG->extract pathways with min_maxG and discard others---')
            dict = Redefine_Pathway(dict)
            if dict != None:
                print('NEW dict\n',dict)
                print(len(dict))
                if len(dict) >1:
                    print('---Locate maxG in each pathway->remove maxG and steps before it---')
                    dict = Redefine_G(dict)#locate the maxG in each pathway and REMOVE all steps before the maxG and maxG step itself
                    print('REDEFINE dict\n',dict)
                    print(len(dict))
                else:
                    return print("completed: 'best' pathway found")
            else:
                return print("completed: More than one 'best' pathway; Empty delta G list.")



def G_dictionary(filename):
    f = open(filename, 'r')
    lines = f.readlines()
    lines = lines[5:]

    G_dict = {} #dictionary includes Gibbs energy and reactions

    for count,line in enumerate(lines):
        if 'Pathway' in line[:8]:
            Gibbs_energy, reaction_for_drawing, rules_for_filter = [], [], []

            for i in range(20):
                if count+(i+1) == len(lines):
                    break
                elif 'Pathway' in lines[count+(i+1)]:
                    break
                else:
                    reaction_HSG = lines[count+(i+1)].split("\t") #split the line into ['reaction','H','S','G']
                    reaction = reaction_HSG[0]
                    rules = dic[reaction][0]
                    deltaG = round(dic[reaction][1],2)
                    if rules in rds_define:
                        Gibbs_energy.append(deltaG)
                        reaction_for_drawing.append(reaction)
                        rules_for_filter.append(rules)
            G_dict[line.strip()] = (Gibbs_energy, reaction_for_drawing, rules_for_filter) #tuple created

    # Create a temperaily dictionary for filtering
    G_dict_initial = {} # dictionary includes only Gibbs energy
    for count, i in enumerate(G_dict):
        G_dict_initial[i] = [G_dict[i][0], G_dict[i][2]]
    return G_dict_initial


df_RING_Table = pd.read_csv("./RING_Summary_HS.csv",index_col=0,squeeze=True)
dic = {}
for i in range(len(df_RING_Table)):
    dic[df_RING_Table['Reactions'][i+1]] = [df_RING_Table['Rules'][i+1], df_RING_Table['delta G'][i+1]]

rds_define = ['Dehydrogenation','CyclizationA','Hydrogenolysis']

print('rds_define:', rds_define)
file_i = [6,7,8,12,21,27,28,29,30,31,38,63,64,65,66,67,68,69,70,71,77]
for i in file_i:
    filename = "../Pathway_Analysis_Result_hydrogenolysis/Pathways_AnaResult_HS_%s.txt" % i
    print(filename[-30:-4])

    G_dict_initial = G_dictionary(filename)
    print('Initial length:',len(G_dict_initial))
    run(G_dict_initial)
