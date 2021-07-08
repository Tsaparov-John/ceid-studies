%{
#include "y.tab.h"  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}
		
%option noyywrap
%option yylineno
%x comment

digit   [0-9]
num	{digit}+
letter	[a-zA-Z]
char	{letter}|{digit}|_
word	{letter}{char}*

%%

PROGRAM  	{ yylval = strdup(yytext); return PROGRAM;}		
FUNCTION 	{ yylval = strdup(yytext); return FUNCTION;}
END_FUNCTION 	{ yylval = strdup(yytext); return END_FUNCTION;}
RETURN	 	{ yylval = strdup(yytext); return RETURN;}
STARTMAIN 	{ yylval = strdup(yytext); return STARTMAIN;}
ENDMAIN 	{ yylval = strdup(yytext); return ENDMAIN;}
INTEGER	 	{ yylval = strdup(yytext); return INTEGER;}
CHAR	 	{ yylval = strdup(yytext); return CHAR;}
VARS	 	{ yylval = strdup(yytext); return VARS;}
WHILE	 	{ yylval = strdup(yytext); return WHILE;}
ENDWHILE 	{ yylval = strdup(yytext); return ENDWHILE;}
FOR	 	{ yylval = strdup(yytext); return FOR;}
BREAK	 	{ yylval = strdup(yytext); return BREAK;}
ENDFOR	 	{ yylval = strdup(yytext); return ENDFOR;}
TO	 	{ yylval = strdup(yytext); return TO;}
STEP	 	{ yylval = strdup(yytext); return STEP;}
PRINT	 	{ yylval = strdup(yytext); return PRINT;}

IF	 	{ yylval = strdup(yytext); return IF;}
THEN	 	{ yylval = strdup(yytext); return THEN;}
ELSE	 	{ yylval = strdup(yytext); return ELSE;}
ELSEIF	 	{ yylval = strdup(yytext); return ELSEIF;}
ENDIF	 	{ yylval = strdup(yytext); return ENDIF;}
SWITCH	 	{ yylval = strdup(yytext); return SWITCH;}
CASE	 	{ yylval = strdup(yytext); return CASE;}
DEFAULT	 	{ yylval = strdup(yytext); return DEFAULT;}
ENDSWITCH	{ yylval = strdup(yytext); return ENDSWITCH;}

STRUCT	 	{ yylval = strdup(yytext); return STRUCT;}
ENDSTRUCT 	{ yylval = strdup(yytext); return ENDSTRUCT;}
TYPEDEF 	{ yylval = strdup(yytext); return TYPEDEF;}



AND	 	{ yylval = strdup(yytext); return AND;}
OR	 	{ yylval = strdup(yytext); return OR;}

{num} 		{ yylval = strdup(yytext); return INT; }
{word}	 	{ yylval = strdup(yytext); return CH;}	
		            
"+"	 	{ return '+'; }
"-"		{ return '-'; }
"*"		{ return '*'; }
"/"		{ return '/'; }
"^"		{ return '^'; }
"="		{ return ASSIGN_OP;}
","		{ return CM;  }
";"		{ return SC;  }
">"		{ return GT;  }
"<"		{ return LT;  }
"=="		{ return IS_EQ;  }
"!="		{ return ISNOT_EQ;  }
\".*?\"		{ yylval = strdup(yytext); return QT;  }

\n      	{ yylval = strdup(yytext);return NL;} 
[' '\t\r] 	{ }
"("      	{ yylval = strdup(yytext);return LP;}
")"      	{ yylval = strdup(yytext);return RP;}
"["      	{ yylval = strdup(yytext);return LB;}
"]"      	{ yylval = strdup(yytext);return RB;}
":"      	{ yylval = strdup(yytext);return CC;}

"%"[^\n]*  {}
"/*"        BEGIN(comment);
<comment>[^*\n]*  
<comment>"*"+[^*/\n]* 
<comment>\n       
<comment>"*"+"/"  BEGIN(INITIAL);

<<EOF>>		{return EOF;}
.      		; 
							    
%%
