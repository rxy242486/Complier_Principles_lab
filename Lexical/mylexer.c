/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 13 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.c
* C source file generated from mylexer.l.
* 
* Date: 05/17/18
* Time: 09:15:38
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\mylexer.l"

/****************************************************************************
Lexical_Analysis.l
ParserWizard generated Lex file.

Date: 2018Äê5ÔÂ4ÈÕ
****************************************************************************/


#include "stdio.h"
#include "ctype.h"
#include "string.h"
#include "stdlib.h"

#define _EOI		0
#define NAME		1
#define STRING		2
#define ICON		3
#define FCON		4
#define PLUS		5
#define MINUS		6
#define STAR		7
#define AND			8
#define QUEST		9
#define COLON		10
#define ANDAND		11
#define	OROR		12
#define	RELOP		13
#define EQUOP		14
#define DIVOP		15
#define OR			16
#define XOR			17
#define SHIFTOP		18
#define	INCOP		19
#define UNOP		20
#define STRUCTOP	21
#define TYPE		22
#define CLASS		23
#define STRUCT		24
#define RETURN		25
#define GOTO		26
#define IF			27
#define ELSE		28
#define SWITCH		29
#define BREAK		30
#define CONTINUE	31
#define WHILE		32
#define DO			33
#define FOR			34
#define	DEFAULT		35
#define CASE		36
#define SIZEOF		37
#define LP			38
#define	RP			39
#define LC			40
#define RC			41
#define LB			42
#define RB			43
#define COMMA		44
#define SEMI		45
#define EQUAL		46
#define ASSIGNOP	47
/* The following definitions are used for preprocess symplos*/
#define JINGHAO		48
#define INCLUDE		49
#define DEFINE		50
#define IFDEF		51
#define IFNDEF		52
#define ENDIF		53
#define NOTE		54
/*The following definitions are used for ''',','\t','\n' etc.*/
#define	WHITE		200
#define ERRORCHAR	300
int id_or_keyword(char *lx);

#line 116 "mylexer.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\mylexer.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
		{
#line 93 ".\\mylexer.l"
return STRING;
#line 237 "mylexer.c"
		}
		break;
	case 2:
		{
#line 94 ".\\mylexer.l"
printf("Adding missing\"to string constant\n");return STRING;
#line 244 "mylexer.c"
		}
		break;
	case 3:
		{
#line 96 ".\\mylexer.l"
return NOTE;
#line 251 "mylexer.c"
		}
		break;
	case 4:
		{
#line 97 ".\\mylexer.l"
return NOTE;
#line 258 "mylexer.c"
		}
		break;
	case 5:
		{
#line 98 ".\\mylexer.l"
return ICON;
#line 265 "mylexer.c"
		}
		break;
	case 6:
		{
#line 99 ".\\mylexer.l"
return ICON;
#line 272 "mylexer.c"
		}
		break;
	case 7:
		{
#line 100 ".\\mylexer.l"
return ICON;
#line 279 "mylexer.c"
		}
		break;
	case 8:
		{
#line 101 ".\\mylexer.l"
return ICON;
#line 286 "mylexer.c"
		}
		break;
	case 9:
		{
#line 102 ".\\mylexer.l"
return ICON;
#line 293 "mylexer.c"
		}
		break;
	case 10:
		{
#line 103 ".\\mylexer.l"
return ICON;
#line 300 "mylexer.c"
		}
		break;
	case 11:
		{
#line 104 ".\\mylexer.l"
return ICON;
#line 307 "mylexer.c"
		}
		break;
	case 12:
		{
#line 105 ".\\mylexer.l"
return FCON;
#line 314 "mylexer.c"
		}
		break;
	case 13:
		{
#line 106 ".\\mylexer.l"
return LP;
#line 321 "mylexer.c"
		}
		break;
	case 14:
		{
#line 107 ".\\mylexer.l"
return RP;
#line 328 "mylexer.c"
		}
		break;
	case 15:
		{
#line 108 ".\\mylexer.l"
return LC;
#line 335 "mylexer.c"
		}
		break;
	case 16:
		{
#line 109 ".\\mylexer.l"
return RC;
#line 342 "mylexer.c"
		}
		break;
	case 17:
		{
#line 110 ".\\mylexer.l"
return LB;
#line 349 "mylexer.c"
		}
		break;
	case 18:
		{
#line 111 ".\\mylexer.l"
return RB;
#line 356 "mylexer.c"
		}
		break;
	case 19:
		{
#line 112 ".\\mylexer.l"
return STRUCTOP;
#line 363 "mylexer.c"
		}
		break;
	case 20:
		{
#line 113 ".\\mylexer.l"
return INCOP;
#line 370 "mylexer.c"
		}
		break;
	case 21:
		{
#line 114 ".\\mylexer.l"
return DIVOP;
#line 377 "mylexer.c"
		}
		break;
	case 22:
		{
#line 115 ".\\mylexer.l"
return UNOP;
#line 384 "mylexer.c"
		}
		break;
	case 23:
		{
#line 116 ".\\mylexer.l"
return SHIFTOP;
#line 391 "mylexer.c"
		}
		break;
	case 24:
		{
#line 117 ".\\mylexer.l"
return RELOP;
#line 398 "mylexer.c"
		}
		break;
	case 25:
		{
#line 118 ".\\mylexer.l"
return EQUOP;
#line 405 "mylexer.c"
		}
		break;
	case 26:
		{
#line 119 ".\\mylexer.l"
return ASSIGNOP;
#line 412 "mylexer.c"
		}
		break;
	case 27:
		{
#line 120 ".\\mylexer.l"
return ASSIGNOP;
#line 419 "mylexer.c"
		}
		break;
	case 28:
		{
#line 121 ".\\mylexer.l"
return STAR;
#line 426 "mylexer.c"
		}
		break;
	case 29:
		{
#line 122 ".\\mylexer.l"
return PLUS;
#line 433 "mylexer.c"
		}
		break;
	case 30:
		{
#line 123 ".\\mylexer.l"
return MINUS;
#line 440 "mylexer.c"
		}
		break;
	case 31:
		{
#line 124 ".\\mylexer.l"
return EQUAL;
#line 447 "mylexer.c"
		}
		break;
	case 32:
		{
#line 125 ".\\mylexer.l"
return AND;
#line 454 "mylexer.c"
		}
		break;
	case 33:
		{
#line 126 ".\\mylexer.l"
return XOR;
#line 461 "mylexer.c"
		}
		break;
	case 34:
		{
#line 127 ".\\mylexer.l"
return OR;
#line 468 "mylexer.c"
		}
		break;
	case 35:
		{
#line 128 ".\\mylexer.l"
return ANDAND;
#line 475 "mylexer.c"
		}
		break;
	case 36:
		{
#line 129 ".\\mylexer.l"
return OROR;
#line 482 "mylexer.c"
		}
		break;
	case 37:
		{
#line 130 ".\\mylexer.l"
return QUEST;
#line 489 "mylexer.c"
		}
		break;
	case 38:
		{
#line 131 ".\\mylexer.l"
return COLON;
#line 496 "mylexer.c"
		}
		break;
	case 39:
		{
#line 132 ".\\mylexer.l"
return COMMA;
#line 503 "mylexer.c"
		}
		break;
	case 40:
		{
#line 133 ".\\mylexer.l"
return SEMI;
#line 510 "mylexer.c"
		}
		break;
	case 41:
		{
#line 134 ".\\mylexer.l"
return id_or_keyword(yytext);
#line 517 "mylexer.c"
		}
		break;
	case 42:
		{
#line 135 ".\\mylexer.l"
return JINGHAO;
#line 524 "mylexer.c"
		}
		break;
	case 43:
		{
#line 136 ".\\mylexer.l"
return WHITE;
#line 531 "mylexer.c"
		}
		break;
	case 44:
		{
#line 137 ".\\mylexer.l"
printf("Invalid char %s\n",yytext);return ERRORCHAR;
#line 538 "mylexer.c"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 529;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 4, 1 },
	{ 4, 1 },
	{ 45, 17 },
	{ 69, 57 },
	{ 47, 51 },
	{ 0, 11 },
	{ 51, 51 },
	{ 51, 51 },
	{ 51, 51 },
	{ 51, 51 },
	{ 51, 51 },
	{ 51, 51 },
	{ 51, 51 },
	{ 51, 51 },
	{ 51, 51 },
	{ 51, 51 },
	{ 48, 19 },
	{ 66, 66 },
	{ 80, 75 },
	{ 46, 17 },
	{ 80, 75 },
	{ 49, 19 },
	{ 73, 66 },
	{ 5, 1 },
	{ 6, 1 },
	{ 7, 1 },
	{ 8, 1 },
	{ 59, 33 },
	{ 9, 1 },
	{ 10, 1 },
	{ 11, 1 },
	{ 12, 1 },
	{ 13, 1 },
	{ 14, 1 },
	{ 15, 1 },
	{ 16, 1 },
	{ 17, 1 },
	{ 18, 1 },
	{ 19, 1 },
	{ 20, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 21, 1 },
	{ 22, 1 },
	{ 23, 1 },
	{ 24, 1 },
	{ 25, 1 },
	{ 26, 1 },
	{ 27, 1 },
	{ 70, 63 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 29, 1 },
	{ 60, 40 },
	{ 30, 1 },
	{ 31, 1 },
	{ 28, 1 },
	{ 44, 11 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 28, 1 },
	{ 32, 1 },
	{ 33, 1 },
	{ 34, 1 },
	{ 35, 1 },
	{ 0, 44 },
	{ 38, 60 },
	{ 0, 18 },
	{ 0, 80 },
	{ 38, 60 },
	{ 81, 81 },
	{ 81, 81 },
	{ 81, 81 },
	{ 81, 81 },
	{ 81, 81 },
	{ 81, 81 },
	{ 81, 81 },
	{ 81, 81 },
	{ 81, 81 },
	{ 81, 81 },
	{ 0, 53 },
	{ 53, 20 },
	{ 58, 26 },
	{ 57, 26 },
	{ 57, 24 },
	{ 58, 24 },
	{ 61, 43 },
	{ 45, 15 },
	{ 36, 25 },
	{ 0, 53 },
	{ 39, 60 },
	{ 75, 68 },
	{ 54, 81 },
	{ 66, 48 },
	{ 63, 44 },
	{ 4, 5 },
	{ 4, 5 },
	{ 0, 49 },
	{ 0, 18 },
	{ 0, 18 },
	{ 0, 80 },
	{ 42, 10 },
	{ 76, 77 },
	{ 64, 44 },
	{ 64, 44 },
	{ 64, 44 },
	{ 64, 44 },
	{ 64, 44 },
	{ 64, 44 },
	{ 64, 44 },
	{ 64, 44 },
	{ 0, 4 },
	{ 0, 53 },
	{ 53, 20 },
	{ 41, 31 },
	{ 68, 56 },
	{ 78, 82 },
	{ 0, 0 },
	{ 4, 5 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 53 },
	{ 0, 0 },
	{ 0, 0 },
	{ 54, 81 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 0, 0 },
	{ 65, 44 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 40, 60 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 65, 44 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 28, 28 },
	{ 0, 0 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 28, 28 },
	{ 47, 21 },
	{ 0, 0 },
	{ 21, 21 },
	{ 21, 21 },
	{ 21, 21 },
	{ 21, 21 },
	{ 21, 21 },
	{ 21, 21 },
	{ 21, 21 },
	{ 21, 21 },
	{ 21, 21 },
	{ 21, 21 },
	{ 50, 50 },
	{ 50, 50 },
	{ 50, 50 },
	{ 50, 50 },
	{ 50, 50 },
	{ 50, 50 },
	{ 50, 50 },
	{ 50, 50 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 47, 47 },
	{ 55, 21 },
	{ 71, 64 },
	{ 71, 64 },
	{ 71, 64 },
	{ 71, 64 },
	{ 71, 64 },
	{ 71, 64 },
	{ 71, 64 },
	{ 71, 64 },
	{ 55, 21 },
	{ 52, 50 },
	{ 77, 71 },
	{ 77, 71 },
	{ 77, 71 },
	{ 77, 71 },
	{ 77, 71 },
	{ 77, 71 },
	{ 77, 71 },
	{ 77, 71 },
	{ 52, 50 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 55, 21 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 55, 21 },
	{ 52, 50 },
	{ 56, 47 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 52, 50 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 74, 67 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 74, 67 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 67, 67 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 74, 67 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 74, 67 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 72, 65 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 0, 0 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 79, 72 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 },
	{ 82, 79 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ -3, -8, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 44 },
	{ 5, 104, 43 },
	{ 25, 140, 43 },
	{ 25, 0, 22 },
	{ 60, 0, 44 },
	{ 0, 0, 42 },
	{ 31, 0, 21 },
	{ 31, 117, 32 },
	{ -43, -4, 44 },
	{ 0, 0, 13 },
	{ 0, 0, 14 },
	{ 31, 0, 28 },
	{ 31, 98, 29 },
	{ 0, 0, 39 },
	{ 31, -42, 30 },
	{ 47, 51, 19 },
	{ 31, -25, 21 },
	{ 50, 47, 9 },
	{ 47, 215, 11 },
	{ 0, 0, 38 },
	{ 0, 0, 40 },
	{ 0, 78, 24 },
	{ 0, 81, 31 },
	{ 0, 75, 24 },
	{ 0, 0, 37 },
	{ 0, 138, 41 },
	{ 0, 0, 17 },
	{ 0, 0, 18 },
	{ 0, 107, 33 },
	{ 0, 0, 15 },
	{ 31, -96, 34 },
	{ 0, 0, 16 },
	{ 0, 0, 22 },
	{ 0, 0, 25 },
	{ 60, 0, 0 },
	{ 60, 0, 2 },
	{ 0, 0, 1 },
	{ 60, 50, 0 },
	{ 0, 0, 26 },
	{ 0, 0, 35 },
	{ 0, 101, 0 },
	{ -62, 109, 0 },
	{ 0, 0, 20 },
	{ 0, 0, 19 },
	{ 81, 233, 12 },
	{ -48, 105, 0 },
	{ -49, 141, 4 },
	{ 51, 225, 9 },
	{ 0, -41, 0 },
	{ 0, 0, 9 },
	{ 67, 58, 0 },
	{ 0, 0, 12 },
	{ 0, 0, 11 },
	{ 0, 100, 0 },
	{ 0, -57, 23 },
	{ 0, 0, 24 },
	{ 0, 0, 36 },
	{ -37, 110, 1 },
	{ 0, 0, 5 },
	{ 63, 0, 0 },
	{ 0, 17, 5 },
	{ 63, 244, 0 },
	{ 64, 365, 0 },
	{ -48, -24, 0 },
	{ 0, 295, 10 },
	{ 0, 52, 0 },
	{ 0, 0, 27 },
	{ 0, 0, 6 },
	{ 77, 254, 0 },
	{ 82, 388, 0 },
	{ 0, 0, 3 },
	{ 0, 0, 10 },
	{ 80, -24, 0 },
	{ 0, 0, 7 },
	{ 0, 117, 0 },
	{ 0, 0, 8 },
	{ 82, 426, 0 },
	{ 81, 52, 0 },
	{ 0, 76, 12 },
	{ 0, 131, 0 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 142 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section
typedef struct{char *name;int val;}KWRDSTRUCT;
KWRDSTRUCT Ktab[]=
{
{"auto",CLASS},
{"break",BREAK},
{"case",CASE},
{"char",TYPE},
{"continue",CONTINUE},
{"default",DEFAULT},
{"do",DO},
{"double",TYPE},
{"else",ELSE},
{"extern",CLASS},
{"float",TYPE},
{"for",FOR},
{"goto",GOTO},
{"if",IF},
{"int",TYPE},
{"long",TYPE},
{"register",CLASS},
{"return",RETURN},
{"short",TYPE},
{"sizeof",SIZEOF},
{"static",CLASS},
{"struct",STRUCT},
{"switch",SWITCH},
{"typeof",CLASS},
{"union",STRUCT},
{"unsigned",TYPE},
{"void",TYPE},
{"while",WHILE},
{"include",INCLUDE},
{"define",DEFINE},
{"ifdef",IFDEF},
{"ifndef",IFNDEF},
{"endif",ENDIF}
};
KWRDSTRUCT *bsrch(KWRDSTRUCT *a,KWRDSTRUCT *tab,int number)
{
	int i;
	for(i = 0;i < number;i++)
		if(!strcmp(a->name,tab[i].name))return &tab[i];
	return NULL;
}
//id_or_keyword():Do a binary search for a possible Keyword in Ktab.Return the Token if it's in the table;return NAME otherwise
int id_or_keyword(char *lx)
{
	KWRDSTRUCT *p;
	KWRDSTRUCT dummy;
	static int number = sizeof(Ktab)/sizeof(KWRDSTRUCT);
	dummy.name  = lx;
	p = bsrch(&dummy,Ktab,number);
	return (p?p->val:NAME);
}
//The following functions are used only for testing
writeout(int c,char *text)
{
	//printf("(");
	switch(c)
	{
		case 0:printf("(_EOI,%s)\n",text);break; 
		case 1:printf("(NAME,%s)\n",text);break; 
		case 2:printf("(STRING,%s)\n",text);break; 
		case 3:printf("(ICON,%s)\n",text);break; 
		case 4:printf("(FCON,%s)\n",text);break; 
		case 5:printf("(PLUS,%s)\n",text);break; 
		case 6:printf("(MINUS,%s)\n",text);break; 
		case 7:printf("(STAR,%s)\n",text);break; 
		case 8:printf("(AND,%s)\n",text);break; 
		case 9:printf("(QUEST,%s)\n",text);break; 
		case 10:printf("(COLON,%s)\n",text);break; 
		case 11:printf("(ANDAND,%s)\n",text);break; 
		case 12:printf("(OROR,%s)\n",text);break; 
		case 13:printf("(EELOP,%s)\n",text);break; 
		case 14:printf("(EQUOP,%s)\n",text);break; 
		case 15:printf("(DIVOP,%s)\n",text);break; 
		case 16:printf("(OR,%s)\n",text);break; 
		case 17:printf("(XOR,%s)\n",text);break; 
		case 18:printf("(SHIFTOP,%s)\n",text);break; 
		case 19:printf("(INCOP,%s)\n",text);break; 
		case 20:printf("(UNOP,%s)\n",text);break; 
		case 21:printf("(STRUCTOP,%s)\n",text);break; 
		case 22:printf("(TYPE,%s)\n",text);break; 
		case 23:printf("(CLASS,%s)\n",text);break; 
		case 24:printf("(STRUCT,%s)\n",text);break; 
		case 25:printf("(RETURN,%s)\n",text);break; 
		case 26:printf("(GOTO,%s)\n",text);break; 
		case 27:printf("(IF,%s)\n",text);break; 
		case 28:printf("(ELSE,%s)\n",text);break; 
		case 29:printf("(SWITCH,%s)\n",text);break; 
		case 30:printf("(BREAK,%s)\n",text);break; 
		case 31:printf("(CONTINUE,%s)\n",text);break; 
		case 32:printf("(WHILE,%s)\n",text);break; 
		case 33:printf("(DO,%s)\n",text);break; 
		case 34:printf("(FOR,%s)\n",text);break; 
		case 35:printf("(DEFAULT,%s)\n",text);break; 
		case 36:printf("(CASE,%s)\n",text);break; 
		case 37:printf("(SIZEOF,%s)\n",text);break; 
		case 38:printf("(LP,%s)\n",text);break; 
		case 39:printf("(RP,%s)\n",text);break; 
		case 40:printf("(LC,%s)\n",text);break; 
		case 41:printf("(RC,%s)\n",text);break; 
		case 42:printf("(LB,%s)\n",text);break; 
		case 43:printf("(RB,%s)\n",text);break; 
		case 44:printf("(COMMA,%s)\n",text);break; 
		case 45:printf("(SEMI,%s)\n",text);break; 
		case 46:printf("(EQUAL,%s)\n",text);break; 
		case 47:printf("(ASSIGNOP,%s)\n",text);break; 
		case 48:printf("(JINGHAO,%s)\n",text);break; 
		case 49:printf("(INCLUDE,%s)\n",text);break; 
		case 50:printf("(DEFINE,%s)\n",text);break; 
		case 51:printf("(IFDEF,%s)\n",text);break; 
		case 52:printf("(IFNDEF,%s)\n",text);break; 
		case 53:printf("(ENDIF,%s)\n",text);break; 
		default:break;
	}
}
void main(int argc,char * * argv)
{
	int c;
	if(argc >= 2)
	{
		if((yyin=fopen(argv[1],"r")) == NULL)
		{
			printf("Can't open file %s\n",argv[1]);
			exit(0);
		}
	}
	while(c = yylex())
	{
		static j = 0;
		if(c<200)
		{
			writeout(c,yytext);
			j++;
		}
		else
			continue;
	}
}






















