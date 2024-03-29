/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     arg = 258,
     id = 259,
     email = 260,
     url = 261,
     sep = 262,
     texto = 263,
     codigo = 264,
     carater = 265,
     inteiro = 266,
     linha = 267,
     BTITLE = 268,
     BSTITLE = 269,
     BAUTHOR = 270,
     BURL = 271,
     BAFFIL = 272,
     BEMAIL = 273,
     BDATE = 274,
     BINST = 275,
     BKEY = 276,
     BABS = 277,
     BAKNOW = 278,
     BINDICE = 279,
     BSUMMARY = 280,
     BBOLD = 281,
     BPARAG = 282,
     BREF = 283,
     BCODE = 284,
     BIterm = 285,
     BFoteN = 286,
     BLineCode = 287,
     BUNDERLINE = 288,
     BAcronym = 289,
     BITALIC = 290,
     BXREF = 291,
     BHREF = 292,
     BCiteR = 293,
     BCHAP = 294,
     BSEC = 295,
     BFIG = 296,
     BImg = 297,
     BENUM = 298,
     BCAP = 299,
     BLINHA = 300,
     BITEM = 301,
     BTAB = 302,
     BCEL = 303,
     BITEMIZE = 304,
     IFIGURE = 305,
     ITABLE = 306,
     ENDCOD = 307
   };
#endif
/* Tokens.  */
#define arg 258
#define id 259
#define email 260
#define url 261
#define sep 262
#define texto 263
#define codigo 264
#define carater 265
#define inteiro 266
#define linha 267
#define BTITLE 268
#define BSTITLE 269
#define BAUTHOR 270
#define BURL 271
#define BAFFIL 272
#define BEMAIL 273
#define BDATE 274
#define BINST 275
#define BKEY 276
#define BABS 277
#define BAKNOW 278
#define BINDICE 279
#define BSUMMARY 280
#define BBOLD 281
#define BPARAG 282
#define BREF 283
#define BCODE 284
#define BIterm 285
#define BFoteN 286
#define BLineCode 287
#define BUNDERLINE 288
#define BAcronym 289
#define BITALIC 290
#define BXREF 291
#define BHREF 292
#define BCiteR 293
#define BCHAP 294
#define BSEC 295
#define BFIG 296
#define BImg 297
#define BENUM 298
#define BCAP 299
#define BLINHA 300
#define BITEM 301
#define BTAB 302
#define BCEL 303
#define BITEMIZE 304
#define IFIGURE 305
#define ITABLE 306
#define ENDCOD 307




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

#include <stdio.h>
#include <string.h>
#include "preprocessador.h"


//VARIAVEIS GLOBAIS
Report report;
Autor autor;
Image image;
Table table;
Row row;
Cell cell;
int seccao;
int count_foot;
int zona;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 30 "yacc.y"
{
	char* valS;
	char valC; 
	int valI;
}
/* Line 193 of yacc.c.  */
#line 224 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 237 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   265

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNRULES -- Number of states.  */
#define YYNSTATES  278

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    53,     2,     2,     2,
      54,    55,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    18,    19,    24,    29,    30,    33,
      35,    41,    43,    45,    48,    50,    53,    55,    58,    60,
      62,    63,    66,    69,    72,    75,    79,    84,    85,    90,
      91,    95,    97,    99,   102,   104,   109,   110,   112,   115,
     117,   119,   122,   124,   127,   129,   131,   132,   136,   141,
     146,   149,   150,   153,   155,   160,   165,   168,   170,   172,
     174,   176,   178,   180,   184,   189,   194,   196,   201,   203,
     206,   209,   210,   212,   214,   216,   218,   220,   222,   224,
     226,   228,   230,   232,   239,   246,   251,   256,   261,   266,
     271,   276,   281,   283,   286,   289,   292,   293,   298,   300,
     303,   306,   309,   310,   315,   317,   320,   323,   326,   327,
     329,   331,   337,   339,   344,   346,   351,   353,   355,   360,
     362,   365,   368,   371,   372,   377,   379,   382,   385,   388,
     389,   394,   396,   402,   407,   409,   412,   414,   419,   421,
     424,   426,   434,   436,   440,   442,   444,   446,   447
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      59,     0,    -1,    60,    93,    53,    -1,    61,    62,    63,
      64,    76,    77,    78,    81,    83,    86,    -1,    -1,    13,
      54,     3,    55,    -1,    14,    54,     3,    55,    -1,    -1,
      64,    65,    -1,    65,    -1,    66,    54,    67,    68,    55,
      -1,    15,    -1,     3,    -1,    72,    69,    -1,    69,    -1,
      73,    70,    -1,    70,    -1,    74,    71,    -1,    71,    -1,
      75,    -1,    -1,     7,     4,    -1,     7,     5,    -1,     7,
       6,    -1,     7,     3,    -1,    19,    54,    55,    -1,    20,
      54,     3,    55,    -1,    -1,    21,    54,    79,    55,    -1,
      -1,    79,     7,    80,    -1,    80,    -1,     3,    -1,    82,
      85,    -1,    22,    -1,    84,    56,    85,    57,    -1,    -1,
      23,    -1,    85,   104,    -1,   104,    -1,    87,    -1,    90,
      88,    -1,    88,    -1,    91,    89,    -1,    89,    -1,    92,
      -1,    -1,    24,    54,    55,    -1,    24,    54,    50,    55,
      -1,    24,    54,    51,    55,    -1,    94,    95,    -1,    -1,
      95,    96,    -1,    96,    -1,    97,    56,    98,    57,    -1,
      39,    54,     3,    55,    -1,    98,    99,    -1,    99,    -1,
     100,    -1,   104,    -1,   101,    -1,   125,    -1,   131,    -1,
      29,     9,    52,    -1,   102,    56,    98,    57,    -1,   103,
      54,     3,    55,    -1,    40,    -1,   105,    56,   106,    57,
      -1,    27,    -1,   106,     8,    -1,   106,   107,    -1,    -1,
     113,    -1,   108,    -1,   110,    -1,   111,    -1,   109,    -1,
     112,    -1,   116,    -1,   119,    -1,   122,    -1,   114,    -1,
     115,    -1,    28,    54,     8,     7,     8,    55,    -1,    37,
      54,     8,     7,     6,    55,    -1,    36,    54,     8,    55,
      -1,    38,    54,     8,    55,    -1,    30,    54,     8,    55,
      -1,    31,    54,     8,    55,    -1,    32,    54,    12,    55,
      -1,    34,    54,     8,    55,    -1,   117,    56,   118,    57,
      -1,    26,    -1,   118,     8,    -1,   118,   119,    -1,   118,
     122,    -1,    -1,   120,    56,   121,    57,    -1,    35,    -1,
     121,     8,    -1,   121,   116,    -1,   121,   122,    -1,    -1,
     123,    56,   124,    57,    -1,    33,    -1,   124,     8,    -1,
     124,   116,    -1,   124,   119,    -1,    -1,   126,    -1,   140,
      -1,   127,    56,   128,   130,    57,    -1,    41,    -1,    42,
      56,   129,    57,    -1,     8,    -1,    44,    56,     3,    57,
      -1,   132,    -1,   135,    -1,   133,    56,   134,    57,    -1,
      43,    -1,   134,   138,    -1,   134,   135,    -1,   134,   132,
      -1,    -1,   136,    56,   137,    57,    -1,    49,    -1,   137,
     138,    -1,   137,   132,    -1,   137,   135,    -1,    -1,   139,
      56,   106,    57,    -1,    46,    -1,   142,    56,   141,   143,
      57,    -1,    44,    54,     3,    55,    -1,    47,    -1,   143,
     144,    -1,   144,    -1,   145,    56,   146,    57,    -1,    45,
      -1,   146,   147,    -1,   147,    -1,   148,    54,   149,    55,
      56,     8,    57,    -1,    48,    -1,   150,     7,   151,    -1,
     151,    -1,    10,    -1,   152,    -1,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    42,    44,    46,    48,    49,    52,    53,
      56,    58,    60,    63,    64,    67,    68,    71,    72,    75,
      76,    79,    81,    83,    85,    87,    89,    90,    93,    94,
      97,    98,   101,   103,   105,   107,   108,   111,   113,   114,
     117,   119,   120,   124,   125,   127,   128,   133,   134,   135,
     140,   142,   144,   145,   148,   152,   154,   155,   158,   159,
     160,   161,   162,   165,   167,   169,   171,   173,   175,   177,
     178,   179,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   196,   198,   200,   202,   204,   206,   208,
     210,   212,   214,   216,   217,   218,   219,   222,   224,   226,
     227,   228,   229,   232,   234,   236,   237,   238,   239,   243,
     244,   248,   250,   253,   255,   257,   261,   262,   265,   267,
     268,   269,   270,   271,   275,   277,   279,   280,   281,   282,
     285,   287,   293,   295,   297,   300,   301,   304,   307,   309,
     310,   313,   315,   317,   318,   320,   322,   323,   326
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "arg", "id", "email", "url", "sep",
  "texto", "codigo", "carater", "inteiro", "linha", "BTITLE", "BSTITLE",
  "BAUTHOR", "BURL", "BAFFIL", "BEMAIL", "BDATE", "BINST", "BKEY", "BABS",
  "BAKNOW", "BINDICE", "BSUMMARY", "BBOLD", "BPARAG", "BREF", "BCODE",
  "BIterm", "BFoteN", "BLineCode", "BUNDERLINE", "BAcronym", "BITALIC",
  "BXREF", "BHREF", "BCiteR", "BCHAP", "BSEC", "BFIG", "BImg", "BENUM",
  "BCAP", "BLINHA", "BITEM", "BTAB", "BCEL", "BITEMIZE", "IFIGURE",
  "ITABLE", "ENDCOD", "'$'", "'('", "')'", "'{'", "'}'", "$accept",
  "Report", "FrontMatter", "BFMatter", "Title", "STitle", "Authores",
  "Author", "Bauthor", "Nome", "OPT_Author", "OPT_A_UM", "OPT_A_Dois",
  "OPT_A_Tres", "Nident", "Email", "Url", "Affiliation", "Date",
  "Institution", "Keywords", "Keys", "Key", "Abstract", "BAbs",
  "Aknowledgements", "BAknow", "ParaList", "Indice", "Toc", "Lof", "Lot",
  "BToc", "BLof", "BLot", "Body", "BBody", "ChapterList", "Chapter",
  "C_Title", "ElemList", "Elem", "CodeBlock", "Section", "S_Title", "BSec",
  "Paragraph", "BParag", "ParaContend", "FreeElem", "Ref", "Href", "Xref",
  "CitRef", "Iterm", "FootNote", "InlineCode", "Acronym", "Bold", "Bbold",
  "BCont", "Italic", "BItalic", "ICont", "Underline", "BUnderLine",
  "UCont", "Float", "Figure", "BFig", "Image", "Path", "Caption", "List",
  "Enumerate", "BEnum", "C_ENUM", "Itemize", "BItemize", "C_Item", "Item",
  "BItem", "Table", "T_Caption", "BTab", "C_Tabela", "Linha", "BLinha",
  "Celulas", "Cel", "BCel", "OPT_Cel", "POS", "OPT_Cel_um", "Dim", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    36,    40,    41,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    61,    62,    63,    63,    64,    64,
      65,    66,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    73,    74,    75,    76,    77,    77,    78,    78,
      79,    79,    80,    81,    82,    83,    83,    84,    85,    85,
      86,    87,    87,    88,    88,    89,    89,    90,    91,    92,
      93,    94,    95,    95,    96,    97,    98,    98,    99,    99,
      99,    99,    99,   100,   101,   102,   103,   104,   105,   106,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   118,   118,   118,   119,   120,   121,
     121,   121,   121,   122,   123,   124,   124,   124,   124,   125,
     125,   126,   127,   128,   129,   130,   131,   131,   132,   133,
     134,   134,   134,   134,   135,   136,   137,   137,   137,   137,
     138,   139,   140,   141,   142,   143,   143,   144,   145,   146,
     146,   147,   148,   149,   149,   150,   151,   151,   152
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,    10,     0,     4,     4,     0,     2,     1,
       5,     1,     1,     2,     1,     2,     1,     2,     1,     1,
       0,     2,     2,     2,     2,     3,     4,     0,     4,     0,
       3,     1,     1,     2,     1,     4,     0,     1,     2,     1,
       1,     2,     1,     2,     1,     1,     0,     3,     4,     4,
       2,     0,     2,     1,     4,     4,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     1,     4,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     6,     4,     4,     4,     4,     4,
       4,     4,     1,     2,     2,     2,     0,     4,     1,     2,
       2,     2,     0,     4,     1,     2,     2,     2,     0,     1,
       1,     5,     1,     4,     1,     4,     1,     1,     4,     1,
       2,     2,     2,     0,     4,     1,     2,     2,     2,     0,
       4,     1,     5,     4,     1,     2,     1,     4,     1,     2,
       1,     7,     1,     3,     1,     1,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,    51,     0,     1,     0,     0,     0,     7,     2,
       0,    50,    53,     0,     0,     0,     0,     0,    52,     0,
       0,     0,    11,     0,     9,     0,     0,    68,     0,    66,
     112,   119,   134,   125,     0,    57,    58,    60,     0,     0,
      59,     0,    61,   109,     0,    62,   116,     0,   117,     0,
     110,     0,     5,     0,     0,     8,    27,     0,    55,     0,
      54,    56,     0,     0,    71,     0,   123,   129,     0,     6,
       0,     0,    29,    12,    20,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,    14,    16,    18,    20,    20,    20,    19,    64,    65,
      69,    92,     0,     0,     0,     0,   104,     0,    98,     0,
       0,     0,    67,    70,    73,    76,    74,    75,    77,    72,
      81,    82,    78,     0,    79,     0,    80,     0,     0,     0,
       0,   131,   118,   122,   121,   120,     0,   124,   127,   128,
     126,     0,   138,     0,   136,     0,     0,     0,    34,    36,
       0,    24,    21,    22,    23,    10,     0,    13,     0,    15,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
      96,   102,   108,   114,     0,     0,   111,    71,     0,   132,
     135,     0,    26,    32,     0,    31,    37,    46,     0,    33,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,   133,   142,     0,   140,     0,
       0,    28,     0,     3,    40,    42,    44,    46,    46,    45,
       0,    38,     0,    87,    88,    89,    90,    85,     0,    86,
      93,    91,    94,    95,    99,    97,   100,   101,   105,   103,
     106,   107,   115,   130,   137,   139,   147,    30,     0,     0,
      41,     0,    43,     0,     0,     0,   145,   148,     0,     0,
     144,   146,     0,     0,    47,     0,     0,    35,    83,    84,
       0,   147,    48,    49,     0,   143,     0,   141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     8,    16,    23,    24,    25,    74,
      90,    91,    92,    93,    94,    95,    96,    97,    56,    72,
      88,   184,   185,   149,   150,   187,   188,   189,   213,   214,
     215,   216,   217,   218,   219,     5,     6,    11,    12,    13,
      34,    35,    36,    37,    38,    39,    40,    41,    78,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     199,   124,   125,   200,   126,   127,   201,    42,    43,    44,
      80,   174,   130,    45,    46,    47,    81,    48,    49,    82,
     135,   136,    50,    84,    51,   143,   144,   145,   207,   208,
     209,   258,   259,   260,   261
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -187
static const yytype_int16 yypact[] =
{
    -187,    14,  -187,    24,  -187,    30,    50,    32,    91,  -187,
      54,    50,  -187,    56,   111,    67,   105,   119,  -187,    66,
      68,   121,  -187,    46,  -187,    71,    72,  -187,   117,  -187,
    -187,  -187,  -187,  -187,    28,  -187,  -187,  -187,    73,    74,
    -187,    76,  -187,  -187,    77,  -187,  -187,    78,  -187,    79,
    -187,    80,  -187,    82,    84,  -187,   110,   128,  -187,    87,
    -187,  -187,    66,   137,  -187,    99,  -187,  -187,    98,  -187,
      88,    90,   124,  -187,   139,  -187,    47,    92,    -7,    93,
     104,   -41,   -40,    96,   106,  -187,   149,   100,   131,    94,
     101,  -187,  -187,  -187,   148,   150,   151,  -187,  -187,  -187,
    -187,  -187,   107,   108,   109,   112,  -187,   113,  -187,   114,
     115,   116,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,   103,  -187,   118,  -187,   120,   152,   122,
     123,  -187,  -187,  -187,  -187,  -187,   125,  -187,  -187,  -187,
    -187,   161,  -187,   -35,  -187,   126,   129,   162,  -187,   154,
     144,  -187,  -187,  -187,  -187,  -187,    75,  -187,    60,  -187,
     169,  -187,   165,   167,   171,   173,   175,   178,   179,   180,
    -187,  -187,  -187,  -187,   132,   187,  -187,  -187,   136,  -187,
    -187,   145,  -187,  -187,    -3,  -187,  -187,   168,   138,   144,
    -187,   188,   141,   142,   143,   146,   147,   192,   153,    -1,
      25,    27,  -187,   155,    10,  -187,  -187,   -37,  -187,   156,
     162,  -187,   157,  -187,  -187,  -187,  -187,   176,   181,  -187,
     144,  -187,   195,  -187,  -187,  -187,  -187,  -187,   198,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,    62,  -187,     9,   159,
    -187,   160,  -187,    22,   163,   164,  -187,  -187,   166,   199,
    -187,  -187,   170,   172,  -187,    41,   158,  -187,  -187,  -187,
     174,   196,  -187,  -187,   207,  -187,   177,  -187
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -187,  -187,  -187,  -187,  -187,  -187,   193,  -187,  -187,
    -187,   130,   127,   133,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,     7,  -187,  -187,  -187,  -187,     0,  -187,  -187,
       6,     8,  -187,  -187,  -187,  -187,  -187,  -187,   217,  -187,
     182,   -22,  -187,  -187,  -187,  -187,  -150,  -187,    55,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,   -99,  -187,
    -187,  -186,  -187,  -187,   -89,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,    35,  -187,  -187,    37,  -187,  -187,
     183,  -187,  -187,  -187,  -187,  -187,    95,  -187,  -187,    26,
    -187,  -187,  -187,   -36,  -187
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     190,   100,    31,    31,   210,   131,   131,   230,    33,    33,
     142,   206,    61,   232,     4,   241,   132,   137,   100,   101,
     244,   102,   179,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   106,   234,   108,   238,   101,     7,   102,   221,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    27,
     112,   101,   211,   101,    61,    27,   231,    28,   106,   262,
     263,    22,   108,   151,   264,    54,   154,   243,    29,    30,
     190,    31,   256,   257,    27,    32,    28,    33,   151,   267,
     153,   154,   235,     9,   239,    60,    14,    29,    30,    10,
      31,   262,   263,    27,    32,    28,    33,   151,   152,   153,
     154,   236,   240,   221,    98,    15,    29,    30,    17,    31,
     233,   237,    19,    32,    20,    33,   133,   138,   134,   139,
      22,    21,    26,    52,    53,    57,    59,    58,    63,    62,
      71,    73,    64,    65,    66,    67,    68,    69,    70,    75,
      77,    79,    83,    85,    86,    87,    89,    99,   129,   128,
     141,   142,   146,   148,   147,   156,   155,   158,   160,   170,
     173,   162,   163,   164,   178,   183,   165,   166,   167,   168,
     169,    27,   151,   191,   171,   192,   172,   186,   175,   193,
     176,   177,   181,   195,   182,   194,   196,   197,   198,   202,
     203,   205,   212,   206,   220,   222,   223,   224,   225,   228,
     249,   226,   227,   254,   255,   251,   271,   257,   229,   263,
     246,   248,   242,   265,   266,   276,    55,   247,   268,   269,
     253,   270,   159,   250,   157,   272,   252,   273,    18,   161,
     274,     0,   204,   245,   277,   275,     0,     0,   180,     0,
       0,     0,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140
};

static const yytype_int16 yycheck[] =
{
     150,     8,    43,    43,     7,    46,    46,     8,    49,    49,
      45,    48,    34,   199,     0,   201,    57,    57,     8,    26,
      57,    28,    57,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    33,     8,    35,     8,    26,    13,    28,   189,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    27,
      57,    26,    55,    26,    76,    27,    57,    29,    33,    50,
      51,    15,    35,     3,    55,    19,     6,    57,    40,    41,
     220,    43,    10,    11,    27,    47,    29,    49,     3,    57,
       5,     6,    57,    53,    57,    57,    54,    40,    41,    39,
      43,    50,    51,    27,    47,    29,    49,     3,     4,     5,
       6,   200,   201,   253,    57,    14,    40,    41,    54,    43,
     199,   200,    56,    47,     3,    49,    81,    82,    81,    82,
      15,    54,     3,    55,     3,    54,     9,    55,    54,    56,
      20,     3,    56,    56,    56,    56,    56,    55,    54,    52,
       3,    42,    44,    55,    54,    21,     7,    55,    44,    56,
      54,    45,     3,    22,    54,     7,    55,     7,     7,    56,
       8,    54,    54,    54,     3,     3,    54,    54,    54,    54,
      54,    27,     3,     8,    56,     8,    56,    23,    56,     8,
      57,    56,    56,     8,    55,    12,     8,     8,     8,    57,
       3,    55,    24,    48,    56,     7,    55,    55,    55,     7,
      24,    55,    55,     8,     6,    24,     7,    11,    55,    51,
      54,    54,    57,    54,    54,     8,    23,   210,    55,    55,
     220,    55,    95,   217,    94,    55,   218,    55,    11,    96,
      56,    -1,   177,   207,    57,   271,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,    60,    61,     0,    93,    94,    13,    62,    53,
      39,    95,    96,    97,    54,    14,    63,    54,    96,    56,
       3,    54,    15,    64,    65,    66,     3,    27,    29,    40,
      41,    43,    47,    49,    98,    99,   100,   101,   102,   103,
     104,   105,   125,   126,   127,   131,   132,   133,   135,   136,
     140,   142,    55,     3,    19,    65,    76,    54,    55,     9,
      57,    99,    56,    54,    56,    56,    56,    56,    56,    55,
      54,    20,    77,     3,    67,    52,    98,     3,   106,    42,
     128,   134,   137,    44,   141,    55,    54,    21,    78,     7,
      68,    69,    70,    71,    72,    73,    74,    75,    57,    55,
       8,    26,    28,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    57,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   119,   120,   122,   123,    56,    44,
     130,    46,    57,   132,   135,   138,   139,    57,   132,   135,
     138,    54,    45,   143,   144,   145,     3,    54,    22,    81,
      82,     3,     4,     5,     6,    55,     7,    69,     7,    70,
       7,    71,    54,    54,    54,    54,    54,    54,    54,    54,
      56,    56,    56,     8,   129,    56,    57,    56,     3,    57,
     144,    56,    55,     3,    79,    80,    23,    83,    84,    85,
     104,     8,     8,     8,    12,     8,     8,     8,     8,   118,
     121,   124,    57,     3,   106,    55,    48,   146,   147,   148,
       7,    55,    24,    86,    87,    88,    89,    90,    91,    92,
      56,   104,     7,    55,    55,    55,    55,    55,     7,    55,
       8,    57,   119,   122,     8,    57,   116,   122,     8,    57,
     116,   119,    57,    57,    57,   147,    54,    80,    54,    24,
      88,    24,    89,    85,     8,     6,    10,    11,   149,   150,
     151,   152,    50,    51,    55,    54,    54,    57,    55,    55,
      55,     7,    55,    55,    56,   151,     8,    57
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 40 "yacc.y"
    {return 0;}
    break;

  case 4:
#line 44 "yacc.y"
    {zona=FRONTMATTER;}
    break;

  case 5:
#line 46 "yacc.y"
    {addTitulo(&report, (yyvsp[(3) - (4)].valS));}
    break;

  case 6:
#line 48 "yacc.y"
    {addSTitulo(&report, (yyvsp[(3) - (4)].valS));}
    break;

  case 8:
#line 52 "yacc.y"
    {addAutor(&report,&autor);}
    break;

  case 9:
#line 53 "yacc.y"
    {addAutor(&report,&autor);}
    break;

  case 11:
#line 58 "yacc.y"
    {autor = init_Autor();}
    break;

  case 12:
#line 60 "yacc.y"
    {autor.anome = (yyvsp[(1) - (1)].valS);}
    break;

  case 21:
#line 79 "yacc.y"
    {autor.aid = (yyvsp[(2) - (2)].valS);}
    break;

  case 22:
#line 81 "yacc.y"
    {autor.aemail = (yyvsp[(2) - (2)].valS);}
    break;

  case 23:
#line 83 "yacc.y"
    {autor.aurl = (yyvsp[(2) - (2)].valS);}
    break;

  case 24:
#line 85 "yacc.y"
    {autor.aaffil = (yyvsp[(2) - (2)].valS);}
    break;

  case 25:
#line 87 "yacc.y"
    {report.data = 1;}
    break;

  case 26:
#line 89 "yacc.y"
    {report.inst = strdup((yyvsp[(3) - (4)].valS));}
    break;

  case 32:
#line 101 "yacc.y"
    {addKey(&report,(yyvsp[(1) - (1)].valS));}
    break;

  case 33:
#line 103 "yacc.y"
    {fechoResumo(&report);}
    break;

  case 34:
#line 105 "yacc.y"
    {addResumo(&report);}
    break;

  case 35:
#line 107 "yacc.y"
    {printf("Agradecimentos\n");fechoAgradecimentos(&report);}
    break;

  case 37:
#line 111 "yacc.y"
    {addAgradecimentos(&report);}
    break;

  case 47:
#line 133 "yacc.y"
    {printf("Indice\n"); report.indice = 1;}
    break;

  case 48:
#line 134 "yacc.y"
    {printf("Figuras \n");report.indice_fig = 1;}
    break;

  case 49:
#line 135 "yacc.y"
    {printf("Tabelas\n"); report.indice_tab = 1;}
    break;

  case 51:
#line 142 "yacc.y"
    {zona = BODY;}
    break;

  case 55:
#line 152 "yacc.y"
    {printf("Capitulo\n"); addCapitulo(&report,(yyvsp[(3) - (4)].valS));}
    break;

  case 63:
#line 165 "yacc.y"
    {addTextoNF(&report,strdup((yyvsp[(2) - (3)].valS)));}
    break;

  case 65:
#line 169 "yacc.y"
    {printf("Secção\n");addSeccao(&report,strdup((yyvsp[(3) - (4)].valS)),seccao);}
    break;

  case 66:
#line 171 "yacc.y"
    {seccao = yylval.valI;}
    break;

  case 67:
#line 173 "yacc.y"
    {fechoParagrafo(&report,zona);}
    break;

  case 68:
#line 175 "yacc.y"
    {addParagrafo(&report,zona);}
    break;

  case 69:
#line 177 "yacc.y"
    {addTexto(&report,(yyvsp[(2) - (2)].valS),zona);}
    break;

  case 83:
#line 196 "yacc.y"
    {addRef(&report,(yyvsp[(3) - (6)].valS),(yyvsp[(5) - (6)].valS),zona);}
    break;

  case 84:
#line 198 "yacc.y"
    {}
    break;

  case 85:
#line 200 "yacc.y"
    {}
    break;

  case 86:
#line 202 "yacc.y"
    {}
    break;

  case 87:
#line 204 "yacc.y"
    {}
    break;

  case 88:
#line 206 "yacc.y"
    {count_foot++; addFoteNote(&report,(yyvsp[(3) - (4)].valS),count_foot,zona);}
    break;

  case 89:
#line 208 "yacc.y"
    {addCodLinha(&report,(yyvsp[(3) - (4)].valS),zona);}
    break;

  case 91:
#line 212 "yacc.y"
    {fechoTag(&report,"</b>",zona);}
    break;

  case 92:
#line 214 "yacc.y"
    {addNegTag(&report,zona);}
    break;

  case 93:
#line 216 "yacc.y"
    {addTexto(&report,(yyvsp[(2) - (2)].valS),zona);}
    break;

  case 97:
#line 222 "yacc.y"
    {fechoTag(&report,"</i>",zona);}
    break;

  case 98:
#line 224 "yacc.y"
    {addItTag(&report,zona);}
    break;

  case 99:
#line 226 "yacc.y"
    {addTexto(&report,(yyvsp[(2) - (2)].valS),zona);}
    break;

  case 100:
#line 227 "yacc.y"
    {}
    break;

  case 101:
#line 228 "yacc.y"
    {}
    break;

  case 103:
#line 232 "yacc.y"
    {fechoTag(&report,"</b>",zona);}
    break;

  case 104:
#line 234 "yacc.y"
    {addUnderTag(&report,zona);}
    break;

  case 105:
#line 236 "yacc.y"
    {addTexto(&report,(yyvsp[(2) - (2)].valS),zona);}
    break;

  case 109:
#line 243 "yacc.y"
    {addImagem(&report,&image);}
    break;

  case 112:
#line 250 "yacc.y"
    {image = init_Image();}
    break;

  case 114:
#line 255 "yacc.y"
    {image.path = (yyvsp[(1) - (1)].valS);}
    break;

  case 115:
#line 257 "yacc.y"
    {image.caption = (yyvsp[(3) - (4)].valS);}
    break;

  case 118:
#line 265 "yacc.y"
    {fechaOrdList(&report);}
    break;

  case 119:
#line 267 "yacc.y"
    {addOrdList(&report);}
    break;

  case 124:
#line 275 "yacc.y"
    {fechaItemList(&report);}
    break;

  case 125:
#line 277 "yacc.y"
    {addItemList(&report);}
    break;

  case 130:
#line 285 "yacc.y"
    {fechaItem(&report);}
    break;

  case 131:
#line 287 "yacc.y"
    {addItem(&report);}
    break;

  case 132:
#line 293 "yacc.y"
    {addTabela(&report,&table);}
    break;

  case 133:
#line 295 "yacc.y"
    {table.caption = (yyvsp[(3) - (4)].valS);}
    break;

  case 134:
#line 297 "yacc.y"
    {table = init_Table();}
    break;

  case 135:
#line 300 "yacc.y"
    {addLinha(&table,&row);}
    break;

  case 136:
#line 301 "yacc.y"
    {addLinha(&table,&row);}
    break;

  case 138:
#line 307 "yacc.y"
    {row = init_Row();}
    break;

  case 139:
#line 309 "yacc.y"
    {addCelula(&row,&cell);}
    break;

  case 140:
#line 310 "yacc.y"
    {addCelula(&row,&cell);}
    break;

  case 141:
#line 313 "yacc.y"
    {cell.cell = (yyvsp[(6) - (7)].valS);}
    break;

  case 142:
#line 315 "yacc.y"
    {init_Cell();}
    break;

  case 145:
#line 320 "yacc.y"
    {printf("POS"); cell.pos = (yyvsp[(1) - (1)].valC);}
    break;

  case 148:
#line 326 "yacc.y"
    {cell.dim = (yyvsp[(1) - (1)].valI);}
    break;


/* Line 1267 of yacc.c.  */
#line 2047 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 330 "yacc.y"



int yyerror( char *s )
{
  fprintf(stderr, "%s", s);
}

int main()
{	

	//INICIALIZAÇÕES
	report = init_Report();
	count_foot=0;

	int yyres = yyparse();
  	printf("YYRES: %d\n",yyres);
  	
  	geraHTML(&report,NULL);
  	geraLATEX(&report,NULL);

  	return 0;
}




