#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath>
#include <sstream>
#include <map>
#include <vector>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include "Classheader.h"
#include "AdditionalFunctions.h"
#include "StringRegistry.h"
bool checkCCRt_Dehydrogenationmonly(const Molecule& m0) {
  return true;
}
bool Rt_Dehydrogenationprodcons(const Molecule& m0) {
  return true;
}
bool checkCCRt_BetaScissionmonly(const Molecule& m0) {
  return true;
}
bool Rt_BetaScissionprodcons(const Molecule& m0) {
  return true;
}
bool checkCCRt_EndMethaneBetaScissionWithHB2m0(const Molecule& m0) {
  return true;
}
bool checkCCRt_EndMethaneBetaScissionWithHB2m1(const Molecule& m1) {
  return true;
}
bool checkCCRt_EndMethaneBetaScissionWithHB2mboth(const Molecule& m0, const Molecule& m1) {
  return true;
}
bool Rt_EndMethaneBetaScissionWithHB2prodcons(const Molecule& m0) {
  return true;
}
bool checkCCRt_Hydrogenationm0(const Molecule& m0) {
  return true;
}
bool checkCCRt_Hydrogenationm1(const Molecule& m1) {
  return true;
}
bool checkCCRt_Hydrogenationmboth(const Molecule& m0, const Molecule& m1) {
  return true;
}
bool Rt_Hydrogenationprodcons(const Molecule& m0) {
  return true;
}
bool checkCCRt_FirstCyclizationmonly(const Molecule& m0) {
  return !(m0.iscyclicmolecule()) && true;
}
bool Rt_FirstCyclizationprodcons(const Molecule& m0) {
  return true;
}
bool checkCCRt_SecondCyclizationtypeAmonly(const Molecule& m0) {
  return m0.iscyclicmolecule() && true;
}
bool Rt_SecondCyclizationtypeAprodcons(const Molecule& m0) {
  return true;
}
bool checkCCRt_SecondCyclizationtypeBmonly(const Molecule& m0) {
  return m0.iscyclicmolecule() && true;
}
bool Rt_SecondCyclizationtypeBprodcons(const Molecule& m0) {
  return true;
}
bool PathMolCon0(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)Cc1c(cccc1)C", moleculesize("C(=C)Cc1c(cccc1)C")).unique_smiles() && true;
}
bool checkPathway0(RxnPathway& p) {
  return true;
}
bool PathMolCon1(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)c1c(C=C)cccc1", moleculesize("C(=C)c1c(C=C)cccc1")).unique_smiles() && true;
}
bool checkPathway1(RxnPathway& p) {
  return true;
}
bool PathMolCon2(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)c1c(cccc1)C", moleculesize("C(=C)c1c(cccc1)C")).unique_smiles() && true;
}
bool checkPathway2(RxnPathway& p) {
  return true;
}
bool PathMolCon3(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=Cc1c(cccc1)C)C", moleculesize("C(=Cc1c(cccc1)C)C")).unique_smiles() && true;
}
bool checkPathway3(RxnPathway& p) {
  return true;
}
bool PathMolCon4(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(C=C)ccccc1", moleculesize("c1(C=C)ccccc1")).unique_smiles() && true;
}
bool checkPathway4(RxnPathway& p) {
  return true;
}
bool PathMolCon5(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(CC)ccccc1", moleculesize("c1(CC)ccccc1")).unique_smiles() && true;
}
bool checkPathway5(RxnPathway& p) {
  return true;
}
bool PathMolCon6(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(C=C)cccc1)CC", moleculesize("c1(c(C=C)cccc1)CC")).unique_smiles() && true;
}
bool checkPathway6(RxnPathway& p) {
  return true;
}
bool PathMolCon7(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(CC)cccc1)C", moleculesize("c1(c(CC)cccc1)C")).unique_smiles() && true;
}
bool checkPathway7(RxnPathway& p) {
  return true;
}
bool PathMolCon8(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(CC)cccc1)CC", moleculesize("c1(c(CC)cccc1)CC")).unique_smiles() && true;
}
bool checkPathway8(RxnPathway& p) {
  return true;
}
bool PathMolCon9(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(CCC)cccc1)C", moleculesize("c1(c(CCC)cccc1)C")).unique_smiles() && true;
}
bool checkPathway9(RxnPathway& p) {
  return true;
}
bool PathMolCon10(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(cccc1)C)C", moleculesize("c1(c(cccc1)C)C")).unique_smiles() && true;
}
bool checkPathway10(RxnPathway& p) {
  return true;
}
bool PathMolCon11(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)C", moleculesize("c1(ccccc1)C")).unique_smiles() && true;
}
bool checkPathway11(RxnPathway& p) {
  return true;
}
bool PathMolCon12(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)C=CC", moleculesize("c1(ccccc1)C=CC")).unique_smiles() && true;
}
bool checkPathway12(RxnPathway& p) {
  return true;
}
bool PathMolCon13(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)C=CC=C", moleculesize("c1(ccccc1)C=CC=C")).unique_smiles() && true;
}
bool checkPathway13(RxnPathway& p) {
  return true;
}
bool PathMolCon14(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)C=CCC", moleculesize("c1(ccccc1)C=CCC")).unique_smiles() && true;
}
bool checkPathway14(RxnPathway& p) {
  return true;
}
bool PathMolCon15(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)CC=C", moleculesize("c1(ccccc1)CC=C")).unique_smiles() && true;
}
bool checkPathway15(RxnPathway& p) {
  return true;
}
bool PathMolCon16(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)CC=CC", moleculesize("c1(ccccc1)CC=CC")).unique_smiles() && true;
}
bool checkPathway16(RxnPathway& p) {
  return true;
}
bool PathMolCon17(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)CCC", moleculesize("c1(ccccc1)CCC")).unique_smiles() && true;
}
bool checkPathway17(RxnPathway& p) {
  return true;
}
bool PathMolCon18(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)CCC=C", moleculesize("c1(ccccc1)CCC=C")).unique_smiles() && true;
}
bool checkPathway18(RxnPathway& p) {
  return true;
}
bool PathMolCon19(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)CCCC", moleculesize("c1(ccccc1)CCCC")).unique_smiles() && true;
}
bool checkPathway19(RxnPathway& p) {
  return true;
}
bool PathMolCon20(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c12c(cccc1)C=CC=C2", moleculesize("c12c(cccc1)C=CC=C2")).unique_smiles() && true;
}
bool checkPathway20(RxnPathway& p) {
  return true;
}
bool PathMolCon21(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c12c(cccc1)C=CCC2", moleculesize("c12c(cccc1)C=CCC2")).unique_smiles() && true;
}
bool checkPathway21(RxnPathway& p) {
  return true;
}
bool PathMolCon22(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c12c(cccc1)CC=CC2", moleculesize("c12c(cccc1)CC=CC2")).unique_smiles() && true;
}
bool checkPathway22(RxnPathway& p) {
  return true;
}
bool PathMolCon23(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c12c(cccc1)CCCC2", moleculesize("c12c(cccc1)CCCC2")).unique_smiles() && true;
}
bool checkPathway23(RxnPathway& p) {
  return true;
}
bool PathMolCon24(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c12c(cccc1)cccc2", moleculesize("c12c(cccc1)cccc2")).unique_smiles() && true;
}
bool checkPathway24(RxnPathway& p) {
  return true;
}
bool PathMolCon25(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1ccccc1", moleculesize("c1ccccc1")).unique_smiles() && true;
}
bool checkPathway25(RxnPathway& p) {
  return true;
}
bool MolQuerycons26(const Molecule& m0) {
  return m0.isaromaticmolecule() && true;
}
bool checkCglobalConstraints(const Molecule& m0) {
  return !(Patternmatch(m0, Substructure("C1(=C2(=C3))", patternsize("C1(=C2(=C3))")), 1).GetDistinctMatches()>=1) && true;
}
bool DummyFunctionForThermoCorrelation(const Molecule& m0, double& EnthalpyA, double& EnthalpyB, double& EntropyA, double& EntropyB) { return true;}
ThermoCorrelationPtr ThermoGA::CorrelationPtr = &DummyFunctionForThermoCorrelation;
 bool ThermoGA::HasCorrelationsForThermo = false;

int main()
{
   char *programName = "./Alkylaromatics_upcycling_Feb09";
   list<string> reactantlist;
  vector<string> CompositeAtomsList;
  vector<pair<string,SiteType> > CompositeSiteList;
 ifstream reactantfile("reactants.txt");
   string line;
   if (reactantfile.is_open())
   {
      while (! reactantfile.eof() )
      {
         getline (reactantfile,line);
         if (line!="")
            reactantlist.push_back(line);
      }
      reactantfile.close();
   }
   else cout << "Unable to open reactants.txt, so skipping reactant input from file"<<endl;
vector<Reactiontype> Rtypelist;
vector<KineticParamPtr> kineticFns(7);
   reactantlist.push_back("CCCCCCCCCC");
   reactantlist.push_back("[{B}H][{B}H]");
CompositeAtomsList.push_back("{B}");

  Reactiontype Rt_Dehydrogenation;
  Rt_Dehydrogenation.add_reactant_pattern(Substructure("C1(-C2(-H4))(-H3)", patternsize("C1(-C2(-H4))(-H3)")));
   Rt_Dehydrogenation.add_reactantconstraint(&checkCCRt_Dehydrogenationmonly);
   Rt_Dehydrogenation.disconnect_bond(1,3);
   Rt_Dehydrogenation.disconnect_bond(2,4);
   Rt_Dehydrogenation.increaseBO(1,2, 1 );
   Rt_Dehydrogenation.connect_bond(3,4);
  Rt_Dehydrogenation.add_productconstraint(&Rt_Dehydrogenationprodcons);
  Rt_Dehydrogenation.setRuleName("Dehydrogenation");
  Rtypelist.push_back(Rt_Dehydrogenation); 

  Reactiontype Rt_BetaScission;
  Rt_BetaScission.add_reactant_pattern(Substructure("'C'[{!1}]3(-'C'[{!1}]4(-H5))(-C2(=C1))", patternsize("'C'[{!1}]3(-'C'[{!1}]4(-H5))(-C2(=C1))")));
   Rt_BetaScission.add_reactantconstraint(&checkCCRt_BetaScissionmonly);
   Rt_BetaScission.disconnect_bond(2,3);
   Rt_BetaScission.disconnect_bond(4,5);
   Rt_BetaScission.increaseBO(3,4, 1 );
   Rt_BetaScission.connect_bond(5,2);
  Rt_BetaScission.add_productconstraint(&Rt_BetaScissionprodcons);
  Rt_BetaScission.setRuleName("BetaScission");
  Rtypelist.push_back(Rt_BetaScission); 

  Reactiontype Rt_EndMethaneBetaScissionWithHB2;
  Rt_EndMethaneBetaScissionWithHB2.add_reactant_pattern(Substructure("'C'[{!1}]2(-'C'[{!1}]3[!|C|>1])(=C1)", patternsize("'C'[{!1}]2(-'C'[{!1}]3[!|C|>1])(=C1)")));
  Rt_EndMethaneBetaScissionWithHB2.add_reactant_pattern(Substructure("{B}4(-{B}5(-H7))(-H6)", patternsize("{B}4(-{B}5(-H7))(-H6)")));
   Rt_EndMethaneBetaScissionWithHB2.add_reactantconstraint(&checkCCRt_EndMethaneBetaScissionWithHB2m0);
   Rt_EndMethaneBetaScissionWithHB2.add_reactantconstraint(&checkCCRt_EndMethaneBetaScissionWithHB2m1);
   Rt_EndMethaneBetaScissionWithHB2.add_combined_constraint(&checkCCRt_EndMethaneBetaScissionWithHB2mboth);
   Rt_EndMethaneBetaScissionWithHB2.disconnect_bond(2,3);
   Rt_EndMethaneBetaScissionWithHB2.disconnect_bond(4,6);
   Rt_EndMethaneBetaScissionWithHB2.disconnect_bond(5,7);
   Rt_EndMethaneBetaScissionWithHB2.connect_bond(2,6);
   Rt_EndMethaneBetaScissionWithHB2.connect_bond(3,7);
  Rt_EndMethaneBetaScissionWithHB2.add_productconstraint(&Rt_EndMethaneBetaScissionWithHB2prodcons);
  Rt_EndMethaneBetaScissionWithHB2.setRuleName("EndMethaneBetaScissionWithHB2");
  Rtypelist.push_back(Rt_EndMethaneBetaScissionWithHB2); 

  Reactiontype Rt_Hydrogenation;
  Rt_Hydrogenation.add_reactant_pattern(Substructure("C1(=C2)", patternsize("C1(=C2)")));
  Rt_Hydrogenation.add_reactant_pattern(Substructure("H3(-H4)", patternsize("H3(-H4)")));
   Rt_Hydrogenation.add_reactantconstraint(&checkCCRt_Hydrogenationm0);
   Rt_Hydrogenation.add_reactantconstraint(&checkCCRt_Hydrogenationm1);
   Rt_Hydrogenation.add_combined_constraint(&checkCCRt_Hydrogenationmboth);
   Rt_Hydrogenation.decreaseBO(1,2, 1);
   Rt_Hydrogenation.disconnect_bond(3,4);
   Rt_Hydrogenation.connect_bond(3,1);
   Rt_Hydrogenation.connect_bond(4,2);
  Rt_Hydrogenation.add_productconstraint(&Rt_Hydrogenationprodcons);
  Rt_Hydrogenation.setRuleName("Hydrogenation");
  Rtypelist.push_back(Rt_Hydrogenation); 

  Reactiontype Rt_FirstCyclization;
  Rt_FirstCyclization.add_reactant_pattern(Substructure("C1(=C2(~C3(~C4(~C5(=C6(-H7))))))", patternsize("C1(=C2(~C3(~C4(~C5(=C6(-H7))))))")));
   Rt_FirstCyclization.add_reactantconstraint(&checkCCRt_FirstCyclizationmonly);
   Rt_FirstCyclization.disconnect_bond(7,6);
   Rt_FirstCyclization.decreaseBO(1,2, 1);
   Rt_FirstCyclization.connect_bond(1,6);
   Rt_FirstCyclization.connect_bond(7,2);
  Rt_FirstCyclization.add_productconstraint(&Rt_FirstCyclizationprodcons);
  Rt_FirstCyclization.setRuleName("FirstCyclization");
  Rtypelist.push_back(Rt_FirstCyclization); 

  Reactiontype Rt_SecondCyclizationtypeA;
  Rt_SecondCyclizationtypeA.add_reactant_pattern(Substructure("'C'[{!1}]1(='C'[{!1}]2(~'C'[{!1}]3(~'C'[{!1}]4(~'C'[{1}]5(%'C'[{1}]6(-H7))))))", patternsize("'C'[{!1}]1(='C'[{!1}]2(~'C'[{!1}]3(~'C'[{!1}]4(~'C'[{1}]5(%'C'[{1}]6(-H7))))))")));
   Rt_SecondCyclizationtypeA.add_reactantconstraint(&checkCCRt_SecondCyclizationtypeAmonly);
   Rt_SecondCyclizationtypeA.disconnect_bond(7,6);
   Rt_SecondCyclizationtypeA.decreaseBO(1,2, 1);
   Rt_SecondCyclizationtypeA.connect_bond(1,6);
   Rt_SecondCyclizationtypeA.connect_bond(7,2);
  Rt_SecondCyclizationtypeA.add_productconstraint(&Rt_SecondCyclizationtypeAprodcons);
  Rt_SecondCyclizationtypeA.setRuleName("SecondCyclizationtypeA");
  Rtypelist.push_back(Rt_SecondCyclizationtypeA); 

  Reactiontype Rt_SecondCyclizationtypeB;
  Rt_SecondCyclizationtypeB.add_reactant_pattern(Substructure("'C'[{!1}]1(='C'[{!1}]2(~'C'[{!1}]3(~'C'[{1}]4(%'C'[{1}]5(-'C'[{!1}]6(-H7))))))", patternsize("'C'[{!1}]1(='C'[{!1}]2(~'C'[{!1}]3(~'C'[{1}]4(%'C'[{1}]5(-'C'[{!1}]6(-H7))))))")));
   Rt_SecondCyclizationtypeB.add_reactantconstraint(&checkCCRt_SecondCyclizationtypeBmonly);
   Rt_SecondCyclizationtypeB.disconnect_bond(7,6);
   Rt_SecondCyclizationtypeB.decreaseBO(1,2, 1);
   Rt_SecondCyclizationtypeB.connect_bond(1,6);
   Rt_SecondCyclizationtypeB.connect_bond(7,2);
  Rt_SecondCyclizationtypeB.add_productconstraint(&Rt_SecondCyclizationtypeBprodcons);
  Rt_SecondCyclizationtypeB.setRuleName("SecondCyclizationtypeB");
  Rtypelist.push_back(Rt_SecondCyclizationtypeB); 
   LumpingStrategy L(false);
  
   if (reactantlist.size() == 0)
   {
      cout<<"No reactants specified!"<<endl;
      return -1;
   }

   try
   {
      list<string>::iterator it;
      for (it=reactantlist.begin();it!=reactantlist.end();it++)
      {
          throwsmileserror(*it);
      }
      rxn_net_gen test_network;
      test_network.AddInitialReactants(reactantlist);
      test_network.AddReactionRules(Rtypelist);
      test_network.AddGlobalConstraints(&checkCglobalConstraints);
      test_network.AddLumpingStrategy(L);
      test_network.AddCompositeSites(CompositeSiteList);
      test_network.SetCalcThermo(false);
      test_network.GenerateNetwork();
      if(L.shoudLump()) test_network.SetAllLumpedRxns();
      test_network.print_rxnlist();
      int d = 0;
  PathwayConstraints PC0;
  PC0.SetMaxRelativeLength(1);
  PC0.AddPathwayConstrPtr(&checkPathway0);
  Pathways P0(&test_network, PC0, "Pathways_AA_0.txt");
  P0.QueryPlusGenerate(&PathMolCon0);
  PathwayConstraints PC1;
  PC1.SetMaxRelativeLength(1);
  PC1.AddPathwayConstrPtr(&checkPathway1);
  Pathways P1(&test_network, PC1, "Pathways_AA_1.txt");
  P1.QueryPlusGenerate(&PathMolCon1);
  PathwayConstraints PC2;
  PC2.SetMaxRelativeLength(1);
  PC2.AddPathwayConstrPtr(&checkPathway2);
  Pathways P2(&test_network, PC2, "Pathways_AA_2.txt");
  P2.QueryPlusGenerate(&PathMolCon2);
  PathwayConstraints PC3;
  PC3.SetMaxRelativeLength(1);
  PC3.AddPathwayConstrPtr(&checkPathway3);
  Pathways P3(&test_network, PC3, "Pathways_AA_3.txt");
  P3.QueryPlusGenerate(&PathMolCon3);
  PathwayConstraints PC4;
  PC4.SetMaxRelativeLength(1);
  PC4.AddPathwayConstrPtr(&checkPathway4);
  Pathways P4(&test_network, PC4, "Pathways_AA_4.txt");
  P4.QueryPlusGenerate(&PathMolCon4);
  PathwayConstraints PC5;
  PC5.SetMaxRelativeLength(1);
  PC5.AddPathwayConstrPtr(&checkPathway5);
  Pathways P5(&test_network, PC5, "Pathways_AA_5.txt");
  P5.QueryPlusGenerate(&PathMolCon5);
  PathwayConstraints PC6;
  PC6.SetMaxRelativeLength(1);
  PC6.AddPathwayConstrPtr(&checkPathway6);
  Pathways P6(&test_network, PC6, "Pathways_AA_6.txt");
  P6.QueryPlusGenerate(&PathMolCon6);
  PathwayConstraints PC7;
  PC7.SetMaxRelativeLength(1);
  PC7.AddPathwayConstrPtr(&checkPathway7);
  Pathways P7(&test_network, PC7, "Pathways_AA_7.txt");
  P7.QueryPlusGenerate(&PathMolCon7);
  PathwayConstraints PC8;
  PC8.SetMaxRelativeLength(1);
  PC8.AddPathwayConstrPtr(&checkPathway8);
  Pathways P8(&test_network, PC8, "Pathways_AA_8.txt");
  P8.QueryPlusGenerate(&PathMolCon8);
  PathwayConstraints PC9;
  PC9.SetMaxRelativeLength(1);
  PC9.AddPathwayConstrPtr(&checkPathway9);
  Pathways P9(&test_network, PC9, "Pathways_AA_9.txt");
  P9.QueryPlusGenerate(&PathMolCon9);
  PathwayConstraints PC10;
  PC10.SetMaxRelativeLength(1);
  PC10.AddPathwayConstrPtr(&checkPathway10);
  Pathways P10(&test_network, PC10, "Pathways_AA_10.txt");
  P10.QueryPlusGenerate(&PathMolCon10);
  PathwayConstraints PC11;
  PC11.SetMaxRelativeLength(1);
  PC11.AddPathwayConstrPtr(&checkPathway11);
  Pathways P11(&test_network, PC11, "Pathways_AA_11.txt");
  P11.QueryPlusGenerate(&PathMolCon11);
  PathwayConstraints PC12;
  PC12.SetMaxRelativeLength(1);
  PC12.AddPathwayConstrPtr(&checkPathway12);
  Pathways P12(&test_network, PC12, "Pathways_AA_12.txt");
  P12.QueryPlusGenerate(&PathMolCon12);
  PathwayConstraints PC13;
  PC13.SetMaxRelativeLength(1);
  PC13.AddPathwayConstrPtr(&checkPathway13);
  Pathways P13(&test_network, PC13, "Pathways_AA_13.txt");
  P13.QueryPlusGenerate(&PathMolCon13);
  PathwayConstraints PC14;
  PC14.SetMaxRelativeLength(1);
  PC14.AddPathwayConstrPtr(&checkPathway14);
  Pathways P14(&test_network, PC14, "Pathways_AA_14.txt");
  P14.QueryPlusGenerate(&PathMolCon14);
  PathwayConstraints PC15;
  PC15.SetMaxRelativeLength(1);
  PC15.AddPathwayConstrPtr(&checkPathway15);
  Pathways P15(&test_network, PC15, "Pathways_AA_15.txt");
  P15.QueryPlusGenerate(&PathMolCon15);
  PathwayConstraints PC16;
  PC16.SetMaxRelativeLength(1);
  PC16.AddPathwayConstrPtr(&checkPathway16);
  Pathways P16(&test_network, PC16, "Pathways_AA_16.txt");
  P16.QueryPlusGenerate(&PathMolCon16);
  PathwayConstraints PC17;
  PC17.SetMaxRelativeLength(1);
  PC17.AddPathwayConstrPtr(&checkPathway17);
  Pathways P17(&test_network, PC17, "Pathways_AA_17.txt");
  P17.QueryPlusGenerate(&PathMolCon17);
  PathwayConstraints PC18;
  PC18.SetMaxRelativeLength(1);
  PC18.AddPathwayConstrPtr(&checkPathway18);
  Pathways P18(&test_network, PC18, "Pathways_AA_18.txt");
  P18.QueryPlusGenerate(&PathMolCon18);
  PathwayConstraints PC19;
  PC19.SetMaxRelativeLength(1);
  PC19.AddPathwayConstrPtr(&checkPathway19);
  Pathways P19(&test_network, PC19, "Pathways_AA_19.txt");
  P19.QueryPlusGenerate(&PathMolCon19);
  PathwayConstraints PC20;
  PC20.SetMaxRelativeLength(1);
  PC20.AddPathwayConstrPtr(&checkPathway20);
  Pathways P20(&test_network, PC20, "Pathways_AA_20.txt");
  P20.QueryPlusGenerate(&PathMolCon20);
  PathwayConstraints PC21;
  PC21.SetMaxRelativeLength(1);
  PC21.AddPathwayConstrPtr(&checkPathway21);
  Pathways P21(&test_network, PC21, "Pathways_AA_21.txt");
  P21.QueryPlusGenerate(&PathMolCon21);
  PathwayConstraints PC22;
  PC22.SetMaxRelativeLength(1);
  PC22.AddPathwayConstrPtr(&checkPathway22);
  Pathways P22(&test_network, PC22, "Pathways_AA_22.txt");
  P22.QueryPlusGenerate(&PathMolCon22);
  PathwayConstraints PC23;
  PC23.SetMaxRelativeLength(1);
  PC23.AddPathwayConstrPtr(&checkPathway23);
  Pathways P23(&test_network, PC23, "Pathways_AA_23.txt");
  P23.QueryPlusGenerate(&PathMolCon23);
  PathwayConstraints PC24;
  PC24.SetMaxRelativeLength(1);
  PC24.AddPathwayConstrPtr(&checkPathway24);
  Pathways P24(&test_network, PC24, "Pathways_AA_24.txt");
  P24.QueryPlusGenerate(&PathMolCon24);
  PathwayConstraints PC25;
  PC25.SetMaxRelativeLength(1);
  PC25.AddPathwayConstrPtr(&checkPathway25);
  Pathways P25(&test_network, PC25, "Pathways_AA_25.txt");
  P25.QueryPlusGenerate(&PathMolCon25);
   MoleculeQuery mq26(&test_network, &MolQuerycons26, "Aromatic_mol_C10_NoPCP.txt", false, false);
   }
   catch (pair<string, int> error)
   {
      catchsmileserror (error);
   }
   catch (pair<string,string> c)
   {
      cout<<"SMILES "<<c.first<<"has an unidentified character: "<<c.second<<endl;
   }
   catch (int er)
   {
      if (er==1) cout<<"exiting execution!"<<endl;
   }
   return 0;
}
