(* ::Package:: *)

BeginPackage["ManToGif`"];
ManToGif::usage="ManToGif[manipulateObject,fileName,frameStep] creates a .mov and a .gif file from supplied Animate/Manipulate";
Begin["Private`"];
ManToGif[man_,name_String,step_Integer]:=Export[name<>".gif",Import[Export[name<>Which[$OperatingSystem=="MacOSX",".mov",$OperatingSystem=="Windows",".avi"],man],"ImageList"][[1;;-1;;step]]];
End[];
EndPackage[];
