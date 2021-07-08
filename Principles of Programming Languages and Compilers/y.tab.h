/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    CH = 259,
    WS = 260,
    CM = 261,
    SC = 262,
    CC = 263,
    PROGRAM = 264,
    FUNCTION = 265,
    END_FUNCTION = 266,
    RETURN = 267,
    ASSIGN_OP = 268,
    STARTMAIN = 269,
    ENDMAIN = 270,
    VARS = 271,
    INTEGER = 272,
    CHAR = 273,
    NL = 274,
    RP = 275,
    LP = 276,
    RB = 277,
    LB = 278,
    VAR = 279,
    WHILE = 280,
    ENDWHILE = 281,
    FOR = 282,
    BREAK = 283,
    ENDFOR = 284,
    TO = 285,
    STEP = 286,
    PRINT = 287,
    IF = 288,
    THEN = 289,
    ELSE = 290,
    ELSEIF = 291,
    ENDIF = 292,
    SWITCH = 293,
    CASE = 294,
    DEFAULT = 295,
    ENDSWITCH = 296,
    STRUCT = 297,
    ENDSTRUCT = 298,
    TYPEDEF = 299,
    QT = 300,
    AND = 301,
    OR = 302,
    GT = 303,
    LT = 304,
    IS_EQ = 305,
    ISNOT_EQ = 306
  };
#endif
/* Tokens.  */
#define INT 258
#define CH 259
#define WS 260
#define CM 261
#define SC 262
#define CC 263
#define PROGRAM 264
#define FUNCTION 265
#define END_FUNCTION 266
#define RETURN 267
#define ASSIGN_OP 268
#define STARTMAIN 269
#define ENDMAIN 270
#define VARS 271
#define INTEGER 272
#define CHAR 273
#define NL 274
#define RP 275
#define LP 276
#define RB 277
#define LB 278
#define VAR 279
#define WHILE 280
#define ENDWHILE 281
#define FOR 282
#define BREAK 283
#define ENDFOR 284
#define TO 285
#define STEP 286
#define PRINT 287
#define IF 288
#define THEN 289
#define ELSE 290
#define ELSEIF 291
#define ENDIF 292
#define SWITCH 293
#define CASE 294
#define DEFAULT 295
#define ENDSWITCH 296
#define STRUCT 297
#define ENDSTRUCT 298
#define TYPEDEF 299
#define QT 300
#define AND 301
#define OR 302
#define GT 303
#define LT 304
#define IS_EQ 305
#define ISNOT_EQ 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef char* YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
