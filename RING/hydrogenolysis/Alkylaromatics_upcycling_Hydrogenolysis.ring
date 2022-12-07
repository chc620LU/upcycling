//reactant definition (note that two slashes mean that everything in that line following it is taken as a comment)
input reactant "CCCCCCCCCC"
//input reactant "[{B}H][{B}H]"

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

//Hydrogenolysis
rule Hydrogenolysis {
	reactant r1 {
		nonringatom C labeled c1 
		nonringatom C labeled c2 single bond to c1
	}
	reactant r2{
		H labeled h1
		H labeled h2 single bond to h1
	}

	break bond(c1,c2)
	break bond(h1,h2)
	form bond(h1,c1)
	form bond(h2,c2)
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

rule CyclizationA
{
	  linear reactant r1{
		C labeled c1
		C labeled c2 any bond to c1
		C labeled c3 any bond to c2
		C labeled c4 any bond to c3
		C labeled c5 any bond to c4
		C labeled c6 any bond to c5
	    H labeled h1 single bond to c6
		H labeled h2 single bond to c1
	  }  
	  break bond (h1,c6)
	  break bond (h2, c1)
	  form bond (c1,c6)
	  form bond (h1,h2)
}




find pathways to mol{
mol is "C(=C)Cc1c(cccc1)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_6.txt"

find pathways to mol{
mol is "C(=C)c1c(C=C)cccc1"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_7.txt"

find pathways to mol{
mol is "C(=C)c1c(cccc1)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_8.txt"

find pathways to mol{
mol is "C(=Cc1c(cccc1)C)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_12.txt"

find pathways to mol{
mol is "c1(C=C)ccccc1"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_21.txt"

find pathways to mol{
mol is "c1(CC)ccccc1"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_27.txt"

find pathways to mol{
mol is "c1(c(C=C)cccc1)CC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_28.txt"

find pathways to mol{
mol is "c1(c(CC)cccc1)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_29.txt"

find pathways to mol{
mol is "c1(c(CC)cccc1)CC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_30.txt"

find pathways to mol{
mol is "c1(c(CCC)cccc1)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_31.txt"

find pathways to mol{
mol is "c1(c(cccc1)C)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_38.txt"

find pathways to mol{
mol is "c1(ccccc1)C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_63.txt"

find pathways to mol{
mol is "c1(ccccc1)C=CC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_64.txt"

find pathways to mol{
mol is "c1(ccccc1)C=CC=C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_65.txt"

find pathways to mol{
mol is "c1(ccccc1)C=CCC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_66.txt"

find pathways to mol{
mol is "c1(ccccc1)CC=C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_67.txt"

find pathways to mol{
mol is "c1(ccccc1)CC=CC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_68.txt"

find pathways to mol{
mol is "c1(ccccc1)CCC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_69.txt"

find pathways to mol{
mol is "c1(ccccc1)CCC=C"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_70.txt"

find pathways to mol{
mol is "c1(ccccc1)CCCC"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_71.txt"

find pathways to mol{
mol is "c1ccccc1"}
constraints{
        maximum length shortest + 1
} store in "Pathways_HS_77.txt"

/*
find all mol{
mol is aromatic
}store in "Aromatic_mol_C10_HS.txt"
*/