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
bool checkCCRt_Hydrogenolysism0(const Molecule& m0) {
  return true;
}
bool checkCCRt_Hydrogenolysism1(const Molecule& m1) {
  return true;
}
bool checkCCRt_Hydrogenolysismboth(const Molecule& m0, const Molecule& m1) {
  return true;
}
bool Rt_Hydrogenolysisprodcons(const Molecule& m0) {
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
bool checkCCRt_CyclizationAmonly(const Molecule& m0) {
  return !(m0.iscyclicmolecule()) && true;
}
bool Rt_CyclizationAprodcons(const Molecule& m0) {
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
  return m0.moleculestring() == Molecule("c1ccccc1", moleculesize("c1ccccc1")).unique_smiles() && true;
}
bool checkPathway20(RxnPathway& p) {
  return true;
}
bool checkCglobalConstraints(const Molecule& m0) {
  return !(Patternmatch(m0, Substructure("C1(=C2(=C3))", patternsize("C1(=C2(=C3))")), 1).GetDistinctMatches()>=1) && true;
}
bool DummyFunctionForThermoCorrelation(const Molecule& m0, double& EnthalpyA, double& EnthalpyB, double& EntropyA, double& EntropyB) { return true;}
ThermoCorrelationPtr ThermoGA::CorrelationPtr = &DummyFunctionForThermoCorrelation;
 bool ThermoGA::HasCorrelationsForThermo = false;

int main()
{
   char *programName = "Alkylaromatics_upcycling_Nov23";
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
vector<KineticParamPtr> kineticFns(4);
   reactantlist.push_back("CCCCCCCCCC");
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

  Reactiontype Rt_Hydrogenolysis;
  Rt_Hydrogenolysis.add_reactant_pattern(Substructure("'C'[{!1}]1(-'C'[{!1}]2)", patternsize("'C'[{!1}]1(-'C'[{!1}]2)")));
  Rt_Hydrogenolysis.add_reactant_pattern(Substructure("H3(-H4)", patternsize("H3(-H4)")));
   Rt_Hydrogenolysis.add_reactantconstraint(&checkCCRt_Hydrogenolysism0);
   Rt_Hydrogenolysis.add_reactantconstraint(&checkCCRt_Hydrogenolysism1);
   Rt_Hydrogenolysis.add_combined_constraint(&checkCCRt_Hydrogenolysismboth);
   Rt_Hydrogenolysis.disconnect_bond(1,2);
   Rt_Hydrogenolysis.disconnect_bond(3,4);
   Rt_Hydrogenolysis.connect_bond(3,1);
   Rt_Hydrogenolysis.connect_bond(4,2);
  Rt_Hydrogenolysis.add_productconstraint(&Rt_Hydrogenolysisprodcons);
  Rt_Hydrogenolysis.setRuleName("Hydrogenolysis");
  Rtypelist.push_back(Rt_Hydrogenolysis); 

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

  Reactiontype Rt_CyclizationA;
  Rt_CyclizationA.add_reactant_pattern(Substructure("C1(~C2(~C3(~C4(~C5(~C6(-H7))))))(-H8)", patternsize("C1(~C2(~C3(~C4(~C5(~C6(-H7))))))(-H8)")));
   Rt_CyclizationA.add_reactantconstraint(&checkCCRt_CyclizationAmonly);
   Rt_CyclizationA.disconnect_bond(7,6);
   Rt_CyclizationA.disconnect_bond(8,1);
   Rt_CyclizationA.connect_bond(1,6);
   Rt_CyclizationA.connect_bond(7,8);
  Rt_CyclizationA.add_productconstraint(&Rt_CyclizationAprodcons);
  Rt_CyclizationA.setRuleName("CyclizationA");
  Rtypelist.push_back(Rt_CyclizationA); 
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
  Pathways P0(&test_network, PC0, "Pathways_HS_6.txt");
  P0.QueryPlusGenerate(&PathMolCon0);
  PathwayConstraints PC1;
  PC1.SetMaxRelativeLength(1);
  PC1.AddPathwayConstrPtr(&checkPathway1);
  Pathways P1(&test_network, PC1, "Pathways_HS_7.txt");
  P1.QueryPlusGenerate(&PathMolCon1);
  PathwayConstraints PC2;
  PC2.SetMaxRelativeLength(1);
  PC2.AddPathwayConstrPtr(&checkPathway2);
  Pathways P2(&test_network, PC2, "Pathways_HS_8.txt");
  P2.QueryPlusGenerate(&PathMolCon2);
  PathwayConstraints PC3;
  PC3.SetMaxRelativeLength(1);
  PC3.AddPathwayConstrPtr(&checkPathway3);
  Pathways P3(&test_network, PC3, "Pathways_HS_12.txt");
  P3.QueryPlusGenerate(&PathMolCon3);
  PathwayConstraints PC4;
  PC4.SetMaxRelativeLength(1);
  PC4.AddPathwayConstrPtr(&checkPathway4);
  Pathways P4(&test_network, PC4, "Pathways_HS_21.txt");
  P4.QueryPlusGenerate(&PathMolCon4);
  PathwayConstraints PC5;
  PC5.SetMaxRelativeLength(1);
  PC5.AddPathwayConstrPtr(&checkPathway5);
  Pathways P5(&test_network, PC5, "Pathways_HS_27.txt");
  P5.QueryPlusGenerate(&PathMolCon5);
  PathwayConstraints PC6;
  PC6.SetMaxRelativeLength(1);
  PC6.AddPathwayConstrPtr(&checkPathway6);
  Pathways P6(&test_network, PC6, "Pathways_HS_28.txt");
  P6.QueryPlusGenerate(&PathMolCon6);
  PathwayConstraints PC7;
  PC7.SetMaxRelativeLength(1);
  PC7.AddPathwayConstrPtr(&checkPathway7);
  Pathways P7(&test_network, PC7, "Pathways_HS_29.txt");
  P7.QueryPlusGenerate(&PathMolCon7);
  PathwayConstraints PC8;
  PC8.SetMaxRelativeLength(1);
  PC8.AddPathwayConstrPtr(&checkPathway8);
  Pathways P8(&test_network, PC8, "Pathways_HS_30.txt");
  P8.QueryPlusGenerate(&PathMolCon8);
  PathwayConstraints PC9;
  PC9.SetMaxRelativeLength(1);
  PC9.AddPathwayConstrPtr(&checkPathway9);
  Pathways P9(&test_network, PC9, "Pathways_HS_31.txt");
  P9.QueryPlusGenerate(&PathMolCon9);
  PathwayConstraints PC10;
  PC10.SetMaxRelativeLength(1);
  PC10.AddPathwayConstrPtr(&checkPathway10);
  Pathways P10(&test_network, PC10, "Pathways_HS_38.txt");
  P10.QueryPlusGenerate(&PathMolCon10);
  PathwayConstraints PC11;
  PC11.SetMaxRelativeLength(1);
  PC11.AddPathwayConstrPtr(&checkPathway11);
  Pathways P11(&test_network, PC11, "Pathways_HS_63.txt");
  P11.QueryPlusGenerate(&PathMolCon11);
  PathwayConstraints PC12;
  PC12.SetMaxRelativeLength(1);
  PC12.AddPathwayConstrPtr(&checkPathway12);
  Pathways P12(&test_network, PC12, "Pathways_HS_64.txt");
  P12.QueryPlusGenerate(&PathMolCon12);
  PathwayConstraints PC13;
  PC13.SetMaxRelativeLength(1);
  PC13.AddPathwayConstrPtr(&checkPathway13);
  Pathways P13(&test_network, PC13, "Pathways_HS_65.txt");
  P13.QueryPlusGenerate(&PathMolCon13);
  PathwayConstraints PC14;
  PC14.SetMaxRelativeLength(1);
  PC14.AddPathwayConstrPtr(&checkPathway14);
  Pathways P14(&test_network, PC14, "Pathways_HS_66.txt");
  P14.QueryPlusGenerate(&PathMolCon14);
  PathwayConstraints PC15;
  PC15.SetMaxRelativeLength(1);
  PC15.AddPathwayConstrPtr(&checkPathway15);
  Pathways P15(&test_network, PC15, "Pathways_HS_67.txt");
  P15.QueryPlusGenerate(&PathMolCon15);
  PathwayConstraints PC16;
  PC16.SetMaxRelativeLength(1);
  PC16.AddPathwayConstrPtr(&checkPathway16);
  Pathways P16(&test_network, PC16, "Pathways_HS_68.txt");
  P16.QueryPlusGenerate(&PathMolCon16);
  PathwayConstraints PC17;
  PC17.SetMaxRelativeLength(1);
  PC17.AddPathwayConstrPtr(&checkPathway17);
  Pathways P17(&test_network, PC17, "Pathways_HS_69.txt");
  P17.QueryPlusGenerate(&PathMolCon17);
  PathwayConstraints PC18;
  PC18.SetMaxRelativeLength(1);
  PC18.AddPathwayConstrPtr(&checkPathway18);
  Pathways P18(&test_network, PC18, "Pathways_HS_70.txt");
  P18.QueryPlusGenerate(&PathMolCon18);
  PathwayConstraints PC19;
  PC19.SetMaxRelativeLength(1);
  PC19.AddPathwayConstrPtr(&checkPathway19);
  Pathways P19(&test_network, PC19, "Pathways_HS_71.txt");
  P19.QueryPlusGenerate(&PathMolCon19);
  PathwayConstraints PC20;
  PC20.SetMaxRelativeLength(1);
  PC20.AddPathwayConstrPtr(&checkPathway20);
  Pathways P20(&test_network, PC20, "Pathways_HS_77.txt");
  P20.QueryPlusGenerate(&PathMolCon20);
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
