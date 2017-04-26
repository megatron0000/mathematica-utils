(* ::Package:: *)

BeginPackage["DerivadaDiscreta`"];


DerivadaDiscreta::usage="DerivadaDiscreta[lista] pressup\[OTilde]e lista de pares ordenados (t,f(t)). Realiza derivadas finitamente, e retira o primeiro e o \[UAcute]ltimo par ordenado
da lista fornecida";


Begin["Private`"];


DerivadaDiscreta[lista_]:=
Table[{lista[[j]][[1]],(lista[[j+1]][[2]]-lista[[j-1]][[2]])/(lista[[j+1]][[1]]-lista[[j-1]][[1]])},{j,2,Length[lista]-1}];


End[];
EndPackage[];
