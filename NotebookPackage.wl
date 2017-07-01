(* ::Package:: *)

BeginPackage["NotebookPackage`"];


ExportAsPackage::usage="ExportAsPackage[{symbol1, symbol2, ...}] salva no mesmo diret\[OAcute]rio do notebook de origem";


Begin["`Private`"];


ExportAsPackage[symbolList_]:=
Module[
	{fileName},
	fileName=FileNameJoin@{NotebookDirectory[],FileBaseName@NotebookFileName[]};
	If[FileExistsQ@fileName,DeleteFile@fileName];
	Save[fileName,symbolList];
]


End[];
EndPackage[];
