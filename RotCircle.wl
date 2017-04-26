(* ::Package:: *)

BeginPackage["RotCircle`"];


RotCircle::usage = "RotCircle[angle, ctr, base1, base2, directives]"


Begin["Private`"];


RotCircle[angle_, ctr_, base1_, base2_, directives___] :=
 With[{step = 0.05 Sign[angle], spiral = 0.01},
  {directives,
   Arrow[Table[ctr + (1.1 + spiral s) (Cos[s] base1 + Sin[s] base2),
     {s, Append[Range[0, angle, step], angle]}]]}
  ]


End[];


EndPackage[];
