//reactant definition (note that two slashes mean that everything in that line following it is taken as a comment)
input reactant "CCCCCCCCCC"
input reactant "[{B}H][{B}H]"

define composite atom B


global constraints on Molecule {
  //molecule does not contain C=C=C
	fragment a {
		C labeled 1
		C labeled 2 double bond to 1
		C labeled 3 double bond to 2
	}
	! Molecule contains >=1 of a
}

 
//Dehydrogenation
rule Dehydrogenation {
	reactant r1{
		C labeled c1
		C labeled c2 single bond to c1
		H labeled h1 single bond to c1
		H labeled h2 single bond to c2
	}

	break bond(c1, h1)
	break bond(c2, h2)
	increase bond order (c1,c2)
	form bond (h1,h2)
}
 
//Beta Scission w/constrain
rule BetaScission {
	reactant r1 {
		C labeled c1
		C labeled c2 double bond to c1
		nonringatom C labeled c3 single bond to c2
		nonringatom C labeled c4 single bond to c3
		H labeled h1 single bond to c4
	}

	break bond(c2,c3)
	break bond(c4,h1)
	increase bond order (c3,c4)
	form bond(h1,c2)
}

//End methane Beta Scission w/constrain
rule EndMethaneBetaScissionWithHB2{
	reactant r1{
		C labeled c1
		nonringatom C labeled c2 double bond to c1
		nonringatom C labeled c3 single bond to c2 {! connected to > 1C}
	}
	
	reactant r2{
	   B labeled b1 
	   B labeled b2 single bond to b1
	   H labeled h1 single bond to b1
	   H labeled h2 single bond to b2
	}    
	break bond (c2,c3)
	break bond (b1,h1)
	break bond (b2,h2)
	form bond (c2,h1)
	form bond (c3,h2)
}

//Hydrogenation
rule Hydrogenation {
	reactant r1{
		C labeled c1 
		C labeled c2 double bond to c1
	}
	reactant r2{
		H labeled h1
		H labeled h2 single bond to h1
	}
	decrease bond order (c1,c2)
	break bond (h1,h2)
	form bond (h1,c1)
	form bond (h2,c2)
}

rule FirstCyclization
{
	  linear reactant r1{
		C labeled c1
		C labeled c2 double bond to c1
		C labeled c3 any bond to c2
		C labeled c4 any bond to c3
		C labeled c5 any bond to c4
		C labeled c6 double bond to c5
	    H labeled h1 single bond to c6
	  }  
	  break bond (h1,c6)
	  decrease bond order (c1,c2)
	  form bond (c1,c6)
	  form bond (h1,c2)
}

rule SecondCyclizationtypeA{
	cyclic reactant r1{
		nonringatom C labeled c1
		nonringatom C labeled c2 double bond to c1
		nonringatom C labeled c3 any bond to c2
		nonringatom C labeled c4 any bond to c3
		ringatom C labeled c5 any bond to c4
		ringatom C labeled c6 strong bond to c5 
		H labeled h1 single bond to c6
	}
	break bond (h1,c6)
	decrease bond order (c1,c2)
	form bond (c1,c6)
	form bond (h1,c2)
}

rule SecondCyclizationtypeB{
	cyclic reactant r1{
		nonringatom C labeled c1
		nonringatom C labeled c2 double bond to c1
		nonringatom C labeled c3 any bond to c2
		ringatom C labeled c4 any bond to c3
		ringatom C labeled c5 strong bond to c4
		nonringatom C labeled c6 single bond to c5 
		H labeled h1 single bond to c6
	}
	break bond (h1,c6)
	decrease bond order (c1,c2)
	form bond (c1,c6)
	form bond (h1,c2)
}

//Use molecule query first to find what aromatic products are generated
find all mol{
mol is aromatic
}store in "Aromatic_mol_C10_NoPCP.txt"


//Once the aromatic products are known, use pathway query to find their pathways
find pathways to mol{
mol is "C(=C)Cc1c(cccc1)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_0.txt"

find pathways to mol{
mol is "C(=C)c1c(C=C)cccc1"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_1.txt"

find pathways to mol{
mol is "C(=C)c1c(cccc1)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_2.txt"

find pathways to mol{
mol is "C(=Cc1c(cccc1)C)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_3.txt"

find pathways to mol{
mol is "c1(C=C)ccccc1"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_4.txt"

find pathways to mol{
mol is "c1(CC)ccccc1"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_5.txt"

find pathways to mol{
mol is "c1(c(C=C)cccc1)CC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_6.txt"

find pathways to mol{
mol is "c1(c(CC)cccc1)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_7.txt"

find pathways to mol{
mol is "c1(c(CC)cccc1)CC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_8.txt"

find pathways to mol{
mol is "c1(c(CCC)cccc1)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_9.txt"

find pathways to mol{
mol is "c1(c(cccc1)C)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_10.txt"

find pathways to mol{
mol is "c1(ccccc1)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_11.txt"

find pathways to mol{
mol is "c1(ccccc1)C=CC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_12.txt"

find pathways to mol{
mol is "c1(ccccc1)C=CC=C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_13.txt"

find pathways to mol{
mol is "c1(ccccc1)C=CCC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_14.txt"

find pathways to mol{
mol is "c1(ccccc1)CC=C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_15.txt"

find pathways to mol{
mol is "c1(ccccc1)CC=CC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_16.txt"

find pathways to mol{
mol is "c1(ccccc1)CCC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_17.txt"

find pathways to mol{
mol is "c1(ccccc1)CCC=C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_18.txt"

find pathways to mol{
mol is "c1(ccccc1)CCCC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_19.txt"

find pathways to mol{
mol is "c12c(cccc1)C=CC=C2"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_20.txt"

find pathways to mol{
mol is "c12c(cccc1)C=CCC2"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_21.txt"

find pathways to mol{
mol is "c12c(cccc1)CC=CC2"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_22.txt"

find pathways to mol{
mol is "c12c(cccc1)CCCC2"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_23.txt"

find pathways to mol{
mol is "c12c(cccc1)cccc2"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_24.txt"

find pathways to mol{
mol is "c1ccccc1"}
constraints{
        maximum length shortest + 1
} store in "Pathways_AA_25.txt"



