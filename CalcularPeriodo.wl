(* ::Package:: *)

BeginPackage["CalcularPeriodo`"];


CalcularPeriodo::usage="CalcularPeriodo[pontos,tolerancia,tInfimo] assume lista de pontos (t,y). 
Toma as ra\[IAcute]zes (onde |y|<tolerancia), ignorando t2-t1<tInfimo, e retorna os intervalos entre as ra\[IAcute]zes sucessivas";


Begin["Private`"];


CalcularPeriodo[pontos_,tolerancia_,tInfimo_]:=
	Select[
		Differences[
			Map[
				#[[1]]&,
				Select[
					pontos,
					Abs[#[[2]]]<tolerancia&
				]
			]
		],
		#>tInfimo&
	];


End[];
EndPackage[];
