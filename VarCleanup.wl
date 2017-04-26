(* ::Package:: *)

BeginPackage["VarCleanup`"];


RemoveGlobal::usage = "RemoveGlobal[] to clean all vars and remove them from the symbol table";


Begin["Private`"];


ClearGlobal[] := (ClearAll["Global`*"]; Clear[Derivative]; );

RemoveGlobal[] := (ClearGlobal[]; Remove["Global`*"];);


End[];


EndPackage[];
