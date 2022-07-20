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
bool checkCCRt_PCPmonly(const Molecule& m0) {
  return !(m0.iscyclicmolecule()) && true;
}
bool Rt_PCPprodcons(const Molecule& m0) {
  return true;
}
bool PathMolCon0(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)(Cc1ccccc1)C", moleculesize("C(=C)(Cc1ccccc1)C")).unique_smiles() && true;
}
bool checkPathway0(RxnPathway& p) {
  return true;
}
bool PathMolCon1(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)(c1c(cccc1)C)C", moleculesize("C(=C)(c1c(cccc1)C)C")).unique_smiles() && true;
}
bool checkPathway1(RxnPathway& p) {
  return true;
}
bool PathMolCon2(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)(c1ccc(cc1)C)C", moleculesize("C(=C)(c1ccc(cc1)C)C")).unique_smiles() && true;
}
bool checkPathway2(RxnPathway& p) {
  return true;
}
bool PathMolCon3(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)(c1ccccc1)C", moleculesize("C(=C)(c1ccccc1)C")).unique_smiles() && true;
}
bool checkPathway3(RxnPathway& p) {
  return true;
}
bool PathMolCon4(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)(c1ccccc1)C=C", moleculesize("C(=C)(c1ccccc1)C=C")).unique_smiles() && true;
}
bool checkPathway4(RxnPathway& p) {
  return true;
}
bool PathMolCon5(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)(c1ccccc1)CC", moleculesize("C(=C)(c1ccccc1)CC")).unique_smiles() && true;
}
bool checkPathway5(RxnPathway& p) {
  return true;
}
bool PathMolCon6(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)Cc1c(cccc1)C", moleculesize("C(=C)Cc1c(cccc1)C")).unique_smiles() && true;
}
bool checkPathway6(RxnPathway& p) {
  return true;
}
bool PathMolCon7(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)c1c(C=C)cccc1", moleculesize("C(=C)c1c(C=C)cccc1")).unique_smiles() && true;
}
bool checkPathway7(RxnPathway& p) {
  return true;
}
bool PathMolCon8(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)c1c(cccc1)C", moleculesize("C(=C)c1c(cccc1)C")).unique_smiles() && true;
}
bool checkPathway8(RxnPathway& p) {
  return true;
}
bool PathMolCon9(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)c1c(cccc1C)C", moleculesize("C(=C)c1c(cccc1C)C")).unique_smiles() && true;
}
bool checkPathway9(RxnPathway& p) {
  return true;
}
bool PathMolCon10(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=C)c1ccc(C=C)cc1", moleculesize("C(=C)c1ccc(C=C)cc1")).unique_smiles() && true;
}
bool checkPathway10(RxnPathway& p) {
  return true;
}
bool PathMolCon11(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=CC)(c1ccccc1)C", moleculesize("C(=CC)(c1ccccc1)C")).unique_smiles() && true;
}
bool checkPathway11(RxnPathway& p) {
  return true;
}
bool PathMolCon12(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=Cc1c(cccc1)C)C", moleculesize("C(=Cc1c(cccc1)C)C")).unique_smiles() && true;
}
bool checkPathway12(RxnPathway& p) {
  return true;
}
bool PathMolCon13(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(=Cc1ccccc1)(C)C", moleculesize("C(=Cc1ccccc1)(C)C")).unique_smiles() && true;
}
bool checkPathway13(RxnPathway& p) {
  return true;
}
bool PathMolCon14(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(Cc1ccccc1)(C)C", moleculesize("C(Cc1ccccc1)(C)C")).unique_smiles() && true;
}
bool checkPathway14(RxnPathway& p) {
  return true;
}
bool PathMolCon15(const Molecule& m0) {
  return m0.moleculestring() == Molecule("C(c1c(cccc1)C)(C)C", moleculesize("C(c1c(cccc1)C)(C)C")).unique_smiles() && true;
}
bool checkPathway15(RxnPathway& p) {
  return true;
}
bool PathMolCon16(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(C(C)C)ccccc1", moleculesize("c1(C(C)C)ccccc1")).unique_smiles() && true;
}
bool checkPathway16(RxnPathway& p) {
  return true;
}
bool PathMolCon17(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(C(C=C)C)ccccc1", moleculesize("c1(C(C=C)C)ccccc1")).unique_smiles() && true;
}
bool checkPathway17(RxnPathway& p) {
  return true;
}
bool PathMolCon18(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(C(CC)C)ccccc1", moleculesize("c1(C(CC)C)ccccc1")).unique_smiles() && true;
}
bool checkPathway18(RxnPathway& p) {
  return true;
}
bool PathMolCon19(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(C=C)ccc(c(c1)C)C", moleculesize("c1(C=C)ccc(c(c1)C)C")).unique_smiles() && true;
}
bool checkPathway19(RxnPathway& p) {
  return true;
}
bool PathMolCon20(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(C=C)cccc(C=C)c1", moleculesize("c1(C=C)cccc(C=C)c1")).unique_smiles() && true;
}
bool checkPathway20(RxnPathway& p) {
  return true;
}
bool PathMolCon21(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(C=C)ccccc1", moleculesize("c1(C=C)ccccc1")).unique_smiles() && true;
}
bool checkPathway21(RxnPathway& p) {
  return true;
}
bool PathMolCon22(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(CC)ccc(C=C)cc1", moleculesize("c1(CC)ccc(C=C)cc1")).unique_smiles() && true;
}
bool checkPathway22(RxnPathway& p) {
  return true;
}
bool PathMolCon23(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(CC)ccc(CC)cc1", moleculesize("c1(CC)ccc(CC)cc1")).unique_smiles() && true;
}
bool checkPathway23(RxnPathway& p) {
  return true;
}
bool PathMolCon24(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(CC)ccc(c(c1)C)C", moleculesize("c1(CC)ccc(c(c1)C)C")).unique_smiles() && true;
}
bool checkPathway24(RxnPathway& p) {
  return true;
}
bool PathMolCon25(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(CC)cccc(C=C)c1", moleculesize("c1(CC)cccc(C=C)c1")).unique_smiles() && true;
}
bool checkPathway25(RxnPathway& p) {
  return true;
}
bool PathMolCon26(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(CC)cccc(CC)c1", moleculesize("c1(CC)cccc(CC)c1")).unique_smiles() && true;
}
bool checkPathway26(RxnPathway& p) {
  return true;
}
bool PathMolCon27(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(CC)ccccc1", moleculesize("c1(CC)ccccc1")).unique_smiles() && true;
}
bool checkPathway27(RxnPathway& p) {
  return true;
}
bool PathMolCon28(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(C=C)cccc1)CC", moleculesize("c1(c(C=C)cccc1)CC")).unique_smiles() && true;
}
bool checkPathway28(RxnPathway& p) {
  return true;
}
bool PathMolCon29(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(CC)cccc1)C", moleculesize("c1(c(CC)cccc1)C")).unique_smiles() && true;
}
bool checkPathway29(RxnPathway& p) {
  return true;
}
bool PathMolCon30(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(CC)cccc1)CC", moleculesize("c1(c(CC)cccc1)CC")).unique_smiles() && true;
}
bool checkPathway30(RxnPathway& p) {
  return true;
}
bool PathMolCon31(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(CCC)cccc1)C", moleculesize("c1(c(CCC)cccc1)C")).unique_smiles() && true;
}
bool checkPathway31(RxnPathway& p) {
  return true;
}
bool PathMolCon32(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(c(CC)ccc1)C)C", moleculesize("c1(c(c(CC)ccc1)C)C")).unique_smiles() && true;
}
bool checkPathway32(RxnPathway& p) {
  return true;
}
bool PathMolCon33(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(c(c(cc1)C)C)C)C", moleculesize("c1(c(c(c(cc1)C)C)C)C")).unique_smiles() && true;
}
bool checkPathway33(RxnPathway& p) {
  return true;
}
bool PathMolCon34(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(c(ccc1)C)C)C", moleculesize("c1(c(c(ccc1)C)C)C")).unique_smiles() && true;
}
bool checkPathway34(RxnPathway& p) {
  return true;
}
bool PathMolCon35(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(c(ccc1)C)CC)C", moleculesize("c1(c(c(ccc1)C)CC)C")).unique_smiles() && true;
}
bool checkPathway35(RxnPathway& p) {
  return true;
}
bool PathMolCon36(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(c(ccc1)C=C)C)C", moleculesize("c1(c(c(ccc1)C=C)C)C")).unique_smiles() && true;
}
bool checkPathway36(RxnPathway& p) {
  return true;
}
bool PathMolCon37(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(cc(c(c1)C)C)C)C", moleculesize("c1(c(cc(c(c1)C)C)C)C")).unique_smiles() && true;
}
bool checkPathway37(RxnPathway& p) {
  return true;
}
bool PathMolCon38(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(c(cccc1)C)C", moleculesize("c1(c(cccc1)C)C")).unique_smiles() && true;
}
bool checkPathway38(RxnPathway& p) {
  return true;
}
bool PathMolCon39(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cc(C=C)cc(c1)C)C", moleculesize("c1(cc(C=C)cc(c1)C)C")).unique_smiles() && true;
}
bool checkPathway39(RxnPathway& p) {
  return true;
}
bool PathMolCon40(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cc(CC)cc(c1)C)C", moleculesize("c1(cc(CC)cc(c1)C)C")).unique_smiles() && true;
}
bool checkPathway40(RxnPathway& p) {
  return true;
}
bool PathMolCon41(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cc(c(c(c1)C)C)C)C", moleculesize("c1(cc(c(c(c1)C)C)C)C")).unique_smiles() && true;
}
bool checkPathway41(RxnPathway& p) {
  return true;
}
bool PathMolCon42(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cc(cc(c1)C)C)C", moleculesize("c1(cc(cc(c1)C)C)C")).unique_smiles() && true;
}
bool checkPathway42(RxnPathway& p) {
  return true;
}
bool PathMolCon43(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(C(C)C)cc1)C", moleculesize("c1(ccc(C(C)C)cc1)C")).unique_smiles() && true;
}
bool checkPathway43(RxnPathway& p) {
  return true;
}
bool PathMolCon44(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(C=C)cc1)C", moleculesize("c1(ccc(C=C)cc1)C")).unique_smiles() && true;
}
bool checkPathway44(RxnPathway& p) {
  return true;
}
bool PathMolCon45(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(c(C=C)c1)C)C", moleculesize("c1(ccc(c(C=C)c1)C)C")).unique_smiles() && true;
}
bool checkPathway45(RxnPathway& p) {
  return true;
}
bool PathMolCon46(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(c(CC)c1)C)C", moleculesize("c1(ccc(c(CC)c1)C)C")).unique_smiles() && true;
}
bool checkPathway46(RxnPathway& p) {
  return true;
}
bool PathMolCon47(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(c(c1)C)C)C", moleculesize("c1(ccc(c(c1)C)C)C")).unique_smiles() && true;
}
bool checkPathway47(RxnPathway& p) {
  return true;
}
bool PathMolCon48(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(c(c1)C)C=C)C", moleculesize("c1(ccc(c(c1)C)C=C)C")).unique_smiles() && true;
}
bool checkPathway48(RxnPathway& p) {
  return true;
}
bool PathMolCon49(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(c(c1)C)CC)C", moleculesize("c1(ccc(c(c1)C)CC)C")).unique_smiles() && true;
}
bool checkPathway49(RxnPathway& p) {
  return true;
}
bool PathMolCon50(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(cc1)C)C", moleculesize("c1(ccc(cc1)C)C")).unique_smiles() && true;
}
bool checkPathway50(RxnPathway& p) {
  return true;
}
bool PathMolCon51(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(cc1)C=CC)C", moleculesize("c1(ccc(cc1)C=CC)C")).unique_smiles() && true;
}
bool checkPathway51(RxnPathway& p) {
  return true;
}
bool PathMolCon52(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(cc1)CC)C", moleculesize("c1(ccc(cc1)CC)C")).unique_smiles() && true;
}
bool checkPathway52(RxnPathway& p) {
  return true;
}
bool PathMolCon53(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(cc1)CC=C)C", moleculesize("c1(ccc(cc1)CC=C)C")).unique_smiles() && true;
}
bool checkPathway53(RxnPathway& p) {
  return true;
}
bool PathMolCon54(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccc(cc1)CCC)C", moleculesize("c1(ccc(cc1)CCC)C")).unique_smiles() && true;
}
bool checkPathway54(RxnPathway& p) {
  return true;
}
bool PathMolCon55(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cccc(C(=C)C)c1)C", moleculesize("c1(cccc(C(=C)C)c1)C")).unique_smiles() && true;
}
bool checkPathway55(RxnPathway& p) {
  return true;
}
bool PathMolCon56(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cccc(C(C)C)c1)C", moleculesize("c1(cccc(C(C)C)c1)C")).unique_smiles() && true;
}
bool checkPathway56(RxnPathway& p) {
  return true;
}
bool PathMolCon57(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cccc(C=C)c1)C", moleculesize("c1(cccc(C=C)c1)C")).unique_smiles() && true;
}
bool checkPathway57(RxnPathway& p) {
  return true;
}
bool PathMolCon58(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cccc(CC)c1)C", moleculesize("c1(cccc(CC)c1)C")).unique_smiles() && true;
}
bool checkPathway58(RxnPathway& p) {
  return true;
}
bool PathMolCon59(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cccc(CCC)c1)C", moleculesize("c1(cccc(CCC)c1)C")).unique_smiles() && true;
}
bool checkPathway59(RxnPathway& p) {
  return true;
}
bool PathMolCon60(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cccc(c1)C)C", moleculesize("c1(cccc(c1)C)C")).unique_smiles() && true;
}
bool checkPathway60(RxnPathway& p) {
  return true;
}
bool PathMolCon61(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cccc(c1)C=CC)C", moleculesize("c1(cccc(c1)C=CC)C")).unique_smiles() && true;
}
bool checkPathway61(RxnPathway& p) {
  return true;
}
bool PathMolCon62(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(cccc(c1)CC=C)C", moleculesize("c1(cccc(c1)CC=C)C")).unique_smiles() && true;
}
bool checkPathway62(RxnPathway& p) {
  return true;
}
bool PathMolCon63(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)C", moleculesize("c1(ccccc1)C")).unique_smiles() && true;
}
bool checkPathway63(RxnPathway& p) {
  return true;
}
bool PathMolCon64(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)C=CC", moleculesize("c1(ccccc1)C=CC")).unique_smiles() && true;
}
bool checkPathway64(RxnPathway& p) {
  return true;
}
bool PathMolCon65(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)C=CC=C", moleculesize("c1(ccccc1)C=CC=C")).unique_smiles() && true;
}
bool checkPathway65(RxnPathway& p) {
  return true;
}
bool PathMolCon66(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)C=CCC", moleculesize("c1(ccccc1)C=CCC")).unique_smiles() && true;
}
bool checkPathway66(RxnPathway& p) {
  return true;
}
bool PathMolCon67(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)CC=C", moleculesize("c1(ccccc1)CC=C")).unique_smiles() && true;
}
bool checkPathway67(RxnPathway& p) {
  return true;
}
bool PathMolCon68(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)CC=CC", moleculesize("c1(ccccc1)CC=CC")).unique_smiles() && true;
}
bool checkPathway68(RxnPathway& p) {
  return true;
}
bool PathMolCon69(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)CCC", moleculesize("c1(ccccc1)CCC")).unique_smiles() && true;
}
bool checkPathway69(RxnPathway& p) {
  return true;
}
bool PathMolCon70(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)CCC=C", moleculesize("c1(ccccc1)CCC=C")).unique_smiles() && true;
}
bool checkPathway70(RxnPathway& p) {
  return true;
}
bool PathMolCon71(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1(ccccc1)CCCC", moleculesize("c1(ccccc1)CCCC")).unique_smiles() && true;
}
bool checkPathway71(RxnPathway& p) {
  return true;
}
bool PathMolCon72(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c12c(cccc1)C=CC=C2", moleculesize("c12c(cccc1)C=CC=C2")).unique_smiles() && true;
}
bool checkPathway72(RxnPathway& p) {
  return true;
}
bool PathMolCon73(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c12c(cccc1)C=CCC2", moleculesize("c12c(cccc1)C=CCC2")).unique_smiles() && true;
}
bool checkPathway73(RxnPathway& p) {
  return true;
}
bool PathMolCon74(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c12c(cccc1)CC=CC2", moleculesize("c12c(cccc1)CC=CC2")).unique_smiles() && true;
}
bool checkPathway74(RxnPathway& p) {
  return true;
}
bool PathMolCon75(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c12c(cccc1)CCCC2", moleculesize("c12c(cccc1)CCCC2")).unique_smiles() && true;
}
bool checkPathway75(RxnPathway& p) {
  return true;
}
bool PathMolCon76(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c12c(cccc1)cccc2", moleculesize("c12c(cccc1)cccc2")).unique_smiles() && true;
}
bool checkPathway76(RxnPathway& p) {
  return true;
}
bool PathMolCon77(const Molecule& m0) {
  return m0.moleculestring() == Molecule("c1ccccc1", moleculesize("c1ccccc1")).unique_smiles() && true;
}
bool checkPathway77(RxnPathway& p) {
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
   char *programName = "Alkylaromatics_upcycling_Feb09";
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
vector<KineticParamPtr> kineticFns(8);
   reactantlist.push_back("CCCCCCCCCC");
   reactantlist.push_back("[{B}H][{B}H]");
   reactantlist.push_back("[H+]");
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

  Reactiontype Rt_PCP;
  Rt_PCP.add_reactant_pattern(Substructure("C2(=C3(-C4)(-H7))(-C1(-H5))(-H6)", patternsize("C2(=C3(-C4)(-H7))(-C1(-H5))(-H6)")));
   Rt_PCP.add_reactantconstraint(&checkCCRt_PCPmonly);
   Rt_PCP.disconnect_bond(1,5);
   Rt_PCP.disconnect_bond(3,7);
   Rt_PCP.decreaseBO(2,3, 1);
   Rt_PCP.disconnect_bond(1,2);
   Rt_PCP.connect_bond(1,3);
   Rt_PCP.increaseBO(1,3,1);
   Rt_PCP.connect_bond(2,5);
   Rt_PCP.connect_bond(2,7);
  Rt_PCP.add_productconstraint(&Rt_PCPprodcons);
  Rt_PCP.setRuleName("PCP");
  Rtypelist.push_back(Rt_PCP); 
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
  PathwayConstraints PC26;
  PC26.SetMaxRelativeLength(1);
  PC26.AddPathwayConstrPtr(&checkPathway26);
  Pathways P26(&test_network, PC26, "Pathways_AA_26.txt");
  P26.QueryPlusGenerate(&PathMolCon26);
  PathwayConstraints PC27;
  PC27.SetMaxRelativeLength(1);
  PC27.AddPathwayConstrPtr(&checkPathway27);
  Pathways P27(&test_network, PC27, "Pathways_AA_27.txt");
  P27.QueryPlusGenerate(&PathMolCon27);
  PathwayConstraints PC28;
  PC28.SetMaxRelativeLength(1);
  PC28.AddPathwayConstrPtr(&checkPathway28);
  Pathways P28(&test_network, PC28, "Pathways_AA_28.txt");
  P28.QueryPlusGenerate(&PathMolCon28);
  PathwayConstraints PC29;
  PC29.SetMaxRelativeLength(1);
  PC29.AddPathwayConstrPtr(&checkPathway29);
  Pathways P29(&test_network, PC29, "Pathways_AA_29.txt");
  P29.QueryPlusGenerate(&PathMolCon29);
  PathwayConstraints PC30;
  PC30.SetMaxRelativeLength(1);
  PC30.AddPathwayConstrPtr(&checkPathway30);
  Pathways P30(&test_network, PC30, "Pathways_AA_30.txt");
  P30.QueryPlusGenerate(&PathMolCon30);
  PathwayConstraints PC31;
  PC31.SetMaxRelativeLength(1);
  PC31.AddPathwayConstrPtr(&checkPathway31);
  Pathways P31(&test_network, PC31, "Pathways_AA_31.txt");
  P31.QueryPlusGenerate(&PathMolCon31);
  PathwayConstraints PC32;
  PC32.SetMaxRelativeLength(1);
  PC32.AddPathwayConstrPtr(&checkPathway32);
  Pathways P32(&test_network, PC32, "Pathways_AA_32.txt");
  P32.QueryPlusGenerate(&PathMolCon32);
  PathwayConstraints PC33;
  PC33.SetMaxRelativeLength(1);
  PC33.AddPathwayConstrPtr(&checkPathway33);
  Pathways P33(&test_network, PC33, "Pathways_AA_33.txt");
  P33.QueryPlusGenerate(&PathMolCon33);
  PathwayConstraints PC34;
  PC34.SetMaxRelativeLength(1);
  PC34.AddPathwayConstrPtr(&checkPathway34);
  Pathways P34(&test_network, PC34, "Pathways_AA_34.txt");
  P34.QueryPlusGenerate(&PathMolCon34);
  PathwayConstraints PC35;
  PC35.SetMaxRelativeLength(1);
  PC35.AddPathwayConstrPtr(&checkPathway35);
  Pathways P35(&test_network, PC35, "Pathways_AA_35.txt");
  P35.QueryPlusGenerate(&PathMolCon35);
  PathwayConstraints PC36;
  PC36.SetMaxRelativeLength(1);
  PC36.AddPathwayConstrPtr(&checkPathway36);
  Pathways P36(&test_network, PC36, "Pathways_AA_36.txt");
  P36.QueryPlusGenerate(&PathMolCon36);
  PathwayConstraints PC37;
  PC37.SetMaxRelativeLength(1);
  PC37.AddPathwayConstrPtr(&checkPathway37);
  Pathways P37(&test_network, PC37, "Pathways_AA_37.txt");
  P37.QueryPlusGenerate(&PathMolCon37);
  PathwayConstraints PC38;
  PC38.SetMaxRelativeLength(1);
  PC38.AddPathwayConstrPtr(&checkPathway38);
  Pathways P38(&test_network, PC38, "Pathways_AA_38.txt");
  P38.QueryPlusGenerate(&PathMolCon38);
  PathwayConstraints PC39;
  PC39.SetMaxRelativeLength(1);
  PC39.AddPathwayConstrPtr(&checkPathway39);
  Pathways P39(&test_network, PC39, "Pathways_AA_39.txt");
  P39.QueryPlusGenerate(&PathMolCon39);
  PathwayConstraints PC40;
  PC40.SetMaxRelativeLength(1);
  PC40.AddPathwayConstrPtr(&checkPathway40);
  Pathways P40(&test_network, PC40, "Pathways_AA_40.txt");
  P40.QueryPlusGenerate(&PathMolCon40);
  PathwayConstraints PC41;
  PC41.SetMaxRelativeLength(1);
  PC41.AddPathwayConstrPtr(&checkPathway41);
  Pathways P41(&test_network, PC41, "Pathways_AA_41.txt");
  P41.QueryPlusGenerate(&PathMolCon41);
  PathwayConstraints PC42;
  PC42.SetMaxRelativeLength(1);
  PC42.AddPathwayConstrPtr(&checkPathway42);
  Pathways P42(&test_network, PC42, "Pathways_AA_42.txt");
  P42.QueryPlusGenerate(&PathMolCon42);
  PathwayConstraints PC43;
  PC43.SetMaxRelativeLength(1);
  PC43.AddPathwayConstrPtr(&checkPathway43);
  Pathways P43(&test_network, PC43, "Pathways_AA_43.txt");
  P43.QueryPlusGenerate(&PathMolCon43);
  PathwayConstraints PC44;
  PC44.SetMaxRelativeLength(1);
  PC44.AddPathwayConstrPtr(&checkPathway44);
  Pathways P44(&test_network, PC44, "Pathways_AA_44.txt");
  P44.QueryPlusGenerate(&PathMolCon44);
  PathwayConstraints PC45;
  PC45.SetMaxRelativeLength(1);
  PC45.AddPathwayConstrPtr(&checkPathway45);
  Pathways P45(&test_network, PC45, "Pathways_AA_45.txt");
  P45.QueryPlusGenerate(&PathMolCon45);
  PathwayConstraints PC46;
  PC46.SetMaxRelativeLength(1);
  PC46.AddPathwayConstrPtr(&checkPathway46);
  Pathways P46(&test_network, PC46, "Pathways_AA_46.txt");
  P46.QueryPlusGenerate(&PathMolCon46);
  PathwayConstraints PC47;
  PC47.SetMaxRelativeLength(1);
  PC47.AddPathwayConstrPtr(&checkPathway47);
  Pathways P47(&test_network, PC47, "Pathways_AA_47.txt");
  P47.QueryPlusGenerate(&PathMolCon47);
  PathwayConstraints PC48;
  PC48.SetMaxRelativeLength(1);
  PC48.AddPathwayConstrPtr(&checkPathway48);
  Pathways P48(&test_network, PC48, "Pathways_AA_48.txt");
  P48.QueryPlusGenerate(&PathMolCon48);
  PathwayConstraints PC49;
  PC49.SetMaxRelativeLength(1);
  PC49.AddPathwayConstrPtr(&checkPathway49);
  Pathways P49(&test_network, PC49, "Pathways_AA_49.txt");
  P49.QueryPlusGenerate(&PathMolCon49);
  PathwayConstraints PC50;
  PC50.SetMaxRelativeLength(1);
  PC50.AddPathwayConstrPtr(&checkPathway50);
  Pathways P50(&test_network, PC50, "Pathways_AA_50.txt");
  P50.QueryPlusGenerate(&PathMolCon50);
  PathwayConstraints PC51;
  PC51.SetMaxRelativeLength(1);
  PC51.AddPathwayConstrPtr(&checkPathway51);
  Pathways P51(&test_network, PC51, "Pathways_AA_51.txt");
  P51.QueryPlusGenerate(&PathMolCon51);
  PathwayConstraints PC52;
  PC52.SetMaxRelativeLength(1);
  PC52.AddPathwayConstrPtr(&checkPathway52);
  Pathways P52(&test_network, PC52, "Pathways_AA_52.txt");
  P52.QueryPlusGenerate(&PathMolCon52);
  PathwayConstraints PC53;
  PC53.SetMaxRelativeLength(1);
  PC53.AddPathwayConstrPtr(&checkPathway53);
  Pathways P53(&test_network, PC53, "Pathways_AA_53.txt");
  P53.QueryPlusGenerate(&PathMolCon53);
  PathwayConstraints PC54;
  PC54.SetMaxRelativeLength(1);
  PC54.AddPathwayConstrPtr(&checkPathway54);
  Pathways P54(&test_network, PC54, "Pathways_AA_54.txt");
  P54.QueryPlusGenerate(&PathMolCon54);
  PathwayConstraints PC55;
  PC55.SetMaxRelativeLength(1);
  PC55.AddPathwayConstrPtr(&checkPathway55);
  Pathways P55(&test_network, PC55, "Pathways_AA_55.txt");
  P55.QueryPlusGenerate(&PathMolCon55);
  PathwayConstraints PC56;
  PC56.SetMaxRelativeLength(1);
  PC56.AddPathwayConstrPtr(&checkPathway56);
  Pathways P56(&test_network, PC56, "Pathways_AA_56.txt");
  P56.QueryPlusGenerate(&PathMolCon56);
  PathwayConstraints PC57;
  PC57.SetMaxRelativeLength(1);
  PC57.AddPathwayConstrPtr(&checkPathway57);
  Pathways P57(&test_network, PC57, "Pathways_AA_57.txt");
  P57.QueryPlusGenerate(&PathMolCon57);
  PathwayConstraints PC58;
  PC58.SetMaxRelativeLength(1);
  PC58.AddPathwayConstrPtr(&checkPathway58);
  Pathways P58(&test_network, PC58, "Pathways_AA_58.txt");
  P58.QueryPlusGenerate(&PathMolCon58);
  PathwayConstraints PC59;
  PC59.SetMaxRelativeLength(1);
  PC59.AddPathwayConstrPtr(&checkPathway59);
  Pathways P59(&test_network, PC59, "Pathways_AA_59.txt");
  P59.QueryPlusGenerate(&PathMolCon59);
  PathwayConstraints PC60;
  PC60.SetMaxRelativeLength(1);
  PC60.AddPathwayConstrPtr(&checkPathway60);
  Pathways P60(&test_network, PC60, "Pathways_AA_60.txt");
  P60.QueryPlusGenerate(&PathMolCon60);
  PathwayConstraints PC61;
  PC61.SetMaxRelativeLength(1);
  PC61.AddPathwayConstrPtr(&checkPathway61);
  Pathways P61(&test_network, PC61, "Pathways_AA_61.txt");
  P61.QueryPlusGenerate(&PathMolCon61);
  PathwayConstraints PC62;
  PC62.SetMaxRelativeLength(1);
  PC62.AddPathwayConstrPtr(&checkPathway62);
  Pathways P62(&test_network, PC62, "Pathways_AA_62.txt");
  P62.QueryPlusGenerate(&PathMolCon62);
  PathwayConstraints PC63;
  PC63.SetMaxRelativeLength(1);
  PC63.AddPathwayConstrPtr(&checkPathway63);
  Pathways P63(&test_network, PC63, "Pathways_AA_63.txt");
  P63.QueryPlusGenerate(&PathMolCon63);
  PathwayConstraints PC64;
  PC64.SetMaxRelativeLength(1);
  PC64.AddPathwayConstrPtr(&checkPathway64);
  Pathways P64(&test_network, PC64, "Pathways_AA_64.txt");
  P64.QueryPlusGenerate(&PathMolCon64);
  PathwayConstraints PC65;
  PC65.SetMaxRelativeLength(1);
  PC65.AddPathwayConstrPtr(&checkPathway65);
  Pathways P65(&test_network, PC65, "Pathways_AA_65.txt");
  P65.QueryPlusGenerate(&PathMolCon65);
  PathwayConstraints PC66;
  PC66.SetMaxRelativeLength(1);
  PC66.AddPathwayConstrPtr(&checkPathway66);
  Pathways P66(&test_network, PC66, "Pathways_AA_66.txt");
  P66.QueryPlusGenerate(&PathMolCon66);
  PathwayConstraints PC67;
  PC67.SetMaxRelativeLength(1);
  PC67.AddPathwayConstrPtr(&checkPathway67);
  Pathways P67(&test_network, PC67, "Pathways_AA_67.txt");
  P67.QueryPlusGenerate(&PathMolCon67);
  PathwayConstraints PC68;
  PC68.SetMaxRelativeLength(1);
  PC68.AddPathwayConstrPtr(&checkPathway68);
  Pathways P68(&test_network, PC68, "Pathways_AA_68.txt");
  P68.QueryPlusGenerate(&PathMolCon68);
  PathwayConstraints PC69;
  PC69.SetMaxRelativeLength(1);
  PC69.AddPathwayConstrPtr(&checkPathway69);
  Pathways P69(&test_network, PC69, "Pathways_AA_69.txt");
  P69.QueryPlusGenerate(&PathMolCon69);
  PathwayConstraints PC70;
  PC70.SetMaxRelativeLength(1);
  PC70.AddPathwayConstrPtr(&checkPathway70);
  Pathways P70(&test_network, PC70, "Pathways_AA_70.txt");
  P70.QueryPlusGenerate(&PathMolCon70);
  PathwayConstraints PC71;
  PC71.SetMaxRelativeLength(1);
  PC71.AddPathwayConstrPtr(&checkPathway71);
  Pathways P71(&test_network, PC71, "Pathways_AA_71.txt");
  P71.QueryPlusGenerate(&PathMolCon71);
  PathwayConstraints PC72;
  PC72.SetMaxRelativeLength(1);
  PC72.AddPathwayConstrPtr(&checkPathway72);
  Pathways P72(&test_network, PC72, "Pathways_AA_72.txt");
  P72.QueryPlusGenerate(&PathMolCon72);
  PathwayConstraints PC73;
  PC73.SetMaxRelativeLength(1);
  PC73.AddPathwayConstrPtr(&checkPathway73);
  Pathways P73(&test_network, PC73, "Pathways_AA_73.txt");
  P73.QueryPlusGenerate(&PathMolCon73);
  PathwayConstraints PC74;
  PC74.SetMaxRelativeLength(1);
  PC74.AddPathwayConstrPtr(&checkPathway74);
  Pathways P74(&test_network, PC74, "Pathways_AA_74.txt");
  P74.QueryPlusGenerate(&PathMolCon74);
  PathwayConstraints PC75;
  PC75.SetMaxRelativeLength(1);
  PC75.AddPathwayConstrPtr(&checkPathway75);
  Pathways P75(&test_network, PC75, "Pathways_AA_75.txt");
  P75.QueryPlusGenerate(&PathMolCon75);
  PathwayConstraints PC76;
  PC76.SetMaxRelativeLength(1);
  PC76.AddPathwayConstrPtr(&checkPathway76);
  Pathways P76(&test_network, PC76, "Pathways_AA_76.txt");
  P76.QueryPlusGenerate(&PathMolCon76);
  PathwayConstraints PC77;
  PC77.SetMaxRelativeLength(1);
  PC77.AddPathwayConstrPtr(&checkPathway77);
  Pathways P77(&test_network, PC77, "Pathways_AA_77.txt");
  P77.QueryPlusGenerate(&PathMolCon77);
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
