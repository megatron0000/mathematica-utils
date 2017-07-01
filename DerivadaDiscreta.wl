(* ::Package:: *)

BeginPackage["DerivadaDiscreta`"];


DerivadaDiscreta::usage="DerivadaDiscreta[lista] pressup\[OTilde]e lista de pares ordenados (t,f(t)). Realiza derivadas 
finitamente (diferen\[CCedilla]a avan\[CCedilla]ada/atrasada se no in\[IAcute]cio/fim da lista, ou diferen\[CCedilla]a centrada caso contr\[AAcute]rio";


Begin["Private`"];


DerivadaDiscreta[lista_]:= Table[
	If[
		j == 1,
		{lista[[j,1]],(lista[[j+1, 2]]-lista[[j, 2]])/(lista[[j+1, 1]]-lista[[j, 1]])},
		If[
			j == Length@lista,
			{lista[[j,1]],(lista[[j, 2]]-lista[[j-1, 2]])/(lista[[j, 1]]-lista[[j-1, 1]])},
			{lista[[j,1]],(lista[[j+1, 2]]-lista[[j-1, 2]])/(lista[[j+1, 1]]-lista[[j-1, 1]])}
		]
	],
	{j, 1, Length[lista]}
];


End[];
EndPackage[];
