(* ::Package:: *)

BeginPackage["TrackerImport`"];


TrackerImport::usage = "TrackerImport[filepath_] returns a table";


Begin["Private`"];


TrackerImport[filepath_]:= With[
	{dados = Import[filepath]},
	If[
		Length@dados == 0,
		{ToExpression@dados},
		Select[
			dados,
			NumericQ[#[[1]]]&
		]
	]
]


End[];


EndPackage[];
