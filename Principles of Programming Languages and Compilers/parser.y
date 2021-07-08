
%{
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "symbol.h"
#define YYSTYPE char*
void yyerror(char *s); 
int loop=0;
int err=0;
extern FILE *yyin;								
extern FILE *yyout;
extern int yylineno;
void uinput(char *name)
{
	utypes *t;
	t=ucheck(name);
	if(t==0)
	{
		t=uinsert(name);
	}
	else{err+=1; yyerror("name already exists");}
}
void finput(char *name)
{
	ufunc *t;
	t=fcheck(name);
	if(t==0)
	{
		t=finsert(name);
	}
	else{err+=1; yyerror("function name does not exist");}
}
void vinput(char *name)
{
	uvar *t;
	t=vcheck(name);
	if(t==0)
	{
		t=vinsert(name);
	}
	else{err+=1; yyerror("variable already exists");}
}								
%}

%define	api.value.type {char*}
  
%token INT
%token CH
%token WS
%token CM
%token SC
%token CC
%token PROGRAM
%token FUNCTION
%token END_FUNCTION
%token RETURN
%token ASSIGN_OP
%token STARTMAIN
%token ENDMAIN
%token VARS
%token INTEGER
%token CHAR
%token NL
%token RP
%token LP
%token RB
%token LB
%token VAR
%token WHILE
%token ENDWHILE
%token FOR
%token BREAK
%token ENDFOR
%token TO
%token STEP
%token PRINT
%token IF
%token THEN
%token ELSE
%token ELSEIF
%token ENDIF

%token SWITCH
%token CASE
%token DEFAULT
%token ENDSWITCH

%token STRUCT
%token ENDSTRUCT
%token TYPEDEF

%token QT
%token AND
%token OR
%token GT
%token LT
%token IS_EQ
%token ISNOT_EQ


%left	'+' '-'
%left	'*' '/'
%right	'^'

%start program

%%

program: prog {if(err==0){fprintf(stdout,"%s\n",$1);fprintf(stdout, "\nSyntax Correct\n");}else{} };
prog: PROGRAM CH NL structs dec_functions main NL{$$=strcat(strcat(strcat(strcat(strcat(strcat($1," "),$2),$3),$4),$5),$6);}
;

dec_functions:	%empty	{$$="";}
		|FUNCTION CH args NL body RETURN CH SC NL END_FUNCTION NL{finput($2);$$=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat($1," "),$2),$3),$4),$5),$6)," "),$7),";"),"\n"),$10),$11);vTable=(uvar *)0;}
		|FUNCTION CH args NL body RETURN INT SC NL END_FUNCTION NL{finput($2);$$=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat($1," "),$2),$3),$4),$5),$6)," "),$7),";"),"\n"),$10),$11);vTable=(uvar *)0;}
;

struct:	%empty	{$$="";}
	|STRUCT CH NL dec_var ENDSTRUCT NL {uinput( $2 ); $$=strcat(strcat(strcat(strcat(strcat(strcat($1," "),$2),$3),$4),$5),$6);vTable=(uvar *)0; }
	|TYPEDEF STRUCT CH NL dec_var CH ENDSTRUCT NL {if(strcmp($3,$6)==0){uinput( $3 );$$=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat($1," "),$2)," "),$3),$4),$5),$6)," "),$7),$8);  } else {yyerror("Struct names dont match"); err+=1;} vTable=(uvar *)0;}
;

structs: struct 	{$$=$1;}
	|structs struct {$$=strcat($1,$2);}
;

body: 	 dec_var		{$$=$1;}
	|instructions		{$$=$1;}
	|body instructions	{$$=strcat($1,$2);}
;

args: LP vars RP 		{$$=strcat(strcat($1,$2),$3);}
;
vars: 	  INTEGER CH 		{$$=strcat(strcat($1," "),$2);}
	| CHAR CH		{$$=strcat(strcat($1," "),$2);}
	| vars CM INTEGER CH	{$$=strcat(strcat(strcat(strcat($1,","),$3)," "),$4);}
	| vars CM CHAR CH	{$$=strcat(strcat(strcat(strcat($1,","),$3)," "),$4);}
;

dec_var: VARS NL var_dec	{$$=strcat(strcat($1,"\n"),$3);}
;
var_dec: %empty {$$="";}					
	|INTEGER CH SC NL				{vinput($2);$$=strcat(strcat(strcat($1," "),$2),";\n");}
	|INTEGER CH SC					{vinput($2);$$=strcat(strcat(strcat($1," "),$2),";");}
	|INTEGER CH ASSIGN_OP INT SC NL			{vinput($2);$$=strcat(strcat(strcat(strcat(strcat($1," "),$2),"="),$4),";\n");}
	|INTEGER CH ASSIGN_OP INT SC			{vinput($2);$$=strcat(strcat(strcat(strcat(strcat($1," "),$2),"="),$4),";\n");}
	|INTEGER CH LB INT RB SC NL			{vinput($2);$$=strcat(strcat(strcat(strcat(strcat($1," "),$2),"["),$4),"];\n");}
	|INTEGER CH LB INT RB SC 			{vinput($2);$$=strcat(strcat(strcat(strcat(strcat($1," "),$2),"["),$4),"];");}
	|CHAR CH SC NL					{vinput($2);$$=strcat(strcat(strcat($1," "),$2),";\n");}
	|CHAR CH SC 					{vinput($2);$$=strcat(strcat(strcat($1," "),$2),";");}
	|CHAR CH LB INT RB SC NL			{vinput($2);$$=strcat(strcat(strcat(strcat(strcat($1," "),$2),"["),$4),"];\n");}
	|CHAR CH LB INT RB SC 				{vinput($2);$$=strcat(strcat(strcat(strcat(strcat($1," "),$2),"["),$4),"];");}
	|CHAR CH ASSIGN_OP QT SC NL			{vinput($2);$$=strcat(strcat(strcat(strcat(strcat($1," "),$2),"="),$4),";\n");}
	|CHAR CH ASSIGN_OP QT SC			{vinput($2);$$=strcat(strcat(strcat(strcat(strcat($1," "),$2),"="),$4),";\n");}
	|CHAR CH ASSIGN_OP CH SC NL			{vinput($2);$$=strcat(strcat(strcat(strcat(strcat($1," "),$2),"="),$4),";\n");}
	|CHAR CH ASSIGN_OP CH SC			{vinput($2);$$=strcat(strcat(strcat(strcat(strcat($1," "),$2),"="),$4),";\n");}
	|CH CH SC NL					{vinput($2);if(ucheck($1)==0){yyerror("No such data type");err+=1;}$$=strcat(strcat(strcat($1," "),$2),";\n");}
	|CH CH SC					{vinput($2);if(ucheck($1)==0){yyerror("No such data type");err+=1;}$$=strcat(strcat(strcat($1," "),$2),";");}
	|var_dec CHAR CH SC NL				{vinput($3);$$=strcat(strcat(strcat(strcat($1,$2)," "),$3),";\n");}
	|var_dec CHAR CH SC 				{vinput($3);$$=strcat(strcat(strcat(strcat($1,$2)," "),$3),";");}
	|var_dec INTEGER CH SC NL			{vinput($3);$$=strcat(strcat(strcat(strcat($1,$2)," "),$3),";\n");}
	|var_dec INTEGER CH SC  			{vinput($3);$$=strcat(strcat(strcat(strcat($1,$2)," "),$3),";");}
	|var_dec INTEGER CH LB INT RB SC NL		{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"["),$5),"];\n");}
	|var_dec INTEGER CH LB INT RB SC 		{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"["),$5),"];");}
	|var_dec CHAR CH LB INT RB SC NL		{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"["),$5),"];\n");}
	|var_dec CHAR CH LB INT RB SC 			{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"["),$5),"];");}
	|var_dec INTEGER CH ASSIGN_OP INT SC NL		{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"="),$5),";\n");}
	|var_dec INTEGER CH ASSIGN_OP INT SC 		{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"="),$5),";");}
	|var_dec CHAR CH ASSIGN_OP CH SC NL		{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"="),$5),";\n");}
	|var_dec CHAR CH ASSIGN_OP CH SC 		{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"="),$5),";");}
	|var_dec CHAR CH ASSIGN_OP QT SC NL		{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"="),$5),";\n");}
	|var_dec CHAR CH ASSIGN_OP QT SC 		{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"="),$5),";");}
	|var_dec INTEGER CH ASSIGN_OP math SC NL	{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"="),$5),";\n");}
	|var_dec INTEGER CH ASSIGN_OP math SC 		{vinput($3);$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2)," "),$3),"="),$5),";");}
;	

main: STARTMAIN NL body ENDMAIN {$$=strcat(strcat(strcat($1,"\n"),$3),$4);}
;

instructions: 	 instruction instruction	{$$=strcat($1,$2);}
		|instruction instructions	{$$=strcat($1,$2);}
;
instruction: 	%empty 				{$$="";}
		|CH ASSIGN_OP INT SC 		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat(strcat($1,"="),$3),";");}
		|CH ASSIGN_OP CH SC 		{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat(strcat($1,"="),$3),";");}
		|CH ASSIGN_OP QT SC 		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat(strcat($1,"="),$3),";");}
		|CH ASSIGN_OP math 		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat(strcat($1,"="),$3),"");}
		|CH ASSIGN_OP function SC 	{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat(strcat($1,"="),$3),";");}
		|function SC			{$$=strcat($1,";");}
		|BREAK SC			{if(loop==1){$$=strcat($1,";");}else{yyerror("BREAK not in a loop");err+=1;}}
		|while				{$$=$1;}
		|for				{$$=$1;}
		|print				{$$=$1;}
		|if				{$$=$1;}
		|switch				{$$=$1;}
		|NL				{$$=$1;}
;
function:  CH LP csv RP		{if(fcheck($1)==0){yyerror("No such function");err+=1;}$$=strcat(strcat(strcat($1,$2),$3),$4);}
	  |CH LP CH  RP		{if(fcheck($1)==0){yyerror("No such function");err+=1;}$$=strcat(strcat(strcat($1,$2),$3),$4);}
	  |CH LP INT RP		{if(fcheck($1)==0){yyerror("No such function");err+=1;}$$=strcat(strcat(strcat($1,$2),$3),$4);}
;

csv:	 CH CM CH		{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,","),$3);}
	|INT CM INT		{$$=strcat(strcat($1,","),$3);}
 	|CH CM INT		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,","),$3);}
	|INT CM CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,","),$3);}
	|function CM function	{$$=strcat(strcat($1,","),$3);}
 	|CH CM function		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,","),$3);}
	|function CM CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,","),$3);}
 	|INT CM function	{$$=strcat(strcat($1,","),$3);}
	|function CM INT	{$$=strcat(strcat($1,","),$3);}
	|csv CM CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,","),$3);}
	|csv CM INT 		{$$=strcat(strcat($1,","),$3);}
	|csv CM function	{$$=strcat(strcat($1,","),$3);}
;

math:	 CH'+'CH		{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"+"),$3);}
	|CH'-'CH		{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"-"),$3);}
	|CH'*'CH		{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"*"),$3);}
	|CH'^'CH		{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"^"),$3);}
	|CH'/'CH		{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"/"),$3);}
	|INT'+'INT		{$$=strcat(strcat($1,"+"),$3);}
	|INT'-'INT		{$$=strcat(strcat($1,"-"),$3);}
	|INT'*'INT		{$$=strcat(strcat($1,"*"),$3);}
	|INT'^'INT		{$$=strcat(strcat($1,"^"),$3);}
	|INT'/'INT		{$$=strcat(strcat($1,"/"),$3);}
	|function'+'function	{$$=strcat(strcat($1,"+"),$3);}
	|function'-'function	{$$=strcat(strcat($1,"-"),$3);}
	|function'*'function	{$$=strcat(strcat($1,"*"),$3);}
	|function'^'function	{$$=strcat(strcat($1,"^"),$3);}
	|function'/'function	{$$=strcat(strcat($1,"/"),$3);}
	|function'+'INT		{$$=strcat(strcat($1,"+"),$3);}
	|function'-'INT		{$$=strcat(strcat($1,"-"),$3);}
	|function'*'INT		{$$=strcat(strcat($1,"*"),$3);}
	|function'^'INT		{$$=strcat(strcat($1,"^"),$3);}
	|function'/'INT		{$$=strcat(strcat($1,"/"),$3);}
	|function'+'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"+"),$3);}
	|function'-'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"-"),$3);}
	|function'*'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"*"),$3);}
	|function'^'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"^"),$3);}
	|function'/'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"/"),$3);}
	|CH'+'INT		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"+"),$3);}
	|CH'-'INT		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"-"),$3);}
	|CH'*'INT		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"*"),$3);}
	|CH'^'INT		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"^"),$3);}
	|CH'/'INT		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"/"),$3);}
	|CH'+'function		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"+"),$3);}
	|CH'-'function		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"-"),$3);}
	|CH'*'function		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"*"),$3);}
	|CH'^'function		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"^"),$3);}
	|CH'/'function		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"/"),$3);}
	|INT'+'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"+"),$3);}
	|INT'-'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"-"),$3);}
	|INT'*'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"*"),$3);}
	|INT'^'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"^"),$3);}
	|INT'/'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"/"),$3);}
	|INT'+'function		{$$=strcat(strcat($1,"+"),$3);}
	|INT'-'function		{$$=strcat(strcat($1,"-"),$3);}
	|INT'*'function		{$$=strcat(strcat($1,"*"),$3);}
	|INT'^'function		{$$=strcat(strcat($1,"^"),$3);}
	|INT'/'function		{$$=strcat(strcat($1,"/"),$3);}
	|math'+'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"+"),$3);}
	|math'-'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"-"),$3);}
	|math'*'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"*"),$3);}
	|math'^'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"^"),$3);}
	|math'/'CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"/"),$3);}
	|math'+'INT		{$$=strcat(strcat($1,"+"),$3);}
	|math'-'INT		{$$=strcat(strcat($1,"-"),$3);}
	|math'*'INT		{$$=strcat(strcat($1,"*"),$3);}
	|math'^'INT		{$$=strcat(strcat($1,"^"),$3);}
	|math'/'INT		{$$=strcat(strcat($1,"/"),$3);}
	|math'+'function	{$$=strcat(strcat($1,"+"),$3);}
	|math'-'function	{$$=strcat(strcat($1,"-"),$3);}
	|math'*'function	{$$=strcat(strcat($1,"*"),$3);}
	|math'^'function	{$$=strcat(strcat($1,"^"),$3);}
	|math'/'function	{$$=strcat(strcat($1,"/"),$3);}
	|math SC NL		{$$=strcat($1,";\n");}
	|math SC		{$$=strcat($1,";");}
;
comp: 	 CH GT CH		{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,">"),$3);}
	|CH GT INT		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,">"),$3);}
	|CH GT function		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,">"),$3);}
	|CH GT LP math RP	{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat(strcat(strcat($1,">"),$3),$4),$5);}
	|INT GT INT		{$$=strcat(strcat($1,">"),$3);}
	|INT GT CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,">"),$3);}
	|INT GT function	{$$=strcat(strcat($1,">"),$3);}
	|INT GT LP math RP	{$$=strcat(strcat(strcat(strcat($1,">"),$3),$4),$5);}
	|function GT function	{$$=strcat(strcat($1,">"),$3);}
	|function GT CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,">"),$3);}
	|function GT INT	{$$=strcat(strcat($1,">"),$3);}
	|function GT LP math RP	{$$=strcat(strcat(strcat(strcat($1,">"),$3),$4),$5);}
	|CH LT CH		{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"<"),$3);}
	|CH LT INT		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"<"),$3);}
	|CH LT function		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"<"),$3);}
	|CH LT LP math RP	{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat(strcat(strcat($1,"<"),$3),$4),$5);}
	|INT LT INT		{$$=strcat(strcat($1,"<"),$3);}
	|INT LT CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"<"),$3);}
	|INT LT function	{$$=strcat(strcat($1,"<"),$3);}
	|INT LT LP math RP	{$$=strcat(strcat(strcat(strcat($1,"<"),$3),$4),$5);}
	|function LT function	{$$=strcat(strcat($1,"<"),$3);}
	|function LT CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"<"),$3);}
	|function LT INT	{$$=strcat(strcat($1,"<"),$3);}
	|function LT LP math RP	{$$=strcat(strcat(strcat(strcat($1,"<"),$3),$4),$5);}
	|CH IS_EQ CH			{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"=="),$3);}
	|CH IS_EQ INT			{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"=="),$3);}
	|CH IS_EQ function		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"=="),$3);}
	|CH IS_EQ LP math RP		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat(strcat(strcat($1,"=="),$3),$4),$5);}
	|INT IS_EQ INT			{$$=strcat(strcat($1,"=="),$3);}
	|INT IS_EQ CH			{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"=="),$3);}
	|INT IS_EQ function		{$$=strcat(strcat($1,"=="),$3);}
	|INT IS_EQ LP math RP		{$$=strcat(strcat(strcat(strcat($1,"=="),$3),$4),$5);}
	|function IS_EQ function	{$$=strcat(strcat($1,"=="),$3);}
	|function IS_EQ CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"=="),$3);}
	|function IS_EQ INT		{$$=strcat(strcat($1,"=="),$3);}
	|function IS_EQ LP math RP	{$$=strcat(strcat(strcat(strcat($1,"=="),$3),$4),$5);}
	|CH ISNOT_EQ CH			{if(vcheck($1)==0 || vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"!="),$3);}
	|CH ISNOT_EQ INT		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"!="),$3);}
	|CH ISNOT_EQ function		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"!="),$3);}
	|CH ISNOT_EQ LP math RP		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat(strcat(strcat($1,"!="),$3),$4),$5);}
	|INT ISNOT_EQ INT		{$$=strcat(strcat($1,"!="),$3);}
	|INT ISNOT_EQ CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"!="),$3);}
	|INT ISNOT_EQ function		{$$=strcat(strcat($1,"!="),$3);}
	|INT ISNOT_EQ LP math RP	{$$=strcat(strcat(strcat(strcat($1,"!="),$3),$4),$5);}
	|function ISNOT_EQ function	{$$=strcat(strcat($1,"!="),$3);}
	|function ISNOT_EQ CH		{if(vcheck($3)==0){yyerror("No such variable");err+=1;}$$=strcat(strcat($1,"!="),$3);}
	|function ISNOT_EQ INT		{$$=strcat(strcat($1,"!="),$3);}
	|function ISNOT_EQ LP math RP	{$$=strcat(strcat(strcat(strcat($1,"!="),$3),$4),$5);}
	|comp AND comp			{$$=strcat(strcat(strcat(strcat($1," "),$2)," "),$3);}
	|comp OR comp			{$$=strcat(strcat(strcat(strcat($1," "),$2)," "),$3);}
;

whiles: WHILE {loop=1;$$=$1;};

while: whiles LP comp RP NL body ENDWHILE NL {$$=strcat(strcat(strcat(strcat(strcat(strcat(strcat($1,"("),$3),")"),$5),$6),$7),$8);}
;

for: fors CH ASSIGN_OP INT TO INT STEP INT body ENDFOR {$$=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat($1," "),$2),"="),$4)," "),$5)," "),$6)," "),$7)," "),$8),$9),$10);loop=0;};
fors: 	 FOR {loop=1;$$=$1;}
;


print:   PRINT LP QT RP SC 		{$$=strcat(strcat(strcat(strcat($1,$2),$3),$4),";");}
	|PRINT LP QT CM csv RP SC 	{$$=strcat(strcat(strcat(strcat(strcat($1,$2),$3),","),$5),");");}
	|PRINT LP QT CM CH RP SC 	{$$=strcat(strcat(strcat(strcat(strcat($1,$2),$3),","),$5),");");}
	|PRINT LP QT CM INT RP SC 	{$$=strcat(strcat(strcat(strcat(strcat($1,$2),$3),","),$5),");");}
	|PRINT LP QT CM function RP SC 	{$$=strcat(strcat(strcat(strcat(strcat($1,$2),$3),","),$5),");");}
;


elseif:  ELSEIF LP comp RP THEN			{$$=strcat(strcat(strcat(strcat($1,$2),$3),$4),$5);}
	|elseif body ELSEIF LP comp RP THEN	{$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2),$3),$4),$5),$6),$7);}
;

if:	 IF LP comp RP THEN body ENDIF			{$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2),$3),$4),$5),$6),$7);}
	|IF LP comp RP THEN body elseif body ENDIF	{$$=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat($1,$2),$3),$4),$5),$6),$7),$8),$9);}
    	|IF LP comp RP THEN body ELSE   body ENDIF	{$$=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat($1,$2),$3),$4),$5),$6),$7),$8),$9);}
	|IF LP comp RP THEN body elseif body ELSE body ENDIF	{$$=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat($1,$2),$3),$4),$5),$6),$7),$8),$9),$10),$11);}
;

expr: 	 INT 		{$$=$1;}
	|CH  		{if(vcheck($1)==0){yyerror("No such variable");err+=1;}$$=$1;}
	|function  	{$$=$1;}
	|math  		{$$=$1;}
;

switch:  SWITCH LP expr RP NL case ENDSWITCH 				{$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2),$3),$4),$5),$6),$7);}
	|SWITCH LP expr RP NL case DEFAULT instructions ENDSWITCH 	{$$=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat($1,$2),$3),$4),$5),$6),$7),$8),$9);}
;

case: 	 CASE LP expr RP CC NL instructions		{$$=strcat(strcat(strcat(strcat(strcat(strcat($1,$2),$3),$4),$5),$6),$7);}
	|case CASE LP expr RP CC NL instructions	{$$=strcat(strcat(strcat(strcat(strcat(strcat(strcat($1,$2),$3),$4),$5),$6),$7),$8);}
;

%%								    
    

void yyerror(char *s) 
{
    fprintf(stderr, "line:%d %s\n",yylineno, s);
}									


int main ( int argc, char **argv  ) 
  {
  ++argv; --argc;
  if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
  else
        yyin = stdin;
  yyout = fopen ( "outputtst", "w" );	
  yyparse ();	    
  return 0;
  }   
										
