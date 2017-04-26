(* ::Package:: *)

BeginPackage["TrackerImport`"];


TrackerImport::usage = "TrackerImport[filepath_] returns a table";


Begin["Private`"];


TrackerImport[filepath_]:=
	Import[filepath]//Select[NumericQ[#[[1]]]&];


End[];


EndPackage[];
