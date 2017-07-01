/*
 * This file automatically produced by /usr/local/Wolfram/Mathematica/11.1/Executables/../SystemFiles/Links/MathLink/DeveloperKit/Linux/CompilerAdditions/mprep from:
 *	mengine.tm
 * mprep Revision 18 Copyright (c) Wolfram Research, Inc. 1990-2013
 */

#define MPREP_REVISION 18

#include "mathlink.h"

int MLAbort = 0;
int MLDone  = 0;
long MLSpecialCharacter = '\0';

MLINK stdlink = 0;
MLEnvironment stdenv = 0;
#if MLINTERFACE >= 3
MLYieldFunctionObject stdyielder = (MLYieldFunctionObject)0;
MLMessageHandlerObject stdhandler = (MLMessageHandlerObject)0;
#else
MLYieldFunctionObject stdyielder = 0;
MLMessageHandlerObject stdhandler = 0;
#endif /* MLINTERFACE >= 3 */

/********************************* end header *********************************/
/* mengine.tm
 *
 * Copyright (c) 2014 Sz. Horvát and R. Menon
 *
 * See the file LICENSE.txt for copying permission.
 */



void eng_open P(( void));

#if MLPROTOTYPES
static int _tr0( MLINK mlp)
#else
static int _tr0(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	if ( ! MLNewPacket(mlp) ) goto L0;
	if( !mlp) return res; /* avoid unused parameter warning */

	eng_open();

	res = 1;

L0:	return res;
} /* _tr0 */


void eng_open_q P(( void));

#if MLPROTOTYPES
static int _tr1( MLINK mlp)
#else
static int _tr1(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	if ( ! MLNewPacket(mlp) ) goto L0;
	if( !mlp) return res; /* avoid unused parameter warning */

	eng_open_q();

	res = 1;

L0:	return res;
} /* _tr1 */


void eng_close P(( void));

#if MLPROTOTYPES
static int _tr2( MLINK mlp)
#else
static int _tr2(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	if ( ! MLNewPacket(mlp) ) goto L0;
	if( !mlp) return res; /* avoid unused parameter warning */

	eng_close();

	res = 1;

L0:	return res;
} /* _tr2 */


void eng_evaluate P(( const unsigned char * _tp1, int _tpl1, int _tpc1));

#if MLPROTOTYPES
static int _tr3( MLINK mlp)
#else
static int _tr3(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	const unsigned char * _tp1;
	int _tpl1;
	int _tpc1;
	if ( ! MLGetUTF8String( mlp, &_tp1, &_tpl1, &_tpc1) ) goto L0;
	if ( ! MLNewPacket(mlp) ) goto L1;

	eng_evaluate(_tp1, _tpl1, _tpc1);

	res = 1;
L1:	MLReleaseUTF8String( mlp, _tp1, _tpl1);

L0:	return res;
} /* _tr3 */


void eng_getbuffer P(( void));

#if MLPROTOTYPES
static int _tr4( MLINK mlp)
#else
static int _tr4(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	if ( ! MLNewPacket(mlp) ) goto L0;
	if( !mlp) return res; /* avoid unused parameter warning */

	eng_getbuffer();

	res = 1;

L0:	return res;
} /* _tr4 */


void eng_get P(( const char * _tp1));

#if MLPROTOTYPES
static int _tr5( MLINK mlp)
#else
static int _tr5(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	const char * _tp1;
	if ( ! MLGetString( mlp, &_tp1) ) goto L0;
	if ( ! MLNewPacket(mlp) ) goto L1;

	eng_get(_tp1);

	res = 1;
L1:	MLReleaseString(mlp, _tp1);

L0:	return res;
} /* _tr5 */


void eng_make_RealArray P(( double * _tp1, int _tpl1, int * _tp2, int _tpl2));

#if MLPROTOTYPES
static int _tr6( MLINK mlp)
#else
static int _tr6(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	double * _tp1;
	int _tpl1;
	int * _tp2;
	int _tpl2;
	if ( ! MLGetReal64List( mlp, &_tp1, &_tpl1) ) goto L0;
	if ( ! MLGetInteger32List(mlp, &_tp2, &_tpl2) ) goto L1;
	if ( ! MLNewPacket(mlp) ) goto L2;

	eng_make_RealArray(_tp1, _tpl1, _tp2, _tpl2);

	res = 1;
L2:	MLReleaseInteger32List(mlp, _tp2, _tpl2);
L1:	MLReleaseReal64List(mlp, _tp1, _tpl1);

L0:	return res;
} /* _tr6 */


void eng_make_ComplexArray P(( double * _tp1, int _tpl1, double * _tp2, int _tpl2, int * _tp3, int _tpl3));

#if MLPROTOTYPES
static int _tr7( MLINK mlp)
#else
static int _tr7(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	double * _tp1;
	int _tpl1;
	double * _tp2;
	int _tpl2;
	int * _tp3;
	int _tpl3;
	if ( ! MLGetReal64List( mlp, &_tp1, &_tpl1) ) goto L0;
	if ( ! MLGetReal64List( mlp, &_tp2, &_tpl2) ) goto L1;
	if ( ! MLGetInteger32List(mlp, &_tp3, &_tpl3) ) goto L2;
	if ( ! MLNewPacket(mlp) ) goto L3;

	eng_make_ComplexArray(_tp1, _tpl1, _tp2, _tpl2, _tp3, _tpl3);

	res = 1;
L3:	MLReleaseInteger32List(mlp, _tp3, _tpl3);
L2:	MLReleaseReal64List(mlp, _tp2, _tpl2);
L1:	MLReleaseReal64List(mlp, _tp1, _tpl1);

L0:	return res;
} /* _tr7 */


void eng_make_Logical P(( short * _tp1, int _tpl1, int * _tp2, int _tpl2));

#if MLPROTOTYPES
static int _tr8( MLINK mlp)
#else
static int _tr8(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	short * _tp1;
	int _tpl1;
	int * _tp2;
	int _tpl2;
	if ( ! MLGetInteger16List(mlp, &_tp1, &_tpl1) ) goto L0;
	if ( ! MLGetInteger32List(mlp, &_tp2, &_tpl2) ) goto L1;
	if ( ! MLNewPacket(mlp) ) goto L2;

	eng_make_Logical(_tp1, _tpl1, _tp2, _tpl2);

	res = 1;
L2:	MLReleaseInteger32List(mlp, _tp2, _tpl2);
L1:	MLReleaseInteger16List(mlp, _tp1, _tpl1);

L0:	return res;
} /* _tr8 */


void eng_make_SparseReal P(( int * _tp1, int _tpl1, int * _tp2, int _tpl2, double * _tp3, int _tpl3, int _tp4, int _tp5));

#if MLPROTOTYPES
static int _tr9( MLINK mlp)
#else
static int _tr9(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	int * _tp1;
	int _tpl1;
	int * _tp2;
	int _tpl2;
	double * _tp3;
	int _tpl3;
	int _tp4;
	int _tp5;
	if ( ! MLGetInteger32List(mlp, &_tp1, &_tpl1) ) goto L0;
	if ( ! MLGetInteger32List(mlp, &_tp2, &_tpl2) ) goto L1;
	if ( ! MLGetReal64List( mlp, &_tp3, &_tpl3) ) goto L2;
	if ( ! MLGetInteger32( mlp, &_tp4) ) goto L3;
	if ( ! MLGetInteger32( mlp, &_tp5) ) goto L4;
	if ( ! MLNewPacket(mlp) ) goto L5;

	eng_make_SparseReal(_tp1, _tpl1, _tp2, _tpl2, _tp3, _tpl3, _tp4, _tp5);

	res = 1;
L5: L4: L3:	MLReleaseReal64List(mlp, _tp3, _tpl3);
L2:	MLReleaseInteger32List(mlp, _tp2, _tpl2);
L1:	MLReleaseInteger32List(mlp, _tp1, _tpl1);

L0:	return res;
} /* _tr9 */


void eng_make_SparseComplex P(( int * _tp1, int _tpl1, int * _tp2, int _tpl2, double * _tp3, int _tpl3, double * _tp4, int _tpl4, int _tp5, int _tp6));

#if MLPROTOTYPES
static int _tr10( MLINK mlp)
#else
static int _tr10(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	int * _tp1;
	int _tpl1;
	int * _tp2;
	int _tpl2;
	double * _tp3;
	int _tpl3;
	double * _tp4;
	int _tpl4;
	int _tp5;
	int _tp6;
	if ( ! MLGetInteger32List(mlp, &_tp1, &_tpl1) ) goto L0;
	if ( ! MLGetInteger32List(mlp, &_tp2, &_tpl2) ) goto L1;
	if ( ! MLGetReal64List( mlp, &_tp3, &_tpl3) ) goto L2;
	if ( ! MLGetReal64List( mlp, &_tp4, &_tpl4) ) goto L3;
	if ( ! MLGetInteger32( mlp, &_tp5) ) goto L4;
	if ( ! MLGetInteger32( mlp, &_tp6) ) goto L5;
	if ( ! MLNewPacket(mlp) ) goto L6;

	eng_make_SparseComplex(_tp1, _tpl1, _tp2, _tpl2, _tp3, _tpl3, _tp4, _tpl4, _tp5, _tp6);

	res = 1;
L6: L5: L4:	MLReleaseReal64List(mlp, _tp4, _tpl4);
L3:	MLReleaseReal64List(mlp, _tp3, _tpl3);
L2:	MLReleaseInteger32List(mlp, _tp2, _tpl2);
L1:	MLReleaseInteger32List(mlp, _tp1, _tpl1);

L0:	return res;
} /* _tr10 */


void eng_make_SparseLogical P(( int * _tp1, int _tpl1, int * _tp2, int _tpl2, short * _tp3, int _tpl3, int _tp4, int _tp5));

#if MLPROTOTYPES
static int _tr11( MLINK mlp)
#else
static int _tr11(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	int * _tp1;
	int _tpl1;
	int * _tp2;
	int _tpl2;
	short * _tp3;
	int _tpl3;
	int _tp4;
	int _tp5;
	if ( ! MLGetInteger32List(mlp, &_tp1, &_tpl1) ) goto L0;
	if ( ! MLGetInteger32List(mlp, &_tp2, &_tpl2) ) goto L1;
	if ( ! MLGetInteger16List(mlp, &_tp3, &_tpl3) ) goto L2;
	if ( ! MLGetInteger32( mlp, &_tp4) ) goto L3;
	if ( ! MLGetInteger32( mlp, &_tp5) ) goto L4;
	if ( ! MLNewPacket(mlp) ) goto L5;

	eng_make_SparseLogical(_tp1, _tpl1, _tp2, _tpl2, _tp3, _tpl3, _tp4, _tp5);

	res = 1;
L5: L4: L3:	MLReleaseInteger16List(mlp, _tp3, _tpl3);
L2:	MLReleaseInteger32List(mlp, _tp2, _tpl2);
L1:	MLReleaseInteger32List(mlp, _tp1, _tpl1);

L0:	return res;
} /* _tr11 */


void eng_make_String P(( const unsigned short * _tp1, int _tpl1));

#if MLPROTOTYPES
static int _tr12( MLINK mlp)
#else
static int _tr12(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	const unsigned short * _tp1;
	int _tpl1;
	if ( ! MLGetUCS2String( mlp, &_tp1, &_tpl1) ) goto L0;
	if ( ! MLNewPacket(mlp) ) goto L1;

	eng_make_String(_tp1, _tpl1);

	res = 1;
L1:	MLReleaseUCS2String( mlp, _tp1, _tpl1);

L0:	return res;
} /* _tr12 */


void eng_make_Struct P(( void));

#if MLPROTOTYPES
static int _tr13( MLINK mlp)
#else
static int _tr13(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	if( !mlp) return res; /* avoid unused parameter warning */

	eng_make_Struct();

	res = 1;

	return res;
} /* _tr13 */


void eng_make_Cell P(( int * _tp1, int _tpl1, int * _tp2, int _tpl2));

#if MLPROTOTYPES
static int _tr14( MLINK mlp)
#else
static int _tr14(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	int * _tp1;
	int _tpl1;
	int * _tp2;
	int _tpl2;
	if ( ! MLGetInteger32List(mlp, &_tp1, &_tpl1) ) goto L0;
	if ( ! MLGetInteger32List(mlp, &_tp2, &_tpl2) ) goto L1;
	if ( ! MLNewPacket(mlp) ) goto L2;

	eng_make_Cell(_tp1, _tpl1, _tp2, _tpl2);

	res = 1;
L2:	MLReleaseInteger32List(mlp, _tp2, _tpl2);
L1:	MLReleaseInteger32List(mlp, _tp1, _tpl1);

L0:	return res;
} /* _tr14 */


void eng_clean_handles P(( void));

#if MLPROTOTYPES
static int _tr15( MLINK mlp)
#else
static int _tr15(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	if ( ! MLNewPacket(mlp) ) goto L0;
	if( !mlp) return res; /* avoid unused parameter warning */

	eng_clean_handles();

	res = 1;

L0:	return res;
} /* _tr15 */


void eng_get_handles P(( void));

#if MLPROTOTYPES
static int _tr16( MLINK mlp)
#else
static int _tr16(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	if ( ! MLNewPacket(mlp) ) goto L0;
	if( !mlp) return res; /* avoid unused parameter warning */

	eng_get_handles();

	res = 1;

L0:	return res;
} /* _tr16 */


void eng_set P(( const char * _tp1, int _tp2));

#if MLPROTOTYPES
static int _tr17( MLINK mlp)
#else
static int _tr17(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	const char * _tp1;
	int _tp2;
	if ( ! MLGetString( mlp, &_tp1) ) goto L0;
	if ( ! MLGetInteger32( mlp, &_tp2) ) goto L1;
	if ( ! MLNewPacket(mlp) ) goto L2;

	eng_set(_tp1, _tp2);

	res = 1;
L2: L1:	MLReleaseString(mlp, _tp1);

L0:	return res;
} /* _tr17 */


void eng_set_visible P(( int _tp1));

#if MLPROTOTYPES
static int _tr18( MLINK mlp)
#else
static int _tr18(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	int _tp1;
	if ( ! MLGetInteger32( mlp, &_tp1) ) goto L0;
	if ( ! MLNewPacket(mlp) ) goto L1;

	eng_set_visible(_tp1);

	res = 1;
L1: 
L0:	return res;
} /* _tr18 */


int setup_abort_handler P(( void));

#if MLPROTOTYPES
static int _tr19( MLINK mlp)
#else
static int _tr19(mlp) MLINK mlp;
#endif
{
	int	res = 0;
	int _rp0;
	if ( ! MLNewPacket(mlp) ) goto L0;

	_rp0 = setup_abort_handler();

	res = MLAbort ?
		MLPutFunction( mlp, "Abort", 0) : MLPutInteger( mlp, _rp0);

L0:	return res;
} /* _tr19 */


static struct func {
	int   f_nargs;
	int   manual;
	int   (*f_func)P((MLINK));
	const char  *f_name;
	} _tramps[20] = {
		{ 0, 0, _tr0, "eng_open" },
		{ 0, 0, _tr1, "eng_open_q" },
		{ 0, 0, _tr2, "eng_close" },
		{ 1, 0, _tr3, "eng_evaluate" },
		{ 0, 0, _tr4, "eng_getbuffer" },
		{ 1, 0, _tr5, "eng_get" },
		{ 2, 0, _tr6, "eng_make_RealArray" },
		{ 3, 0, _tr7, "eng_make_ComplexArray" },
		{ 2, 0, _tr8, "eng_make_Logical" },
		{ 5, 0, _tr9, "eng_make_SparseReal" },
		{ 6, 0, _tr10, "eng_make_SparseComplex" },
		{ 5, 0, _tr11, "eng_make_SparseLogical" },
		{ 1, 0, _tr12, "eng_make_String" },
		{ 0, 2, _tr13, "eng_make_Struct" },
		{ 2, 0, _tr14, "eng_make_Cell" },
		{ 0, 0, _tr15, "eng_clean_handles" },
		{ 0, 0, _tr16, "eng_get_handles" },
		{ 2, 0, _tr17, "eng_set" },
		{ 1, 0, _tr18, "eng_set_visible" },
		{ 0, 0, _tr19, "setup_abort_handler" }
		};

static const char* evalstrs[] = {
	"Begin[\"MATLink`Engine`\"]",
	(const char*)0,
	"End[]",
	(const char*)0,
	(const char*)0
};
#define CARDOF_EVALSTRS 2

static int _definepattern P(( MLINK, char*, char*, int));

static int _doevalstr P(( MLINK, int));

int  _MLDoCallPacket P(( MLINK, struct func[], int));


#if MLPROTOTYPES
int MLInstall( MLINK mlp)
#else
int MLInstall(mlp) MLINK mlp;
#endif
{
	int _res;
	_res = MLConnect(mlp);
	if (_res) _res = _doevalstr( mlp, 0);
	if (_res) _res = _definepattern(mlp, (char *)"engOpen[]", (char *)"{}", 0);
	if (_res) _res = _definepattern(mlp, (char *)"engOpenQ[]", (char *)"{}", 1);
	if (_res) _res = _definepattern(mlp, (char *)"engClose[]", (char *)"{}", 2);
	if (_res) _res = _definepattern(mlp, (char *)"engEvaluate[command_]", (char *)"{command}", 3);
	if (_res) _res = _definepattern(mlp, (char *)"engGetBuffer[]", (char *)"{}", 4);
	if (_res) _res = _definepattern(mlp, (char *)"engGet[name_String]", (char *)"{name}", 5);
	if (_res) _res = _definepattern(mlp, (char *)"engMakeRealArray[list_, dims_]", (char *)"{list, dims}", 6);
	if (_res) _res = _definepattern(mlp, (char *)"engMakeComplexArray[real_, imag_, dims_]", (char *)"{real, imag, dims}", 7);
	if (_res) _res = _definepattern(mlp, (char *)"engMakeLogical[list_, dims_]", (char *)"{list, dims}", 8);
	if (_res) _res = _definepattern(mlp, (char *)"engMakeSparseReal[ir_, jc_, real_, m_, n_]", (char *)"{ir, jc, real, m, n}", 9);
	if (_res) _res = _definepattern(mlp, (char *)"engMakeSparseComplex[ir_, jc_, real_, imag_, m_, n_]", (char *)"{ir, jc, real, imag, m, n}", 10);
	if (_res) _res = _definepattern(mlp, (char *)"engMakeSparseLogical[ir_, jc_, logicals_, m_, n_]", (char *)"{ir, jc, logicals, m, n}", 11);
	if (_res) _res = _definepattern(mlp, (char *)"engMakeString[string_]", (char *)"{string}", 12);
	if (_res) _res = _definepattern(mlp, (char *)"engMakeStruct[fields_, handles_, dims_]", (char *)"{fields, handles, dims}", 13);
	if (_res) _res = _definepattern(mlp, (char *)"engMakeCell[handles_, dims_]", (char *)"{handles, dims}", 14);
	if (_res) _res = _definepattern(mlp, (char *)"engCleanHandles[]", (char *)"{}", 15);
	if (_res) _res = _definepattern(mlp, (char *)"engGetHandles[]", (char *)"{}", 16);
	if (_res) _res = _definepattern(mlp, (char *)"engSet[name_, handle_]", (char *)"{name, handle}", 17);
	if (_res) _res = _definepattern(mlp, (char *)"engSetVisible[value_]", (char *)"{value}", 18);
	if (_res) _res = _definepattern(mlp, (char *)"engSetupAbortHandler[]", (char *)"{}", 19);
	if (_res) _res = _doevalstr( mlp, 1);
	if (_res) _res = MLPutSymbol( mlp, "End");
	if (_res) _res = MLFlush( mlp);
	return _res;
} /* MLInstall */


#if MLPROTOTYPES
int MLDoCallPacket( MLINK mlp)
#else
int MLDoCallPacket( mlp) MLINK mlp;
#endif
{
	return _MLDoCallPacket( mlp, _tramps, 20);
} /* MLDoCallPacket */

/******************************* begin trailer ********************************/

#ifndef EVALSTRS_AS_BYTESTRINGS
#	define EVALSTRS_AS_BYTESTRINGS 1
#endif


#if CARDOF_EVALSTRS
#if MLPROTOTYPES
static int  _doevalstr( MLINK mlp, int n)
#else
static int  _doevalstr( mlp, n)
	 MLINK mlp; int n;
#endif
{
	long bytesleft, charsleft, bytesnow;
#if !EVALSTRS_AS_BYTESTRINGS
	long charsnow;
#endif
	char **s, **p;
	char *t;

	s = (char **)evalstrs;
	while( n-- > 0){
		if( *s == 0) break;
		while( *s++ != 0){}
	}
	if( *s == 0) return 0;
	bytesleft = 0;
	charsleft = 0;
	p = s;
	while( *p){
		t = *p; while( *t) ++t;
		bytesnow = t - *p;
		bytesleft += bytesnow;
		charsleft += bytesnow;
#if !EVALSTRS_AS_BYTESTRINGS
		t = *p;
		charsleft -= MLCharacterOffset( &t, t + bytesnow, bytesnow);
		/* assert( t == *p + bytesnow); */
#endif
		++p;
	}


	MLPutNext( mlp, MLTKSTR);
#if EVALSTRS_AS_BYTESTRINGS
	p = s;
	while( *p){
		t = *p; while( *t) ++t;
		bytesnow = t - *p;
		bytesleft -= bytesnow;
		MLPut8BitCharacters( mlp, bytesleft, (unsigned char*)*p, bytesnow);
		++p;
	}
#else
	MLPut7BitCount( mlp, charsleft, bytesleft);
	p = s;
	while( *p){
		t = *p; while( *t) ++t;
		bytesnow = t - *p;
		bytesleft -= bytesnow;
		t = *p;
		charsnow = bytesnow - MLCharacterOffset( &t, t + bytesnow, bytesnow);
		/* assert( t == *p + bytesnow); */
		charsleft -= charsnow;
		MLPut7BitCharacters(  mlp, charsleft, *p, bytesnow, charsnow);
		++p;
	}
#endif
	return MLError( mlp) == MLEOK;
}
#endif /* CARDOF_EVALSTRS */


#if MLPROTOTYPES
static int  _definepattern( MLINK mlp, char *patt, char *args, int func_n)
#else
static int  _definepattern( mlp, patt, args, func_n)
	MLINK  mlp;
	char  *patt, *args;
	int    func_n;
#endif
{
	MLPutFunction( mlp, "DefineExternal", (long)3);
	  MLPutString( mlp, patt);
	  MLPutString( mlp, args);
	  MLPutInteger( mlp, func_n);
	return !MLError(mlp);
} /* _definepattern */


#if MLPROTOTYPES
int _MLDoCallPacket( MLINK mlp, struct func functable[], int nfuncs)
#else
int _MLDoCallPacket( mlp, functable, nfuncs)
	MLINK mlp;
	struct func functable[];
	int nfuncs;
#endif
{
#if MLINTERFACE >= 4
	int len;
#else
	long len;
#endif
	int n, res = 0;
	struct func* funcp;

	if( ! MLGetInteger( mlp, &n) ||  n < 0 ||  n >= nfuncs) goto L0;
	funcp = &functable[n];

	if( funcp->f_nargs >= 0
#if MLINTERFACE >= 4
	&& ( ! MLTestHead(mlp, "List", &len)
#else
	&& ( ! MLCheckFunction(mlp, "List", &len)
#endif
	     || ( !funcp->manual && (len != funcp->f_nargs))
	     || (  funcp->manual && (len <  funcp->f_nargs))
	   )
	) goto L0;

	stdlink = mlp;
	res = (*funcp->f_func)( mlp);

L0:	if( res == 0)
		res = MLClearError( mlp) && MLPutSymbol( mlp, "$Failed");
	return res && MLEndPacket( mlp) && MLNewPacket( mlp);
} /* _MLDoCallPacket */


#if MLPROTOTYPES
mlapi_packet MLAnswer( MLINK mlp)
#else
mlapi_packet MLAnswer( mlp)
	MLINK mlp;
#endif
{
	mlapi_packet pkt = 0;
#if MLINTERFACE >= 4
	int waitResult;

	while( ! MLDone && ! MLError(mlp)
		&& (waitResult = MLWaitForLinkActivity(mlp),waitResult) &&
		waitResult == MLWAITSUCCESS && (pkt = MLNextPacket(mlp), pkt) &&
		pkt == CALLPKT)
	{
		MLAbort = 0;
		if(! MLDoCallPacket(mlp))
			pkt = 0;
	}
#else
	while( !MLDone && !MLError(mlp) && (pkt = MLNextPacket(mlp), pkt) && pkt == CALLPKT){
		MLAbort = 0;
		if( !MLDoCallPacket(mlp)) pkt = 0;
	}
#endif
	MLAbort = 0;
	return pkt;
} /* MLAnswer */



/*
	Module[ { me = $ParentLink},
		$ParentLink = contents of RESUMEPKT;
		Message[ MessageName[$ParentLink, "notfe"], me];
		me]
*/

#if MLPROTOTYPES
static int refuse_to_be_a_frontend( MLINK mlp)
#else
static int refuse_to_be_a_frontend( mlp)
	MLINK mlp;
#endif
{
	int pkt;

	MLPutFunction( mlp, "EvaluatePacket", 1);
	  MLPutFunction( mlp, "Module", 2);
	    MLPutFunction( mlp, "List", 1);
		  MLPutFunction( mlp, "Set", 2);
		    MLPutSymbol( mlp, "me");
	        MLPutSymbol( mlp, "$ParentLink");
	  MLPutFunction( mlp, "CompoundExpression", 3);
	    MLPutFunction( mlp, "Set", 2);
	      MLPutSymbol( mlp, "$ParentLink");
	      MLTransferExpression( mlp, mlp);
	    MLPutFunction( mlp, "Message", 2);
	      MLPutFunction( mlp, "MessageName", 2);
	        MLPutSymbol( mlp, "$ParentLink");
	        MLPutString( mlp, "notfe");
	      MLPutSymbol( mlp, "me");
	    MLPutSymbol( mlp, "me");
	MLEndPacket( mlp);

	while( (pkt = MLNextPacket( mlp), pkt) && pkt != SUSPENDPKT)
		MLNewPacket( mlp);
	MLNewPacket( mlp);
	return MLError( mlp) == MLEOK;
}


#if MLPROTOTYPES
#if MLINTERFACE >= 3
int MLEvaluate( MLINK mlp, char *s)
#else
int MLEvaluate( MLINK mlp, charp_ct s)
#endif /* MLINTERFACE >= 3 */
#else
int MLEvaluate( mlp, s)
	MLINK mlp;
#if MLINTERFACE >= 3
	char *s;
#else
	charp_ct s;
#endif /* MLINTERFACE >= 3 */
#endif
{
	if( MLAbort) return 0;
	return MLPutFunction( mlp, "EvaluatePacket", 1L)
		&& MLPutFunction( mlp, "ToExpression", 1L)
		&& MLPutString( mlp, s)
		&& MLEndPacket( mlp);
} /* MLEvaluate */


#if MLPROTOTYPES
#if MLINTERFACE >= 3
int MLEvaluateString( MLINK mlp, char *s)
#else
int MLEvaluateString( MLINK mlp, charp_ct s)
#endif /* MLINTERFACE >= 3 */
#else
int MLEvaluateString( mlp, s)
	MLINK mlp;
#if MLINTERFACE >= 3
	char *s;
#else
	charp_ct s;
#endif /* MLINTERFACE >= 3 */
#endif
{
	int pkt;
	if( MLAbort) return 0;
	if( MLEvaluate( mlp, s)){
		while( (pkt = MLAnswer( mlp), pkt) && pkt != RETURNPKT)
			MLNewPacket( mlp);
		MLNewPacket( mlp);
	}
	return MLError( mlp) == MLEOK;
} /* MLEvaluateString */


#if MLINTERFACE >= 3
#if MLPROTOTYPES
void MLDefaultHandler( MLINK mlp, int message, int n)
#else
void MLDefaultHandler( mlp, message, n)
	MLINK mlp;
	int message, n;
#endif
#else
#if MLPROTOTYPES
void MLDefaultHandler( MLINK mlp, unsigned long message, unsigned long n)
#else
void MLDefaultHandler( mlp, message, n)
	MLINK mlp;
	unsigned long message, n;
#endif
#endif /* MLINTERFACE >= 3 */
{
	switch (message){
	case MLTerminateMessage:
		MLDone = 1;
	case MLInterruptMessage:
	case MLAbortMessage:
		MLAbort = 1;
	default:
		return;
	}
}

#if MLPROTOTYPES
#if MLINTERFACE >= 3
static int _MLMain( char **argv, char **argv_end, char *commandline)
#else
static int _MLMain( charpp_ct argv, charpp_ct argv_end, charp_ct commandline)
#endif /* MLINTERFACE >= 3 */
#else
static int _MLMain( argv, argv_end, commandline)
#if MLINTERFACE >= 3
  char **argv, argv_end;
  char *commandline;
#else
  charpp_ct argv, argv_end;
  charp_ct commandline;
#endif /* MLINTERFACE >= 3 */
#endif
{
	MLINK mlp;
#if MLINTERFACE >= 3
	int err;
#else
	long err;
#endif /* MLINTERFACE >= 3 */

#if MLINTERFACE >= 4
	if( !stdenv)
		stdenv = MLInitialize( (MLEnvironmentParameter)0);
#else
	if( !stdenv)
		stdenv = MLInitialize( (MLParametersPointer)0);
#endif

	if( stdenv == (MLEnvironment)0) goto R0;

#if MLINTERFACE >= 3
	if( !stdhandler)
		stdhandler = (MLMessageHandlerObject)MLDefaultHandler;
#else
	if( !stdhandler)
		stdhandler = MLCreateMessageHandler( stdenv, MLDefaultHandler, 0);
#endif /* MLINTERFACE >= 3 */


	mlp = commandline
		? MLOpenString( stdenv, commandline, &err)
#if MLINTERFACE >= 3
		: MLOpenArgcArgv( stdenv, (int)(argv_end - argv), argv, &err);
#else
		: MLOpenArgv( stdenv, argv, argv_end, &err);
#endif
	if( mlp == (MLINK)0){
		MLAlert( stdenv, MLErrorString( stdenv, err));
		goto R1;
	}

	if( stdyielder) MLSetYieldFunction( mlp, stdyielder);
	if( stdhandler) MLSetMessageHandler( mlp, stdhandler);

	if( MLInstall( mlp))
		while( MLAnswer( mlp) == RESUMEPKT){
			if( ! refuse_to_be_a_frontend( mlp)) break;
		}

	MLClose( mlp);
R1:	MLDeinitialize( stdenv);
	stdenv = (MLEnvironment)0;
R0:	return !MLDone;
} /* _MLMain */


#if MLPROTOTYPES
#if MLINTERFACE >= 3
int MLMainString( char *commandline)
#else
int MLMainString( charp_ct commandline)
#endif /* MLINTERFACE >= 3 */
#else
#if MLINTERFACE >= 3
int MLMainString( commandline)  char *commandline;
#else
int MLMainString( commandline)  charp_ct commandline;
#endif /* MLINTERFACE >= 3 */
#endif
{
	return _MLMain( (charpp_ct)0, (charpp_ct)0, commandline);
}

#if MLPROTOTYPES
int MLMainArgv( char** argv, char** argv_end) /* note not FAR pointers */
#else
int MLMainArgv( argv, argv_end)  char **argv, **argv_end;
#endif
{   
	static char FAR * far_argv[128];
	int count = 0;
	
	while(argv < argv_end)
		far_argv[count++] = *argv++;
		 
	return _MLMain( far_argv, far_argv + count, (charp_ct)0);

}

#if MLPROTOTYPES
#if MLINTERFACE >= 3
int MLMain( int argc, char **argv)
#else
int MLMain( int argc, charpp_ct argv)
#endif /* MLINTERFACE >= 3 */
#else
#if MLINTERFACE >= 3
int MLMain( argc, argv) int argc; char **argv;
#else
int MLMain( argc, argv) int argc; charpp_ct argv;
#endif /* MLINTERFACE >= 3 */
#endif
{
#if MLINTERFACE >= 3
 	return _MLMain( argv, argv + argc, (char *)0);
#else
 	return _MLMain( argv, argv + argc, (charp_ct)0);
#endif /* MLINTERFACE >= 3 */
}
 
