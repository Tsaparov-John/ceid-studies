/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parser.y" /* yacc.c:339  */

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

#line 111 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 264 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   667

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  446

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    54,    52,     2,    53,     2,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   111,   111,   112,   115,   116,   117,   120,   121,   122,
     125,   126,   129,   130,   131,   134,   136,   137,   138,   139,
     142,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   179,   182,   183,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   200,   201,   202,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   334,   336,
     339,   340,   344,   345,   346,   347,   348,   352,   353,   356,
     357,   358,   359,   362,   363,   364,   365,   368,   369,   372,
     373
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CH", "WS", "CM", "SC", "CC",
  "PROGRAM", "FUNCTION", "END_FUNCTION", "RETURN", "ASSIGN_OP",
  "STARTMAIN", "ENDMAIN", "VARS", "INTEGER", "CHAR", "NL", "RP", "LP",
  "RB", "LB", "VAR", "WHILE", "ENDWHILE", "FOR", "BREAK", "ENDFOR", "TO",
  "STEP", "PRINT", "IF", "THEN", "ELSE", "ELSEIF", "ENDIF", "SWITCH",
  "CASE", "DEFAULT", "ENDSWITCH", "STRUCT", "ENDSTRUCT", "TYPEDEF", "QT",
  "AND", "OR", "GT", "LT", "IS_EQ", "ISNOT_EQ", "'+'", "'-'", "'*'", "'/'",
  "'^'", "$accept", "program", "prog", "dec_functions", "struct",
  "structs", "body", "args", "vars", "dec_var", "var_dec", "main",
  "instructions", "instruction", "function", "csv", "math", "comp",
  "whiles", "while", "for", "fors", "print", "elseif", "if", "expr",
  "switch", "case", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    43,    45,    42,    47,    94
};
# endif

#define YYPACT_NINF -362

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-362)))

#define YYTABLE_NINF -148

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    31,    76,  -362,    50,  -362,   -15,    78,    52,  -362,
     106,   118,   122,   210,   193,  -362,   208,   253,   260,   264,
     281,   294,   219,   208,   117,   305,   401,  -362,   135,   332,
     349,   353,   359,    13,   401,     7,  -362,  -362,  -362,   329,
     348,   354,   366,   417,  -362,  -362,   514,   360,   368,  -362,
    -362,   387,  -362,  -362,  -362,   390,   395,   398,   180,  -362,
     382,  -362,  -362,   241,  -362,   434,    10,   267,  -362,   392,
     283,   308,  -362,  -362,  -362,   514,  -362,   283,   414,   428,
     203,   205,   439,   454,   441,   461,   464,   312,   140,    -5,
     474,   223,   266,    17,   317,   465,    69,   107,   500,    70,
     515,    -2,   501,   -13,   506,   266,   467,     6,   481,   473,
     478,   497,   505,   510,     1,   513,   225,   229,  -362,  -362,
    -362,   512,   517,  -362,   415,   419,   437,   444,   448,  -362,
     453,   460,   470,   476,   486,  -362,  -362,   492,   502,   509,
     518,   524,   521,   534,   540,   564,   566,   568,   570,  -362,
     572,  -362,   574,   576,  -362,   578,   525,   128,   185,   187,
     201,   261,   341,   343,   345,   356,   389,   394,   403,   511,
     283,   283,   571,   573,   504,  -362,  -362,   584,   567,  -362,
     586,   587,   575,   577,   580,   592,   579,    11,   596,   581,
     583,  -362,   585,  -362,  -362,   585,  -362,  -362,   585,  -362,
    -362,   585,  -362,  -362,   585,  -362,  -362,   585,  -362,  -362,
     585,  -362,  -362,   585,  -362,  -362,   585,  -362,  -362,   585,
    -362,  -362,   585,  -362,  -362,   585,  -362,  -362,   585,  -362,
    -362,   585,  -362,  -362,   585,  -362,  -362,  -362,   585,  -362,
    -362,   585,  -362,  -362,   585,  -362,  -362,   585,  -362,  -362,
     585,  -362,  -362,   585,  -362,  -362,   585,  -362,  -362,   585,
    -362,  -362,   585,  -362,   214,   410,   234,   240,  -362,  -362,
     585,   582,  -362,  -362,   585,   582,  -362,  -362,   585,   582,
    -362,  -362,   585,   582,  -362,  -362,   585,   582,  -362,  -362,
     585,   582,  -362,  -362,   585,   582,  -362,  -362,   585,   582,
    -362,  -362,   585,   582,  -362,  -362,   585,   582,  -362,  -362,
     585,   582,  -362,  -362,   585,   582,  -362,   401,   541,   541,
     562,   401,   600,   588,   597,   589,   590,   598,  -362,   273,
     -13,   506,   278,   591,  -362,   603,   604,   593,   601,   605,
     607,   610,   611,   612,   501,     5,    89,   105,   110,   116,
     126,   131,   147,   237,   243,   249,   254,   346,   599,   227,
     450,   594,  -362,   602,  -362,  -362,   608,   609,   121,   615,
     613,   614,   616,   617,   618,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,   401,   619,  -362,   401,   308,   620,   514,  -362,   623,
     621,  -362,  -362,  -362,   287,   624,  -362,  -362,   625,  -362,
    -362,   466,   283,   376,   606,   308,   622,  -362,   401,  -362,
    -362,  -362,    16,   401,   626,  -362,   627,   628,  -362,   482,
     595,   498,   283,   630,   631,  -362,  -362,  -362,   109,   514,
     632,   633,  -362,   514,  -362,  -362
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     7,     0,     0,    10,
       4,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     3,    21,     0,
       0,     0,     0,     0,    57,     0,    70,   198,   201,     0,
       0,     0,     0,     0,    12,    13,    57,     0,     0,    65,
      66,     0,    67,    68,    69,     0,     0,     0,    20,     8,
       0,    16,    17,     0,    15,     0,     0,     0,    64,     0,
       0,     0,    54,    14,    56,    55,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   213,   214,   215,   216,     0,     0,     0,    37,
      23,     0,     0,    29,     0,     0,     0,     0,     9,    18,
      19,     0,     0,    58,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,     0,    60,    62,     0,     0,     0,
       0,     0,   147,     0,     0,     0,     0,     0,     0,    73,
       0,    72,     0,     0,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    22,     0,     0,    28,
       0,     0,     0,    41,     0,     0,    39,     0,     0,     0,
       0,    91,   121,   126,    92,   122,   127,    93,   123,   128,
      95,   125,   130,    94,   124,   129,   111,    86,   116,   112,
      87,   117,   113,    88,   118,   115,    90,   120,   114,    89,
     119,   101,   106,    96,   102,   107,    97,   103,   108,    98,
     105,   110,   100,   104,   109,    99,   146,   136,   131,   141,
     137,   132,   142,   138,   133,   143,   140,   135,   145,   139,
     134,   144,    75,    77,    81,    76,    74,    79,    82,    80,
      78,    84,    83,    85,     0,     0,     0,     0,   202,   152,
     153,     0,   154,   164,   165,     0,   166,   176,   177,     0,
     178,   188,   189,     0,   190,   149,   148,     0,   150,   161,
     160,     0,   162,   173,   172,     0,   174,   185,   184,     0,
     186,   158,   157,     0,   156,   170,   169,     0,   168,   182,
     181,     0,   180,   194,   193,     0,   192,    57,   196,   197,
       0,    57,     0,    25,     0,    35,    33,     0,    40,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    27,    34,    32,    31,    47,    53,     0,
      49,    51,     0,     0,     0,   205,   204,   206,   203,   155,
     167,   179,   191,   151,   163,   175,   187,   159,   171,   183,
     195,    57,     0,   209,    57,     0,     0,    57,   217,     0,
       0,    26,    30,    46,    52,    43,    48,    50,    45,     6,
       5,     0,     0,     0,     0,     0,     0,   199,    57,    42,
      44,   211,     0,    57,     0,   210,     0,     0,   218,     0,
       0,     0,     0,     0,     0,   200,   207,   212,     0,    57,
       0,     0,   219,    57,   208,   220
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -362,  -362,  -362,  -362,   635,  -362,   -33,  -362,  -362,     8,
    -362,  -362,   -43,   -37,   -60,   475,   -62,   -56,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -361,  -362,  -362
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    14,     9,    10,    43,    25,    33,    44,
      58,    20,    45,    46,    47,    96,   105,   101,    48,    49,
      50,    51,    52,   394,    53,   106,    54,   359
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    65,   129,    74,    92,   180,    91,    95,    67,    75,
     100,   104,   142,    88,    89,   335,    67,   100,   169,    63,
      66,   107,    73,   148,    22,   379,   173,     7,    67,     8,
       1,    30,    74,    64,   414,     4,   430,   149,    75,   130,
     131,   132,   133,   134,   170,   171,   181,   130,   131,   132,
     133,   134,   170,   171,   427,    90,   336,   143,   144,   145,
     146,   147,   170,   171,   193,   196,   199,   202,   205,     6,
     208,   211,   214,   217,   220,   153,     5,   223,   226,   229,
     232,   235,    11,   239,   242,   245,   248,   251,   254,   154,
     257,    67,   260,   263,    12,   266,   142,   272,   276,   280,
     284,   288,   292,   296,   300,   304,   308,   312,   316,   380,
     100,   100,   142,   155,   318,   319,    13,   142,   161,   162,
     163,   164,   332,   142,   331,   381,    17,   156,  -147,   441,
     382,   269,   270,   142,    31,    32,   383,    16,   142,    55,
     404,   143,   144,   145,   146,   147,   384,   123,     7,   271,
       8,   385,    56,    57,   142,   170,   171,   143,   144,   145,
     146,   147,   143,   144,   145,   146,   147,   386,   143,   144,
     145,   146,   147,  -147,  -147,  -147,  -147,  -147,   143,   144,
     145,   146,   147,   143,   144,   145,   146,   147,   273,   274,
     277,   278,   124,   125,   126,   127,   128,    82,    83,   143,
     144,   145,   146,   147,   281,   282,   275,    19,   279,   345,
     110,   331,   113,   346,    18,   331,   111,   347,   114,   331,
     148,   348,   283,   331,    21,   349,   112,   331,   115,   350,
     136,   331,   183,   351,   340,   331,   186,   352,   184,   331,
     152,   353,   187,   331,   142,   354,   153,   331,   185,   355,
     142,   331,   188,   356,   342,   331,   142,   387,    85,    86,
     343,   142,    29,   388,   285,   286,   396,   397,   398,   389,
      93,    94,    23,   142,   390,   137,   138,   139,   140,   141,
     367,    24,   287,    26,   357,   368,    98,    99,   360,   143,
     144,   145,   146,   147,  -146,   143,   144,   145,   146,   147,
      27,   143,   144,   145,   146,   147,   143,   144,   145,   146,
     147,   102,   103,    28,    73,   121,   122,    73,   143,   144,
     145,   146,   147,   150,    34,   124,   125,   126,   127,   128,
     143,   144,   145,   146,   147,   104,    68,   151,    67,  -146,
    -146,  -146,  -146,  -146,   289,   290,   293,   294,   297,   298,
      35,    59,   100,    60,   416,   104,   422,    61,   411,   301,
     302,   413,   291,    62,   295,    36,   299,    76,    73,    69,
      73,    37,   100,    38,    39,    70,   438,   303,    40,    41,
      35,   391,   392,   393,    42,   429,    73,    71,    73,    77,
     431,    78,   305,   306,    79,    36,   442,   309,   310,    80,
     445,    37,    81,    38,    39,    35,   313,   314,    40,    41,
     307,   423,   424,   425,    42,   311,   150,    21,   191,   192,
      36,    35,   194,   195,   315,    84,    37,   108,    38,    39,
     341,    67,    72,    40,    41,   109,    36,    97,    35,    42,
     197,   198,    37,   116,    38,    39,    87,   200,   201,    40,
      41,   203,   204,    36,    35,    42,   206,   207,   117,    37,
     118,    38,    39,   209,   210,   119,    40,    41,   120,    36,
      35,   152,    42,   212,   213,    37,   399,    38,    39,   215,
     216,   135,    40,    41,   174,    36,    35,   172,    42,   218,
     219,    37,   175,    38,    39,   221,   222,   176,    40,    41,
     177,    36,    35,   421,    42,   224,   225,    37,   178,    38,
      39,   435,   227,   228,    40,    41,   182,    36,    35,   189,
      42,   230,   231,    37,   190,    38,    39,   233,   234,   179,
      40,    41,   268,    36,   322,   437,    42,   237,   238,    37,
     236,    38,    39,   240,   241,   317,    40,    41,   157,   158,
     159,   160,    42,   124,   125,   126,   127,   128,   137,   138,
     139,   140,   141,   165,   166,   167,   168,   243,   244,   246,
     247,   249,   250,   252,   253,   255,   256,   258,   259,   261,
     262,   264,   265,   329,   330,   344,   330,   170,   171,   324,
     320,   323,   321,   325,   326,   333,   328,   327,   334,   337,
     338,   358,   339,   361,   363,   366,    67,   362,   364,   365,
     370,   371,   373,   369,   375,   372,   374,   376,   377,   378,
     395,   401,   405,   408,   418,   400,   426,   402,   403,   436,
     267,     0,   406,   407,     0,   433,   409,   410,     0,   440,
     412,   415,   417,   419,   420,    15,     0,   432,   434,   439,
       0,   443,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   428,     0,     0,     0,   444
};

static const yytype_int16 yycheck[] =
{
      43,    34,     7,    46,    66,     4,    66,    67,    21,    46,
      70,    71,     7,     3,     4,     4,    21,    77,    20,     6,
      13,    77,    65,     6,    16,    20,    20,    42,    21,    44,
       9,    23,    75,    20,   395,     4,    20,    20,    75,    52,
      53,    54,    55,    56,    46,    47,    45,    52,    53,    54,
      55,    56,    46,    47,   415,    45,    45,    52,    53,    54,
      55,    56,    46,    47,   124,   125,   126,   127,   128,    19,
     130,   131,   132,   133,   134,     6,     0,   137,   138,   139,
     140,   141,     4,   143,   144,   145,   146,   147,   148,    20,
     150,    21,   152,   153,    42,   155,     7,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,    20,
     170,   171,     7,     6,   170,   171,    10,     7,    48,    49,
      50,    51,   184,     7,   184,    20,     4,    20,     7,    20,
      20,     3,     4,     7,    17,    18,    20,    19,     7,     4,
      19,    52,    53,    54,    55,    56,    20,     7,    42,    21,
      44,    20,    17,    18,     7,    46,    47,    52,    53,    54,
      55,    56,    52,    53,    54,    55,    56,    20,    52,    53,
      54,    55,    56,    52,    53,    54,    55,    56,    52,    53,
      54,    55,    56,    52,    53,    54,    55,    56,     3,     4,
       3,     4,    52,    53,    54,    55,    56,    17,    18,    52,
      53,    54,    55,    56,     3,     4,    21,    14,    21,   271,
       7,   271,     7,   275,     4,   275,    13,   279,    13,   279,
       6,   283,    21,   283,    16,   287,    23,   287,    23,   291,
       7,   291,     7,   295,    20,   295,     7,   299,    13,   299,
       6,   303,    13,   303,     7,   307,     6,   307,    23,   311,
       7,   311,    23,   315,    20,   315,     7,    20,    17,    18,
      20,     7,    43,    20,     3,     4,    39,    40,    41,    20,
       3,     4,    19,     7,    20,    52,    53,    54,    55,    56,
       7,    21,    21,    19,   317,     7,     3,     4,   321,    52,
      53,    54,    55,    56,     7,    52,    53,    54,    55,    56,
      19,    52,    53,    54,    55,    56,    52,    53,    54,    55,
      56,     3,     4,    19,   357,     3,     4,   360,    52,    53,
      54,    55,    56,     6,    19,    52,    53,    54,    55,    56,
      52,    53,    54,    55,    56,   395,     7,    20,    21,    52,
      53,    54,    55,    56,     3,     4,     3,     4,     3,     4,
       4,    19,   412,     4,   397,   415,   412,     4,   391,     3,
       4,   394,    21,     4,    21,    19,    21,     7,   411,    21,
     413,    25,   432,    27,    28,    21,   432,    21,    32,    33,
       4,    35,    36,    37,    38,   418,   429,    21,   431,    21,
     423,     4,     3,     4,     4,    19,   439,     3,     4,     4,
     443,    25,     4,    27,    28,     4,     3,     4,    32,    33,
      21,    35,    36,    37,    38,    21,     6,    16,     3,     4,
      19,     4,     3,     4,    21,    43,    25,    13,    27,    28,
      20,    21,    15,    32,    33,     7,    19,    45,     4,    38,
       3,     4,    25,     4,    27,    28,    12,     3,     4,    32,
      33,     3,     4,    19,     4,    38,     3,     4,     4,    25,
      19,    27,    28,     3,     4,     4,    32,    33,     4,    19,
       4,     6,    38,     3,     4,    25,    26,    27,    28,     3,
       4,     7,    32,    33,     3,    19,     4,    20,    38,     3,
       4,    25,    19,    27,    28,     3,     4,    19,    32,    33,
       3,    19,     4,    37,    38,     3,     4,    25,     3,    27,
      28,    29,     3,     4,    32,    33,     3,    19,     4,     7,
      38,     3,     4,    25,     7,    27,    28,     3,     4,    19,
      32,    33,     7,    19,    30,    37,    38,     3,     4,    25,
      19,    27,    28,     3,     4,    34,    32,    33,    48,    49,
      50,    51,    38,    52,    53,    54,    55,    56,    52,    53,
      54,    55,    56,    48,    49,    50,    51,     3,     4,     3,
       4,     3,     4,     3,     4,     3,     4,     3,     4,     3,
       4,     3,     4,     3,     4,     3,     4,    46,    47,    22,
      19,     7,    19,     7,     7,     3,    19,    22,    19,     3,
      19,    39,    19,     3,     7,     7,    21,    19,    19,    19,
       7,     7,    11,    22,     7,    22,    11,     7,     7,     7,
      21,    19,     7,     7,     3,    31,    20,    19,    19,    34,
     155,    -1,    19,    19,    -1,     8,    19,    19,    -1,     8,
      21,    21,    19,    19,    19,    10,    -1,    21,    20,    19,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    58,    59,     4,     0,    19,    42,    44,    61,
      62,     4,    42,    10,    60,    61,    19,     4,     4,    14,
      68,    16,    66,    19,    21,    64,    19,    19,    19,    43,
      66,    17,    18,    65,    19,     4,    19,    25,    27,    28,
      32,    33,    38,    63,    66,    69,    70,    71,    75,    76,
      77,    78,    79,    81,    83,     4,    17,    18,    67,    19,
       4,     4,     4,     6,    20,    63,    13,    21,     7,    21,
      21,    21,    15,    69,    69,    70,     7,    21,     4,     4,
       4,     4,    17,    18,    43,    17,    18,    12,     3,     4,
      45,    71,    73,     3,     4,    71,    72,    45,     3,     4,
      71,    74,     3,     4,    71,    73,    82,    74,    13,     7,
       7,    13,    23,     7,    13,    23,     4,     4,    19,     4,
       4,     3,     4,     7,    52,    53,    54,    55,    56,     7,
      52,    53,    54,    55,    56,     7,     7,    52,    53,    54,
      55,    56,     7,    52,    53,    54,    55,    56,     6,    20,
       6,    20,     6,     6,    20,     6,    20,    48,    49,    50,
      51,    48,    49,    50,    51,    48,    49,    50,    51,    20,
      46,    47,    20,    20,     3,    19,    19,     3,     3,    19,
       4,    45,     3,     7,    13,    23,     7,    13,    23,     7,
       7,     3,     4,    71,     3,     4,    71,     3,     4,    71,
       3,     4,    71,     3,     4,    71,     3,     4,    71,     3,
       4,    71,     3,     4,    71,     3,     4,    71,     3,     4,
      71,     3,     4,    71,     3,     4,    71,     3,     4,    71,
       3,     4,    71,     3,     4,    71,    19,     3,     4,    71,
       3,     4,    71,     3,     4,    71,     3,     4,    71,     3,
       4,    71,     3,     4,    71,     3,     4,    71,     3,     4,
      71,     3,     4,    71,     3,     4,    71,    72,     7,     3,
       4,    21,    71,     3,     4,    21,    71,     3,     4,    21,
      71,     3,     4,    21,    71,     3,     4,    21,    71,     3,
       4,    21,    71,     3,     4,    21,    71,     3,     4,    21,
      71,     3,     4,    21,    71,     3,     4,    21,    71,     3,
       4,    21,    71,     3,     4,    21,    71,    34,    74,    74,
      19,    19,    30,     7,    22,     7,     7,    22,    19,     3,
       4,    71,    73,     3,    19,     4,    45,     3,    19,    19,
      20,    20,    20,    20,     3,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    63,    39,    84,
      63,     3,    19,     7,    19,    19,     7,     7,     7,    22,
       7,     7,    22,    11,    11,     7,     7,     7,     7,    20,
      20,    20,    20,    20,    20,    20,    20,    20,    20,    20,
      20,    35,    36,    37,    80,    21,    39,    40,    41,    26,
      31,    19,    19,    19,    19,     7,    19,    19,     7,    19,
      19,    63,    21,    63,    82,    21,    69,    19,     3,    19,
      19,    37,    74,    35,    36,    37,    20,    82,    41,    63,
      20,    63,    21,     8,    20,    29,    34,    37,    74,    19,
       8,    20,    69,    19,    34,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    60,    60,    60,    61,    61,    61,
      62,    62,    63,    63,    63,    64,    65,    65,    65,    65,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    69,    69,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    76,
      77,    78,    79,    79,    79,    79,    79,    80,    80,    81,
      81,    81,    81,    82,    82,    82,    82,    83,    83,    84,
      84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     7,     0,    11,    11,     0,     6,     8,
       1,     2,     1,     1,     2,     3,     2,     2,     4,     4,
       3,     0,     4,     3,     6,     5,     7,     6,     4,     3,
       7,     6,     6,     5,     6,     5,     4,     3,     5,     4,
       5,     4,     8,     7,     8,     7,     7,     6,     7,     6,
       7,     6,     7,     6,     4,     2,     2,     0,     4,     4,
       4,     3,     4,     2,     2,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     5,     3,     3,     3,     5,     3,     3,     3,     5,
       3,     3,     3,     5,     3,     3,     3,     5,     3,     3,
       3,     5,     3,     3,     3,     5,     3,     3,     3,     5,
       3,     3,     3,     5,     3,     3,     3,     5,     3,     3,
       3,     5,     3,     3,     3,     5,     3,     3,     1,     8,
      10,     1,     5,     7,     7,     7,     7,     5,     7,     7,
       9,     9,    11,     1,     1,     1,     1,     7,     9,     7,
       8
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 111 "parser.y" /* yacc.c:1646  */
    {if(err==0){fprintf(stdout,"%s\n",(yyvsp[0]));fprintf(stdout, "\nSyntax Correct\n");}else{} }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 112 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6])," "),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1]));}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 115 "parser.y" /* yacc.c:1646  */
    {(yyval)="";}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 116 "parser.y" /* yacc.c:1646  */
    {finput((yyvsp[-9]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-10])," "),(yyvsp[-9])),(yyvsp[-8])),(yyvsp[-7])),(yyvsp[-6])),(yyvsp[-5]))," "),(yyvsp[-4])),";"),"\n"),(yyvsp[-1])),(yyvsp[0]));vTable=(uvar *)0;}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 117 "parser.y" /* yacc.c:1646  */
    {finput((yyvsp[-9]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-10])," "),(yyvsp[-9])),(yyvsp[-8])),(yyvsp[-7])),(yyvsp[-6])),(yyvsp[-5]))," "),(yyvsp[-4])),";"),"\n"),(yyvsp[-1])),(yyvsp[0]));vTable=(uvar *)0;}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 120 "parser.y" /* yacc.c:1646  */
    {(yyval)="";}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 121 "parser.y" /* yacc.c:1646  */
    {uinput( (yyvsp[-4]) ); (yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-5])," "),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));vTable=(uvar *)0; }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 122 "parser.y" /* yacc.c:1646  */
    {if(strcmp((yyvsp[-5]),(yyvsp[-2]))==0){uinput( (yyvsp[-5]) );(yyval)=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-7])," "),(yyvsp[-6]))," "),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2]))," "),(yyvsp[-1])),(yyvsp[0]));  } else {yyerror("Struct names dont match"); err+=1;} vTable=(uvar *)0;}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 125 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 126 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat((yyvsp[-1]),(yyvsp[0]));}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 129 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 130 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 131 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat((yyvsp[-1]),(yyvsp[0]));}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),(yyvsp[-1])),(yyvsp[0]));}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 136 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-1])," "),(yyvsp[0]));}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 137 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-1])," "),(yyvsp[0]));}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-3]),","),(yyvsp[-1]))," "),(yyvsp[0]));}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-3]),","),(yyvsp[-1]))," "),(yyvsp[0]));}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 142 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"\n"),(yyvsp[0]));}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 144 "parser.y" /* yacc.c:1646  */
    {(yyval)="";}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 145 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-2]));(yyval)=strcat(strcat(strcat((yyvsp[-3])," "),(yyvsp[-2])),";\n");}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 146 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-1]));(yyval)=strcat(strcat(strcat((yyvsp[-2])," "),(yyvsp[-1])),";");}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 147 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-5])," "),(yyvsp[-4])),"="),(yyvsp[-2])),";\n");}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 148 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-3]));(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-4])," "),(yyvsp[-3])),"="),(yyvsp[-1])),";\n");}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 149 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-5]));(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-6])," "),(yyvsp[-5])),"["),(yyvsp[-3])),"];\n");}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 150 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-5])," "),(yyvsp[-4])),"["),(yyvsp[-2])),"];");}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 151 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-2]));(yyval)=strcat(strcat(strcat((yyvsp[-3])," "),(yyvsp[-2])),";\n");}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 152 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-1]));(yyval)=strcat(strcat(strcat((yyvsp[-2])," "),(yyvsp[-1])),";");}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 153 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-5]));(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-6])," "),(yyvsp[-5])),"["),(yyvsp[-3])),"];\n");}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 154 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-5])," "),(yyvsp[-4])),"["),(yyvsp[-2])),"];");}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 155 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-5])," "),(yyvsp[-4])),"="),(yyvsp[-2])),";\n");}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 156 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-3]));(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-4])," "),(yyvsp[-3])),"="),(yyvsp[-1])),";\n");}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 157 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-5])," "),(yyvsp[-4])),"="),(yyvsp[-2])),";\n");}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 158 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-3]));(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-4])," "),(yyvsp[-3])),"="),(yyvsp[-1])),";\n");}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 159 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-2]));if(ucheck((yyvsp[-3]))==0){yyerror("No such data type");err+=1;}(yyval)=strcat(strcat(strcat((yyvsp[-3])," "),(yyvsp[-2])),";\n");}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 160 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-1]));if(ucheck((yyvsp[-2]))==0){yyerror("No such data type");err+=1;}(yyval)=strcat(strcat(strcat((yyvsp[-2])," "),(yyvsp[-1])),";");}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 161 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-2]));(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),(yyvsp[-3]))," "),(yyvsp[-2])),";\n");}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 162 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-1]));(yyval)=strcat(strcat(strcat(strcat((yyvsp[-3]),(yyvsp[-2]))," "),(yyvsp[-1])),";");}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 163 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-2]));(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),(yyvsp[-3]))," "),(yyvsp[-2])),";\n");}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 164 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-1]));(yyval)=strcat(strcat(strcat(strcat((yyvsp[-3]),(yyvsp[-2]))," "),(yyvsp[-1])),";");}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 165 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-5]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-7]),(yyvsp[-6]))," "),(yyvsp[-5])),"["),(yyvsp[-3])),"];\n");}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 166 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5]))," "),(yyvsp[-4])),"["),(yyvsp[-2])),"];");}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 167 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-5]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-7]),(yyvsp[-6]))," "),(yyvsp[-5])),"["),(yyvsp[-3])),"];\n");}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 168 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5]))," "),(yyvsp[-4])),"["),(yyvsp[-2])),"];");}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 169 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5]))," "),(yyvsp[-4])),"="),(yyvsp[-2])),";\n");}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 170 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-3]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-5]),(yyvsp[-4]))," "),(yyvsp[-3])),"="),(yyvsp[-1])),";");}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 171 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5]))," "),(yyvsp[-4])),"="),(yyvsp[-2])),";\n");}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 172 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-3]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-5]),(yyvsp[-4]))," "),(yyvsp[-3])),"="),(yyvsp[-1])),";");}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 173 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5]))," "),(yyvsp[-4])),"="),(yyvsp[-2])),";\n");}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 174 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-3]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-5]),(yyvsp[-4]))," "),(yyvsp[-3])),"="),(yyvsp[-1])),";");}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 175 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-4]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5]))," "),(yyvsp[-4])),"="),(yyvsp[-2])),";\n");}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 176 "parser.y" /* yacc.c:1646  */
    {vinput((yyvsp[-3]));(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-5]),(yyvsp[-4]))," "),(yyvsp[-3])),"="),(yyvsp[-1])),";");}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat((yyvsp[-3]),"\n"),(yyvsp[-1])),(yyvsp[0]));}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat((yyvsp[-1]),(yyvsp[0]));}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat((yyvsp[-1]),(yyvsp[0]));}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 185 "parser.y" /* yacc.c:1646  */
    {(yyval)="";}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 186 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-3]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat(strcat((yyvsp[-3]),"="),(yyvsp[-1])),";");}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 187 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-3]))==0 || vcheck((yyvsp[-1]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat(strcat((yyvsp[-3]),"="),(yyvsp[-1])),";");}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 188 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-3]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat(strcat((yyvsp[-3]),"="),(yyvsp[-1])),";");}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 189 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat(strcat((yyvsp[-2]),"="),(yyvsp[0])),"");}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 190 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-3]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat(strcat((yyvsp[-3]),"="),(yyvsp[-1])),";");}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 191 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat((yyvsp[-1]),";");}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 192 "parser.y" /* yacc.c:1646  */
    {if(loop==1){(yyval)=strcat((yyvsp[-1]),";");}else{yyerror("BREAK not in a loop");err+=1;}}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 194 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 195 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 196 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 200 "parser.y" /* yacc.c:1646  */
    {if(fcheck((yyvsp[-3]))==0){yyerror("No such function");err+=1;}(yyval)=strcat(strcat(strcat((yyvsp[-3]),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 201 "parser.y" /* yacc.c:1646  */
    {if(fcheck((yyvsp[-3]))==0){yyerror("No such function");err+=1;}(yyval)=strcat(strcat(strcat((yyvsp[-3]),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 202 "parser.y" /* yacc.c:1646  */
    {if(fcheck((yyvsp[-3]))==0){yyerror("No such function");err+=1;}(yyval)=strcat(strcat(strcat((yyvsp[-3]),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 205 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0 || vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 206 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 207 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 208 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 209 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 210 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 211 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 212 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 214 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 216 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),","),(yyvsp[0]));}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 219 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0 || vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 220 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0 || vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 221 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0 || vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 222 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0 || vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 223 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0 || vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 224 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 227 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 228 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 230 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 238 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 239 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 240 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 241 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 242 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 243 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 244 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 245 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 246 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 247 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 248 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 249 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 250 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 251 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 252 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 253 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 254 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 255 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 256 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 257 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 258 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 259 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 260 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 261 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 262 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 263 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 264 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 265 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 266 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 267 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 268 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 269 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 270 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 271 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 272 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 273 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 274 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"+"),(yyvsp[0]));}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 275 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"-"),(yyvsp[0]));}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 276 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"*"),(yyvsp[0]));}
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 277 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"^"),(yyvsp[0]));}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 278 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"/"),(yyvsp[0]));}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 279 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat((yyvsp[-2]),";\n");}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 280 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat((yyvsp[-1]),";");}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 282 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0 || vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),">"),(yyvsp[0]));}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 283 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),">"),(yyvsp[0]));}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 284 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),">"),(yyvsp[0]));}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 285 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-4]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),">"),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 286 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),">"),(yyvsp[0]));}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 287 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),">"),(yyvsp[0]));}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 288 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),">"),(yyvsp[0]));}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 289 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),">"),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 290 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),">"),(yyvsp[0]));}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 291 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),">"),(yyvsp[0]));}
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 292 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),">"),(yyvsp[0]));}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 293 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),">"),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 294 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0 || vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"<"),(yyvsp[0]));}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 295 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"<"),(yyvsp[0]));}
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 296 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"<"),(yyvsp[0]));}
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 297 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-4]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),"<"),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 298 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"<"),(yyvsp[0]));}
#line 2655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 299 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"<"),(yyvsp[0]));}
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 300 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"<"),(yyvsp[0]));}
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 301 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),"<"),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 302 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"<"),(yyvsp[0]));}
#line 2679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 303 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"<"),(yyvsp[0]));}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 304 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"<"),(yyvsp[0]));}
#line 2691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 305 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),"<"),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 306 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0 || vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"=="),(yyvsp[0]));}
#line 2703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 307 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"=="),(yyvsp[0]));}
#line 2709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 308 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"=="),(yyvsp[0]));}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 309 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-4]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),"=="),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 310 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"=="),(yyvsp[0]));}
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 311 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"=="),(yyvsp[0]));}
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 312 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"=="),(yyvsp[0]));}
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 313 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),"=="),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 314 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"=="),(yyvsp[0]));}
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 315 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"=="),(yyvsp[0]));}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 316 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"=="),(yyvsp[0]));}
#line 2763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 317 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),"=="),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 318 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0 || vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"!="),(yyvsp[0]));}
#line 2775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 319 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"!="),(yyvsp[0]));}
#line 2781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 320 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-2]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"!="),(yyvsp[0]));}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 321 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[-4]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),"!="),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 322 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"!="),(yyvsp[0]));}
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 323 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"!="),(yyvsp[0]));}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 324 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"!="),(yyvsp[0]));}
#line 2811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 325 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),"!="),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 326 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"!="),(yyvsp[0]));}
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 327 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=strcat(strcat((yyvsp[-2]),"!="),(yyvsp[0]));}
#line 2829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 328 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat((yyvsp[-2]),"!="),(yyvsp[0]));}
#line 2835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 329 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),"!="),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 330 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-2])," "),(yyvsp[-1]))," "),(yyvsp[0]));}
#line 2847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 331 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-2])," "),(yyvsp[-1]))," "),(yyvsp[0]));}
#line 2853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 334 "parser.y" /* yacc.c:1646  */
    {loop=1;(yyval)=(yyvsp[0]);}
#line 2859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 336 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-7]),"("),(yyvsp[-5])),")"),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 339 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-9])," "),(yyvsp[-8])),"="),(yyvsp[-6]))," "),(yyvsp[-5]))," "),(yyvsp[-4]))," "),(yyvsp[-3]))," "),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));loop=0;}
#line 2871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 340 "parser.y" /* yacc.c:1646  */
    {loop=1;(yyval)=(yyvsp[0]);}
#line 2877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 344 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),";");}
#line 2883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 345 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5])),(yyvsp[-4])),","),(yyvsp[-2])),");");}
#line 2889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 346 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5])),(yyvsp[-4])),","),(yyvsp[-2])),");");}
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 347 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5])),(yyvsp[-4])),","),(yyvsp[-2])),");");}
#line 2901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 348 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5])),(yyvsp[-4])),","),(yyvsp[-2])),");");}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 352 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat((yyvsp[-4]),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 353 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 356 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 357 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-8]),(yyvsp[-7])),(yyvsp[-6])),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 358 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-8]),(yyvsp[-7])),(yyvsp[-6])),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 359 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-10]),(yyvsp[-9])),(yyvsp[-8])),(yyvsp[-7])),(yyvsp[-6])),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 362 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 363 "parser.y" /* yacc.c:1646  */
    {if(vcheck((yyvsp[0]))==0){yyerror("No such variable");err+=1;}(yyval)=(yyvsp[0]);}
#line 2955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 364 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 365 "parser.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 368 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 369 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-8]),(yyvsp[-7])),(yyvsp[-6])),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 372 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-6]),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 373 "parser.y" /* yacc.c:1646  */
    {(yyval)=strcat(strcat(strcat(strcat(strcat(strcat(strcat((yyvsp[-7]),(yyvsp[-6])),(yyvsp[-5])),(yyvsp[-4])),(yyvsp[-3])),(yyvsp[-2])),(yyvsp[-1])),(yyvsp[0]));}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2995 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 376 "parser.y" /* yacc.c:1906  */
								    
    

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
										
