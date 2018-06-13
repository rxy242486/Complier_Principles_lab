%{
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
%}
/*The following definitions are macros */
letter				[_A-Za-z]
alnum				[_A-Za-z0-9]
h					[0-9a-fA-F]
o					[0-7]
d					[0-9]
suffix				[UuLl]
white				[\t\n\040]
//%start				COMMENT

%%

/////////////////////////////////////////////////////////////////////////////
// rules section
//"/*"				{printf("%s",yytext);BEGIN COMMENT;}
//<COMMENT>\n			{printf("%s",yytext);}
//<COMMENT>"*/"		{printf("%s",yytext);BEGIN 0;}
\"(\\.|[^\"])*\"	return STRING;
\"(\\.|[^\"])*[\r\n]	{printf("Adding missing\"to string constant\n");return STRING;}

"/*"([^\*]|(\*)*[^\*/])*(\*)*"*/"	return NOTE;
\/\/[^\n]*			return NOTE;
'.'					return ICON;
'\\.'				return ICON;
'\\{o}({o}{o}?)?'	return ICON;
'\\[xX]{h}({h}{h}?)?'	return ICON;
0{o}*{suffix}?		return ICON;
0[xX]{h}+{suffix}?	return ICON;
[1-9]{d}*{suffix}?	return ICON;
([1-9]{d}*|{d}+\.{d}*|{d}*\.{d}+)(eE][-+]?{d}+)?[fF]?		return FCON;
"("					return LP;
")"					return RP;
"{"					return LC;
"}"					return RC;
"["					return LB;
"]"					return RB;
("->"|".")			return STRUCTOP;
("++")|("--")		return INCOP;
[/%]				return DIVOP;
[~!]				return UNOP;
\<\<|\>\>			return SHIFTOP;
[<>]=?				return RELOP;
[! =]=				return EQUOP;
[-+*/%&|\^]=		return ASSIGNOP;
(\<\<|\>\>)=		return ASSIGNOP;
"*"					return STAR;
"+"					return PLUS;
"-"					return MINUS;
"="					return EQUAL;
"&"					return AND;
"^"					return XOR;
"|"					return OR;
"&&"				return ANDAND;
"||"				return OROR;
"?"					return QUEST;
":"					return COLON;
","					return COMMA;
";"					return SEMI;
{letter}{alnum}*	return id_or_keyword(yytext);
"#"					return JINGHAO;
{white}+			return WHITE;
.					{printf("Invalid char %s\n",yytext);return ERRORCHAR;}


// place your Lex rules here

%%

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





















