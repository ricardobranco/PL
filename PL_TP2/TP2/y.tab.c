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
     BTITLE = 267,
     BSTITLE = 268,
     BAUTHOR = 269,
     BURL = 270,
     BAFFIL = 271,
     BEMAIL = 272,
     BDATE = 273,
     BINST = 274,
     BKEY = 275,
     BABS = 276,
     BAKNOW = 277,
     BINDICE = 278,
     BSUMMARY = 279,
     BBOLD = 280,
     BParag = 281,
     BREF = 282,
     BCODE = 283,
     BIterm = 284,
     BFoteN = 285,
     BLineCode = 286,
     BUnderLine = 287,
     BAcronym = 288,
     BItalic = 289,
     BXREF = 290,
     BHREF = 291,
     BCiteR = 292,
     BCHAP = 293,
     BSEC = 294,
     BFig = 295,
     BImg = 296,
     BENUM = 297,
     BCAP = 298,
     BLinha = 299,
     BItem = 300,
     BTAB = 301,
     BCel = 302,
     BItemize = 303,
     IFIGURE = 304,
     ITABLE = 305
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
#define BTITLE 267
#define BSTITLE 268
#define BAUTHOR 269
#define BURL 270
#define BAFFIL 271
#define BEMAIL 272
#define BDATE 273
#define BINST 274
#define BKEY 275
#define BABS 276
#define BAKNOW 277
#define BINDICE 278
#define BSUMMARY 279
#define BBOLD 280
#define BParag 281
#define BREF 282
#define BCODE 283
#define BIterm 284
#define BFoteN 285
#define BLineCode 286
#define BUnderLine 287
#define BAcronym 288
#define BItalic 289
#define BXREF 290
#define BHREF 291
#define BCiteR 292
#define BCHAP 293
#define BSEC 294
#define BFig 295
#define BImg 296
#define BENUM 297
#define BCAP 298
#define BLinha 299
#define BItem 300
#define BTAB 301
#define BCel 302
#define BItemize 303
#define IFIGURE 304
#define ITABLE 305




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

#include <stdio.h>
#include <string.h>
#include "preprocessador.h"


//VARIAVEIS GLOBAIS
Report report;
Autor autor;
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
#line 23 "yacc.y"
{
	char* valS;
	int valI;
}
/* Line 193 of yacc.c.  */
#line 213 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 226 "y.tab.c"

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
#define YYLAST   272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  262

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    51,     2,     2,     2,
      52,    53,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    18,    19,    24,    29,    30,    33,
      35,    41,    43,    45,    48,    50,    53,    55,    58,    60,
      62,    63,    66,    69,    72,    75,    79,    84,    85,    90,
      91,    95,    97,    99,   104,   109,   110,   113,   115,   117,
     122,   124,   130,   132,   137,   138,   140,   143,   145,   150,
     155,   158,   160,   162,   164,   166,   168,   170,   172,   177,
     182,   187,   192,   195,   198,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   221,   226,   233,   240,
     245,   250,   255,   260,   265,   270,   275,   278,   281,   284,
     285,   290,   293,   296,   299,   300,   305,   308,   311,   314,
     315,   317,   319,   325,   330,   332,   337,   339,   341,   346,
     349,   352,   353,   358,   361,   364,   365,   370,   376,   379,
     381,   386,   389,   391,   399,   403,   405,   407,   409,   410
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      57,     0,    -1,    58,    86,    51,    -1,    59,    60,    61,
      62,    74,    75,    76,    79,    80,    82,    -1,    -1,    12,
      52,     3,    53,    -1,    13,    52,     3,    53,    -1,    -1,
      62,    63,    -1,    63,    -1,    64,    52,    65,    66,    53,
      -1,    14,    -1,     3,    -1,    70,    67,    -1,    67,    -1,
      71,    68,    -1,    68,    -1,    72,    69,    -1,    69,    -1,
      73,    -1,    -1,     7,     4,    -1,     7,     5,    -1,     7,
       6,    -1,     7,     3,    -1,    18,    52,    53,    -1,    19,
      52,     3,    53,    -1,    -1,    20,    52,    77,    53,    -1,
      -1,    77,     7,    78,    -1,    78,    -1,     3,    -1,    21,
      54,    81,    55,    -1,    22,    54,    81,    55,    -1,    -1,
      81,    95,    -1,    95,    -1,    83,    -1,    23,    52,    53,
      84,    -1,    84,    -1,    23,    52,    49,    53,    85,    -1,
      85,    -1,    23,    52,    50,    53,    -1,    -1,    87,    -1,
      87,    88,    -1,    88,    -1,    89,    54,    90,    55,    -1,
      38,    52,     8,    53,    -1,    90,    91,    -1,    91,    -1,
      92,    -1,    95,    -1,    93,    -1,    98,    -1,   113,    -1,
     118,    -1,    28,    54,     9,    55,    -1,    94,    54,    90,
      55,    -1,    39,    52,     8,    53,    -1,    26,    54,    96,
      55,    -1,    96,     8,    -1,    96,    97,    -1,    -1,   104,
      -1,    99,    -1,   101,    -1,   102,    -1,   100,    -1,   103,
      -1,   107,    -1,   109,    -1,   111,    -1,   105,    -1,   106,
      -1,    24,    52,     8,    53,    -1,    27,    52,     8,     7,
       8,    53,    -1,    36,    52,     8,     7,     6,    53,    -1,
      35,    52,     8,    53,    -1,    37,    52,     8,    53,    -1,
      29,    52,     8,    53,    -1,    30,    52,     8,    53,    -1,
      31,    52,     8,    53,    -1,    33,    52,     8,    53,    -1,
      25,    52,   108,    53,    -1,   108,     8,    -1,   108,   109,
      -1,   108,   111,    -1,    -1,    34,    52,   110,    53,    -1,
     110,     8,    -1,   110,   107,    -1,   110,   111,    -1,    -1,
      32,    52,   112,    53,    -1,   112,     8,    -1,   112,   107,
      -1,   112,   109,    -1,    -1,   114,    -1,   124,    -1,    40,
      52,   115,   117,    53,    -1,    41,    52,   116,    53,    -1,
       8,    -1,    43,    52,     8,    53,    -1,   119,    -1,   121,
      -1,    42,    52,   120,    53,    -1,   120,   123,    -1,   120,
     121,    -1,    -1,    48,    52,   122,    53,    -1,   122,   123,
      -1,   122,   119,    -1,    -1,    45,    52,    96,    53,    -1,
      46,    52,   117,   125,    53,    -1,   125,   126,    -1,   126,
      -1,    44,    54,   127,    55,    -1,   127,   128,    -1,   128,
      -1,    47,    52,   129,    53,    54,    96,    55,    -1,   130,
       7,   131,    -1,   131,    -1,    10,    -1,   132,    -1,    -1,
      11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    34,    36,    38,    40,    41,    43,    44,
      47,    49,    51,    54,    55,    58,    59,    62,    63,    66,
      67,    70,    72,    74,    76,    78,    80,    81,    84,    85,
      88,    89,    92,    94,    96,    97,   100,   101,   104,   106,
     107,   109,   110,   112,   113,   119,   121,   122,   125,   127,
     129,   130,   133,   134,   135,   136,   137,   138,   141,   143,
     145,   147,   149,   150,   151,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   167,   169,   171,   173,
     175,   177,   179,   181,   183,   185,   187,   188,   189,   190,
     193,   195,   196,   197,   198,   201,   203,   204,   205,   206,
     210,   211,   215,   218,   220,   222,   226,   227,   230,   232,
     233,   234,   238,   240,   241,   242,   245,   252,   255,   256,
     259,   262,   263,   266,   269,   270,   272,   274,   275,   278
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "arg", "id", "email", "url", "sep",
  "texto", "codigo", "carater", "inteiro", "BTITLE", "BSTITLE", "BAUTHOR",
  "BURL", "BAFFIL", "BEMAIL", "BDATE", "BINST", "BKEY", "BABS", "BAKNOW",
  "BINDICE", "BSUMMARY", "BBOLD", "BParag", "BREF", "BCODE", "BIterm",
  "BFoteN", "BLineCode", "BUnderLine", "BAcronym", "BItalic", "BXREF",
  "BHREF", "BCiteR", "BCHAP", "BSEC", "BFig", "BImg", "BENUM", "BCAP",
  "BLinha", "BItem", "BTAB", "BCel", "BItemize", "IFIGURE", "ITABLE",
  "'$'", "'('", "')'", "'{'", "'}'", "$accept", "Report", "FrontMatter",
  "BFMatter", "Title", "STitle", "Authores", "Author", "Bauthor", "Nome",
  "OPT_Author", "OPT_A_UM", "OPT_A_Dois", "OPT_A_Tres", "Nident", "Email",
  "Url", "Affiliation", "Date", "Institution", "Keywords", "Keys", "Key",
  "Abstract", "Aknowledgements", "ParaList", "Indice", "Toc", "Lof", "Lot",
  "Body", "ChapterList", "Chapter", "C_Title", "ElemList", "Elem",
  "CodeBlock", "Section", "S_Title", "Paragraph", "ParaContend",
  "FreeElem", "Summary", "Ref", "HRef", "Xref", "CitRef", "Iterm",
  "FootNote", "InlineCode", "Acronym", "Bold", "BCont", "Italic", "ICont",
  "Underline", "UCont", "Float", "Figure", "Image", "Path", "Caption",
  "List", "Enumerate", "C_ENUM", "Itemize", "C_Item", "Item", "TABELA",
  "C_Tabela", "Linha", "Celulas", "Cel", "OPT_Cel", "POS", "OPT_Cel_um",
  "DIM", 0
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
     305,    36,    40,    41,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    59,    60,    61,    61,    62,    62,
      63,    64,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    71,    72,    73,    74,    75,    75,    76,    76,
      77,    77,    78,    79,    80,    80,    81,    81,    82,    83,
      83,    84,    84,    85,    85,    86,    87,    87,    88,    89,
      90,    90,    91,    91,    91,    91,    91,    91,    92,    93,
      94,    95,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   108,   108,   108,
     109,   110,   110,   110,   110,   111,   112,   112,   112,   112,
     113,   113,   114,   115,   116,   117,   118,   118,   119,   120,
     120,   120,   121,   122,   122,   122,   123,   124,   125,   125,
     126,   127,   127,   128,   129,   129,   130,   131,   131,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,    10,     0,     4,     4,     0,     2,     1,
       5,     1,     1,     2,     1,     2,     1,     2,     1,     1,
       0,     2,     2,     2,     2,     3,     4,     0,     4,     0,
       3,     1,     1,     4,     4,     0,     2,     1,     1,     4,
       1,     5,     1,     4,     0,     1,     2,     1,     4,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     6,     6,     4,
       4,     4,     4,     4,     4,     4,     2,     2,     2,     0,
       4,     2,     2,     2,     0,     4,     2,     2,     2,     0,
       1,     1,     5,     4,     1,     4,     1,     1,     4,     2,
       2,     0,     4,     2,     2,     0,     4,     5,     2,     1,
       4,     2,     1,     7,     3,     1,     1,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     1,     0,     0,    45,    47,     0,
       0,     7,     0,     2,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    54,     0,    53,    55,    56,   100,    57,   106,   107,
     101,     0,     0,    11,     0,     9,     0,    49,     0,    64,
       0,     0,     0,   111,     0,   115,    48,    50,     0,     5,
       0,     0,     8,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,    29,
      12,    20,    76,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    63,    66,    69,    67,
      68,    70,    65,    74,    75,    71,    72,    73,    58,    60,
       0,     0,     0,   108,   110,   109,     0,     0,     0,   119,
     112,   114,   113,    59,    25,     0,     0,     0,     0,     0,
      14,    16,    18,    20,    20,    20,    19,    89,     0,     0,
       0,     0,    99,     0,    94,     0,     0,     0,   104,     0,
     102,    64,     0,     0,   117,   118,     0,     0,     0,    35,
      24,    21,    22,    23,    10,     0,    13,     0,    15,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,     0,   105,     0,     0,   122,    26,    32,
       0,    31,     0,     0,    44,    86,    85,    87,    88,     0,
      81,    82,    83,    96,    95,    97,    98,    84,    91,    90,
      92,    93,    79,     0,    80,   116,   128,   120,   121,     0,
      28,     0,    37,     0,     0,     3,    38,    40,    42,     0,
       0,   126,   129,     0,     0,   125,   127,    30,    33,    36,
       0,     0,    77,    78,     0,   128,    34,     0,     0,    44,
      64,   124,    44,    43,     0,    39,     0,     0,    41,     0,
     123,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    11,    18,    44,    45,    46,    81,
     129,   130,   131,   132,   133,   134,   135,   136,    63,    79,
     127,   190,   191,   159,   194,   221,   225,   226,   227,   228,
       6,     7,     8,     9,    28,    29,    30,    31,    32,    33,
      66,    96,    34,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   171,   106,   178,   107,   176,    35,    36,    70,
     149,    73,    37,    38,    71,    39,    74,   115,    40,   118,
     119,   186,   187,   233,   234,   235,   236
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -192
static const yytype_int16 yypact[] =
{
    -192,    25,    15,    64,  -192,    40,    38,    15,  -192,    42,
      46,    81,    94,  -192,  -192,   -20,   110,    85,   111,    76,
      86,    87,    90,    93,    95,    96,    97,    98,    69,  -192,
    -192,  -192,    92,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,    82,   136,  -192,    37,  -192,    99,  -192,   132,  -192,
     133,   144,   112,  -192,   113,  -192,  -192,  -192,   -20,  -192,
     102,   105,  -192,   135,   155,   106,     4,   107,   108,   114,
     113,    73,   115,   116,   -32,    88,  -192,   118,   120,   143,
    -192,   157,  -192,  -192,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
     160,   134,   137,  -192,  -192,  -192,   161,   138,   -39,  -192,
    -192,  -192,  -192,  -192,  -192,   162,   139,   149,   101,   140,
    -192,  -192,  -192,   177,   178,   179,  -192,  -192,   180,   182,
     186,   187,  -192,   188,  -192,   189,   190,   191,  -192,   147,
    -192,  -192,   148,   156,  -192,  -192,   151,   199,   152,   183,
    -192,  -192,  -192,  -192,  -192,   117,  -192,    55,  -192,   204,
    -192,    10,   201,   158,   159,   163,    66,   164,    78,   165,
     202,   166,  -192,    48,  -192,   168,   -40,  -192,  -192,  -192,
      -5,  -192,   184,   167,   192,  -192,  -192,  -192,  -192,   205,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,   208,  -192,  -192,    77,  -192,  -192,   199,
    -192,   -10,  -192,   184,   170,  -192,  -192,  -192,  -192,   171,
     172,  -192,  -192,   173,   216,  -192,  -192,  -192,  -192,  -192,
      -9,   -26,  -192,  -192,   174,   218,  -192,   181,   185,   207,
    -192,  -192,   209,  -192,   175,  -192,    35,   193,  -192,    83,
    -192,   194
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,  -192,  -192,  -192,  -192,  -192,   195,  -192,  -192,
    -192,   100,   103,   119,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,    12,  -192,  -192,    13,  -192,  -192,   -14,   -12,
    -192,  -192,   234,  -192,   197,   -25,  -192,  -192,  -192,  -191,
    -151,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -167,  -192,  -119,  -192,  -124,  -192,  -192,  -192,  -192,
    -192,   176,  -192,   169,  -192,   196,  -192,   198,  -192,  -192,
     141,  -192,    56,  -192,  -192,     2,  -192
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     183,   222,   219,    57,    20,   117,    21,   185,    22,   205,
      25,   210,    83,   112,   154,   217,    21,    21,   195,    23,
      24,   120,    25,   247,   248,     4,    26,   249,    27,    84,
     239,    85,   222,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    89,    83,    91,   238,   246,   198,   220,   239,
      57,    43,   197,     5,   211,    61,    83,   206,   160,    95,
      84,   163,    85,   196,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    84,   203,    85,    10,    86,    87,    88,
      89,    90,    91,    92,    93,    94,   208,   231,   232,    13,
     260,    84,    12,    20,    17,    21,    15,    22,    16,   256,
      91,   215,    19,    84,   160,   161,   162,   163,    23,    24,
      89,    25,    20,    41,    21,    26,    22,    27,   112,   204,
     160,    27,   162,   163,    56,    43,   113,    23,    24,    47,
      25,   209,   247,   248,    26,    59,    27,    42,    48,    60,
      65,    49,    67,   123,    50,    51,    58,    52,    53,    54,
      55,    64,    68,    69,    78,    76,    72,    77,    80,    82,
     117,   109,   108,   126,   128,   156,   110,   116,   148,   152,
     158,   124,   125,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   165,   167,   169,   150,   172,   151,
     173,   157,   153,   164,   174,   175,   177,   179,   180,   181,
     182,   184,   189,   185,   188,   193,   192,   160,   199,   213,
      21,   200,   201,   229,   230,   224,   202,   207,   212,   214,
     216,   223,   241,   245,   242,   243,   244,   259,   250,   232,
     254,   237,   257,   166,   252,   255,   240,   168,   253,    62,
     258,    14,   218,   121,   248,   261,   111,   251,     0,     0,
       0,     0,     0,     0,   170,    75,     0,     0,     0,   155,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,   122
};

static const yytype_int16 yycheck[] =
{
     151,   192,     7,    28,    24,    44,    26,    47,    28,   176,
      42,   178,     8,    45,    53,    55,    26,    26,     8,    39,
      40,    53,    42,    49,    50,     0,    46,    53,    48,    25,
     221,    27,   223,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    32,     8,    34,    55,    55,   171,    53,   240,
      75,    14,   171,    38,   178,    18,     8,   176,     3,    55,
      25,     6,    27,    53,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    25,     8,    27,    12,    29,    30,    31,
      32,    33,    34,    35,    36,    37,     8,    10,    11,    51,
      55,    25,    52,    24,    13,    26,    54,    28,    52,   250,
      34,    53,     8,    25,     3,     4,     5,     6,    39,    40,
      32,    42,    24,     3,    26,    46,    28,    48,    45,    53,
       3,    48,     5,     6,    55,    14,    53,    39,    40,    53,
      42,    53,    49,    50,    46,    53,    48,    52,    52,     3,
       8,    54,     9,    55,    54,    52,    54,    52,    52,    52,
      52,    52,     8,    41,    19,    53,    43,    52,     3,    53,
      44,    53,    55,    20,     7,     3,    52,    52,     8,     8,
      21,    53,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,     7,     7,     7,    53,     8,    52,
       8,    52,    54,    53,     8,     8,     8,     8,     8,     8,
      53,    53,     3,    47,    53,    22,    54,     3,     7,     7,
      26,    53,    53,     8,     6,    23,    53,    53,    53,    53,
      52,    54,    52,     7,    53,    53,    53,    52,    54,    11,
      23,   219,    23,   133,    53,   249,   223,   134,    53,    44,
     252,     7,   186,    74,    50,    52,    70,   245,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    58,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,    59,     0,    38,    86,    87,    88,    89,
      12,    60,    52,    51,    88,    54,    52,    13,    61,     8,
      24,    26,    28,    39,    40,    42,    46,    48,    90,    91,
      92,    93,    94,    95,    98,   113,   114,   118,   119,   121,
     124,     3,    52,    14,    62,    63,    64,    53,    52,    54,
      54,    52,    52,    52,    52,    52,    55,    91,    54,    53,
       3,    18,    63,    74,    52,     8,    96,     9,     8,    41,
     115,   120,    43,   117,   122,    90,    53,    52,    19,    75,
       3,    65,    53,     8,    25,    27,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    55,    97,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   109,   111,    55,    53,
      52,   117,    45,    53,   121,   123,    52,    44,   125,   126,
      53,   119,   123,    55,    53,    52,    20,    76,     7,    66,
      67,    68,    69,    70,    71,    72,    73,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,     8,   116,
      53,    52,     8,    54,    53,   126,     3,    52,    21,    79,
       3,     4,     5,     6,    53,     7,    67,     7,    68,     7,
      69,   108,     8,     8,     8,     8,   112,     8,   110,     8,
       8,     8,    53,    96,    53,    47,   127,   128,    53,     3,
      77,    78,    54,    22,    80,     8,    53,   109,   111,     7,
      53,    53,    53,     8,    53,   107,   109,    53,     8,    53,
     107,   111,    53,     7,    53,    53,    52,    55,   128,     7,
      53,    81,    95,    54,    23,    82,    83,    84,    85,     8,
       6,    10,    11,   129,   130,   131,   132,    78,    55,    95,
      81,    52,    53,    53,    53,     7,    55,    49,    50,    53,
      54,   131,    53,    53,    23,    84,    96,    23,    85,    52,
      55,    52
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
#line 32 "yacc.y"
    {return 0;}
    break;

  case 4:
#line 36 "yacc.y"
    {zona=FRONTMATTER;}
    break;

  case 5:
#line 38 "yacc.y"
    {addTitulo(&report, (yyvsp[(3) - (4)].valS));}
    break;

  case 6:
#line 40 "yacc.y"
    {addSTitulo(&report, (yyvsp[(3) - (4)].valS));}
    break;

  case 8:
#line 43 "yacc.y"
    {addAutor(&report,&autor);}
    break;

  case 9:
#line 44 "yacc.y"
    {addAutor(&report,&autor);}
    break;

  case 11:
#line 49 "yacc.y"
    {autor = init_Autor();}
    break;

  case 12:
#line 51 "yacc.y"
    {autor.anome = (yyvsp[(1) - (1)].valS);}
    break;

  case 21:
#line 70 "yacc.y"
    {autor.aid = (yyvsp[(2) - (2)].valS);}
    break;

  case 22:
#line 72 "yacc.y"
    {autor.aemail = (yyvsp[(2) - (2)].valS);}
    break;

  case 23:
#line 74 "yacc.y"
    {autor.aurl = (yyvsp[(2) - (2)].valS);}
    break;

  case 24:
#line 76 "yacc.y"
    {autor.aaffil = (yyvsp[(2) - (2)].valS);}
    break;

  case 25:
#line 78 "yacc.y"
    {report.data = 1;}
    break;

  case 26:
#line 80 "yacc.y"
    {report.inst = (yyvsp[(3) - (4)].valS);}
    break;

  case 32:
#line 92 "yacc.y"
    {addKey(&report,(yyvsp[(1) - (1)].valS));}
    break;

  case 39:
#line 106 "yacc.y"
    {report.indice = 1;}
    break;

  case 41:
#line 109 "yacc.y"
    {report.indice_fig = 1;}
    break;

  case 43:
#line 112 "yacc.y"
    {report.indice_tab = 1;}
    break;

  case 77:
#line 169 "yacc.y"
    {addRef(&report,(yyvsp[(3) - (6)].valS),(yyvsp[(5) - (6)].valS),zona);}
    break;

  case 78:
#line 171 "yacc.y"
    {}
    break;

  case 79:
#line 173 "yacc.y"
    {}
    break;

  case 80:
#line 175 "yacc.y"
    {}
    break;

  case 81:
#line 177 "yacc.y"
    {}
    break;


/* Line 1267 of yacc.c.  */
#line 1783 "y.tab.c"
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


#line 284 "yacc.y"



int yyerror( char *s )
{
  fprintf(stderr, "%s", s);
}

int main()
{	

	//INICIALIZAÇÕES
	report = init_Report();

	int yyres = yyparse();
  	printf("YYRES: %d\n",yyres);
  	


  	return 0;
}




