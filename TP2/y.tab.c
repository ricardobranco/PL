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
     TEXT = 258,
     ERROR = 259,
     ENDARG = 260,
     NID = 261,
     SEP = 262,
     EMAIL = 263,
     URL = 264,
     ENDBLOCK = 265,
     BTEXT = 266,
     BREAK = 267,
     BCODE = 268,
     CodeB = 269,
     BCiteR = 270,
     BIterm = 271,
     BBEIU = 272,
     BXREF = 273,
     BFoteN = 274,
     BAcronym = 275,
     BLineCode = 276,
     BEGI = 277,
     BTITLE = 278,
     BSTITLE = 279,
     BAUTHOR = 280,
     BEMAIL = 281,
     BURL = 282,
     BAFFIL = 283,
     BABS = 284,
     BDATE = 285,
     BINST = 286,
     BKEY = 287,
     BAKNOW = 288,
     BLOF = 289,
     BLOT = 290,
     BTOC = 291,
     BBODY = 292,
     BCHAP = 293,
     BLIST = 294,
     BSEC = 295,
     BParag = 296,
     BREF = 297,
     TEXT_V = 298,
     BSUMMARY = 299,
     BBOLD = 300,
     BUnderLine = 301,
     BItalic = 302,
     Path = 303,
     BFig = 304,
     BImg = 305,
     BCAP = 306,
     BENUM = 307,
     BItemize = 308,
     BItem = 309,
     BLinha = 310,
     DIM = 311,
     BCel = 312,
     POS = 313,
     C_Cel = 314,
     BTAB = 315
   };
#endif
/* Tokens.  */
#define TEXT 258
#define ERROR 259
#define ENDARG 260
#define NID 261
#define SEP 262
#define EMAIL 263
#define URL 264
#define ENDBLOCK 265
#define BTEXT 266
#define BREAK 267
#define BCODE 268
#define CodeB 269
#define BCiteR 270
#define BIterm 271
#define BBEIU 272
#define BXREF 273
#define BFoteN 274
#define BAcronym 275
#define BLineCode 276
#define BEGI 277
#define BTITLE 278
#define BSTITLE 279
#define BAUTHOR 280
#define BEMAIL 281
#define BURL 282
#define BAFFIL 283
#define BABS 284
#define BDATE 285
#define BINST 286
#define BKEY 287
#define BAKNOW 288
#define BLOF 289
#define BLOT 290
#define BTOC 291
#define BBODY 292
#define BCHAP 293
#define BLIST 294
#define BSEC 295
#define BParag 296
#define BREF 297
#define TEXT_V 298
#define BSUMMARY 299
#define BBOLD 300
#define BUnderLine 301
#define BItalic 302
#define Path 303
#define BFig 304
#define BImg 305
#define BCAP 306
#define BENUM 307
#define BItemize 308
#define BItem 309
#define BLinha 310
#define DIM 311
#define BCel 312
#define POS 313
#define C_Cel 314
#define BTAB 315




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

#include <stdio.h>
#include <string.h>
#include "report.h"

Report report;
Autor autor;
Image imagem;
 


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
#line 17 "yacc.y"
{
	char* valS;
	int vali;
}
/* Line 193 of yacc.c.  */
#line 232 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 245 "y.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   191

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,    63,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    19,    23,    27,    28,    31,    32,
      37,    39,    41,    45,    49,    53,    57,    58,    60,    62,
      64,    66,    70,    74,    78,    80,    82,    86,    87,    91,
      92,    96,    98,   100,   101,   103,   104,   106,   107,   109,
     112,   115,   116,   121,   125,   130,   134,   137,   139,   141,
     143,   145,   147,   149,   151,   155,   159,   162,   165,   166,
     168,   170,   172,   174,   176,   178,   180,   182,   184,   186,
     190,   193,   196,   199,   200,   204,   207,   210,   213,   214,
     218,   221,   224,   227,   228,   232,   236,   240,   244,   248,
     252,   256,   260,   262,   264,   269,   273,   277,   279,   281,
     285,   288,   291,   292,   296,   299,   302,   303,   307,   312,
     315,   317,   321,   324,   326,   333,   337,   339,   341
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      65,     0,    -1,    66,    88,    61,    -1,    67,    68,    69,
      81,    82,    83,    78,    79,    85,    86,    87,    -1,    23,
       3,     5,    -1,    24,     3,     5,    -1,    -1,    70,    69,
      -1,    -1,    71,    72,    73,     5,    -1,    25,    -1,     3,
      -1,     7,    74,    73,    -1,     7,    76,    73,    -1,     7,
      75,    73,    -1,     7,    77,    73,    -1,    -1,     6,    -1,
       8,    -1,     9,    -1,     3,    -1,    29,    80,    10,    -1,
      33,    80,    10,    -1,    97,    12,    80,    -1,    97,    -1,
      30,    -1,    31,     3,     5,    -1,    -1,    32,    84,     5,
      -1,    -1,    84,     7,     3,    -1,     3,    -1,    36,    -1,
      -1,    34,    -1,    -1,    35,    -1,    -1,    89,    -1,    89,
      90,    -1,    89,    92,    -1,    -1,    91,    22,    94,     5,
      -1,    38,     3,     5,    -1,    93,    22,    94,    10,    -1,
      40,     3,     5,    -1,    94,    95,    -1,    95,    -1,    96,
      -1,    97,    -1,    92,    -1,   106,    -1,   114,    -1,   118,
      -1,    13,    14,    10,    -1,    41,    98,     5,    -1,    98,
      43,    -1,    98,    99,    -1,    -1,   111,    -1,   107,    -1,
     108,    -1,   109,    -1,   110,    -1,   100,    -1,   102,    -1,
     104,    -1,   112,    -1,   113,    -1,    45,   101,     5,    -1,
     101,     3,    -1,   101,   102,    -1,   101,   104,    -1,    -1,
      47,   103,     5,    -1,   103,     3,    -1,   103,   100,    -1,
     103,   104,    -1,    -1,    46,   105,     5,    -1,   105,     3,
      -1,   105,   100,    -1,   105,   102,    -1,    -1,    44,    11,
       5,    -1,    42,    11,     5,    -1,    18,    11,     5,    -1,
      15,    11,     5,    -1,    16,    11,     5,    -1,    19,    11,
       5,    -1,    21,    11,     5,    -1,    20,    11,     5,    -1,
     115,    -1,   124,    -1,    49,   116,   117,     5,    -1,    50,
      48,     5,    -1,    51,     3,     5,    -1,   119,    -1,   121,
      -1,    52,   120,     5,    -1,   120,   123,    -1,   120,   121,
      -1,    -1,    53,   122,     5,    -1,   122,   123,    -1,   122,
     119,    -1,    -1,    54,    98,     5,    -1,    60,   117,   125,
       5,    -1,   125,   126,    -1,   126,    -1,    55,   127,    10,
      -1,   127,   128,    -1,   128,    -1,    57,   129,     5,    62,
      98,    63,    -1,    58,     7,   130,    -1,   130,    -1,    56,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    26,    26,    28,    30,    32,    33,    35,    36,    39,
      42,    45,    48,    49,    50,    51,    52,    55,    57,    59,
      61,    63,    65,    67,    68,    71,    73,    74,    77,    78,
      81,    82,    85,    86,    89,    90,    93,    94,   100,   102,
     103,   104,   107,   110,   113,   115,   118,   119,   123,   124,
     125,   126,   127,   128,   131,   134,   137,   138,   139,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   156,
     158,   159,   160,   161,   164,   166,   167,   168,   169,   172,
     174,   175,   176,   177,   183,   185,   187,   189,   191,   193,
     195,   197,   204,   205,   209,   211,   213,   217,   218,   221,
     223,   224,   225,   229,   231,   232,   233,   236,   243,   246,
     247,   250,   253,   254,   257,   260,   261,   264,   265
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TEXT", "ERROR", "ENDARG", "NID", "SEP",
  "EMAIL", "URL", "ENDBLOCK", "BTEXT", "BREAK", "BCODE", "CodeB", "BCiteR",
  "BIterm", "BBEIU", "BXREF", "BFoteN", "BAcronym", "BLineCode", "BEGI",
  "BTITLE", "BSTITLE", "BAUTHOR", "BEMAIL", "BURL", "BAFFIL", "BABS",
  "BDATE", "BINST", "BKEY", "BAKNOW", "BLOF", "BLOT", "BTOC", "BBODY",
  "BCHAP", "BLIST", "BSEC", "BParag", "BREF", "TEXT_V", "BSUMMARY",
  "BBOLD", "BUnderLine", "BItalic", "Path", "BFig", "BImg", "BCAP",
  "BENUM", "BItemize", "BItem", "BLinha", "DIM", "BCel", "POS", "C_Cel",
  "BTAB", "'$'", "'{'", "'}'", "$accept", "Report", "FrontMatter", "Title",
  "SubTitle", "Authors", "Author", "Bauthor", "Name", "AuthorOPT",
  "Nident", "Email", "Url", "Affilliation", "Abstract", "Aknowledgements",
  "ParaList", "Date", "Instituition", "Keywords", "Keys", "Toc", "Lof",
  "Lot", "Body", "Chapterlist", "Chapter", "C_Title", "Section", "S_Title",
  "ElemList", "Elem", "CodeBlock", "Paragraph", "ParaContend", "FreeElem",
  "Bold", "BCont", "Italic", "ICont", "Underline", "UCont", "Summary",
  "Ref", "Xref", "CitRef", "Iterm", "FootNote", "InlineCode", "Acronym",
  "Float", "Figure", "Image", "Caption", "List", "Enumerate", "C_ENUM",
  "Itemize", "C_Item", "Item", "TABELA", "C_Tabela", "Linha", "Celulas",
  "Cel", "OPT_Cel", "OPT_Cel_um", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    36,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    67,    68,    68,    69,    69,    70,
      71,    72,    73,    73,    73,    73,    73,    74,    75,    76,
      77,    78,    79,    80,    80,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    89,
      89,    89,    90,    91,    92,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    97,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     101,   101,   101,   101,   102,   103,   103,   103,   103,   104,
     105,   105,   105,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   114,   115,   116,   117,   118,   118,   119,
     120,   120,   120,   121,   122,   122,   122,   123,   124,   125,
     125,   126,   127,   127,   128,   129,   129,   130,   130
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,    11,     3,     3,     0,     2,     0,     4,
       1,     1,     3,     3,     3,     3,     0,     1,     1,     1,
       1,     3,     3,     3,     1,     1,     3,     0,     3,     0,
       3,     1,     1,     0,     1,     0,     1,     0,     1,     2,
       2,     0,     4,     3,     4,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     2,     2,     0,     3,     2,     2,     2,     0,     3,
       2,     2,     2,     0,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     4,     3,     3,     1,     1,     3,
       2,     2,     0,     3,     2,     2,     0,     3,     4,     2,
       1,     3,     2,     1,     6,     3,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    41,     6,     0,     1,     0,    38,     0,
       8,     4,     2,     0,     0,    39,     0,    40,     0,     0,
      10,     0,     8,     0,     0,     0,     0,     0,     5,    25,
      27,     7,    11,    16,    43,    45,     0,    58,     0,     0,
     102,   106,     0,    50,     0,    47,    48,    49,    51,    52,
      92,    53,    97,    98,    93,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      46,    44,     0,     0,     0,    20,    17,    18,    19,    16,
      16,    16,    16,     9,    54,    55,     0,     0,     0,     0,
       0,     0,     0,    56,    73,    83,    78,    57,    64,    65,
      66,    60,    61,    62,    63,    59,    67,    68,    84,     0,
       0,    99,    58,   101,   100,   103,   105,   104,     0,     0,
       0,   110,    26,    31,     0,     0,     0,    12,    14,    13,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    94,     0,    96,   118,     0,   113,   108,   109,
      28,     0,     0,    24,     0,    33,    87,    88,    86,    89,
      91,    90,    85,    70,    69,    71,    72,    80,    79,    81,
      82,    75,    74,    76,    77,   107,   117,     0,     0,   116,
     111,   112,    30,    21,     0,     0,    32,    35,   118,     0,
      23,    22,    34,    37,   115,    58,    36,     3,     0,   114
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    21,    22,    23,    33,    59,
      79,    80,    81,    82,   126,   155,   152,    30,    57,    74,
     124,   187,   193,   197,     7,     8,    15,    16,    43,    18,
      44,    45,    46,    47,    61,    97,    98,   138,    99,   140,
     100,   139,    48,   101,   102,   103,   104,   105,   106,   107,
      49,    50,    64,    68,    51,    52,    65,    53,    66,   114,
      54,   120,   121,   146,   147,   178,   179
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -143
static const yytype_int16 yypact[] =
{
     -17,    11,    18,  -143,   -13,    23,  -143,   -21,   -11,    40,
      27,  -143,  -143,    62,    71,  -143,    57,  -143,    60,    83,
    -143,    68,    27,   100,   101,   102,    32,    32,  -143,  -143,
      77,  -143,  -143,   103,  -143,  -143,    95,  -143,   104,    63,
    -143,  -143,    61,  -143,    -3,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,    -5,   111,    84,    13,   113,
     115,    81,   124,    82,    61,     8,     2,   128,    79,  -143,
    -143,  -143,   134,   137,   112,  -143,  -143,  -143,  -143,   103,
     103,   103,   103,  -143,  -143,  -143,   131,   132,   133,   135,
     136,   138,   139,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,   140,
     143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,   146,    96,
      -2,  -143,  -143,  -143,    26,   114,   119,  -143,  -143,  -143,
    -143,   149,   151,   152,   153,   156,   160,   161,    12,    72,
      75,  -143,  -143,   117,  -143,   -24,    -6,  -143,  -143,  -143,
    -143,   164,   158,   157,   114,   141,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,   163,   166,  -143,
    -143,  -143,  -143,  -143,   114,   162,  -143,   142,   118,   116,
    -143,  -143,  -143,   144,  -143,  -143,  -143,  -143,    48,  -143
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,  -143,  -143,  -143,   159,  -143,  -143,  -143,   -56,
    -143,  -143,  -143,  -143,  -143,  -143,  -142,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,   165,  -143,
     148,   -35,  -143,  -124,  -112,  -143,   -69,  -143,   -34,  -143,
     -51,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,   120,  -143,   121,  -143,   123,  -143,   125,
    -143,  -143,    65,  -143,    34,  -143,     1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     143,   153,    69,   148,   180,    71,     1,   115,    36,    70,
      36,     9,   185,   111,     5,   163,    75,   164,     6,    76,
      70,    77,    78,   127,   128,   129,   130,    13,    11,    14,
     153,   150,   176,   151,   177,    14,    37,    14,    37,    38,
      12,    38,   190,    19,    39,    36,    39,    40,    41,    40,
      41,   145,    20,   119,    40,    42,   112,    42,    95,    96,
     153,    41,   112,    86,    87,    24,    88,    89,    90,    91,
     169,   173,    14,    37,    25,   167,    38,   168,   171,    26,
     172,    39,    27,   198,    40,    41,    85,   166,    28,   174,
      92,    93,    42,    94,    95,    96,    86,    87,    29,    88,
      89,    90,    91,    32,   165,   170,    34,    35,    56,    60,
      58,   199,    67,    63,    72,    62,    73,    94,    83,    96,
      94,    95,   175,    92,    93,    84,    94,    95,    96,   108,
     109,   118,    86,    87,   119,    88,    89,    90,    91,   122,
     123,   125,   131,   132,   133,   141,   134,   135,   142,   136,
     137,   144,   154,   145,   156,    37,   157,   158,   159,    92,
      93,   160,    94,    95,    96,   161,   162,   182,   183,   184,
     188,   189,   191,    17,   176,    55,   192,   186,   195,   196,
     181,    31,     0,     0,   110,   149,     0,   116,   113,   194,
       0,   117
};

static const yytype_int16 yycheck[] =
{
     112,   125,     5,     5,    10,    10,    23,     5,    13,    44,
      13,    24,   154,     5,     3,     3,     3,     5,     0,     6,
      55,     8,     9,    79,    80,    81,    82,    38,     5,    40,
     154,     5,    56,     7,    58,    40,    41,    40,    41,    44,
      61,    44,   184,     3,    49,    13,    49,    52,    53,    52,
      53,    57,    25,    55,    52,    60,    54,    60,    46,    47,
     184,    53,    54,    15,    16,     3,    18,    19,    20,    21,
     139,   140,    40,    41,     3,     3,    44,     5,     3,    22,
       5,    49,    22,   195,    52,    53,     5,   138,     5,   140,
      42,    43,    60,    45,    46,    47,    15,    16,    30,    18,
      19,    20,    21,     3,   138,   139,     5,     5,    31,    14,
       7,    63,    51,    50,     3,    11,    32,    45,     5,    47,
      45,    46,     5,    42,    43,    10,    45,    46,    47,     5,
      48,     3,    15,    16,    55,    18,    19,    20,    21,     5,
       3,    29,    11,    11,    11,     5,    11,    11,     5,    11,
      11,     5,    33,    57,     5,    41,     5,     5,     5,    42,
      43,     5,    45,    46,    47,     5,     5,     3,    10,    12,
       7,     5,    10,     8,    56,    27,    34,    36,    62,    35,
     146,    22,    -1,    -1,    64,   120,    -1,    66,    65,   188,
      -1,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    65,    66,    67,     3,     0,    88,    89,    24,
      68,     5,    61,    38,    40,    90,    91,    92,    93,     3,
      25,    69,    70,    71,     3,     3,    22,    22,     5,    30,
      81,    69,     3,    72,     5,     5,    13,    41,    44,    49,
      52,    53,    60,    92,    94,    95,    96,    97,   106,   114,
     115,   118,   119,   121,   124,    94,    31,    82,     7,    73,
      14,    98,    11,    50,   116,   120,   122,    51,   117,     5,
      95,    10,     3,    32,    83,     3,     6,     8,     9,    74,
      75,    76,    77,     5,    10,     5,    15,    16,    18,    19,
      20,    21,    42,    43,    45,    46,    47,    99,   100,   102,
     104,   107,   108,   109,   110,   111,   112,   113,     5,    48,
     117,     5,    54,   121,   123,     5,   119,   123,     3,    55,
     125,   126,     5,     3,    84,    29,    78,    73,    73,    73,
      73,    11,    11,    11,    11,    11,    11,    11,   101,   105,
     103,     5,     5,    98,     5,    57,   127,   128,     5,   126,
       5,     7,    80,    97,    33,    79,     5,     5,     5,     5,
       5,     5,     5,     3,     5,   102,   104,     3,     5,   100,
     102,     3,     5,   100,   104,     5,    56,    58,   129,   130,
      10,   128,     3,    10,    12,    80,    36,    85,     7,     5,
      80,    10,    34,    86,   130,    62,    35,    87,    98,    63
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
#line 26 "yacc.y"
    {return 0;}
    break;

  case 4:
#line 30 "yacc.y"
    {addTitulo(&report, yylval.valS);}
    break;

  case 5:
#line 32 "yacc.y"
    {addSTitulo(&report, yylval.valS);}
    break;

  case 9:
#line 39 "yacc.y"
    {autor.nome = strdup((yyvsp[(2) - (4)].valS));
										 insertHead(report.autores,&autor);}
    break;

  case 10:
#line 42 "yacc.y"
    {autor = init_Autor();}
    break;

  case 11:
#line 45 "yacc.y"
    {(yyval.valS)=(yyvsp[(1) - (1)].valS);}
    break;

  case 12:
#line 48 "yacc.y"
    {insertHead(autor.nident,&((yyvsp[(2) - (3)].valS)));}
    break;

  case 13:
#line 49 "yacc.y"
    {insertHead(autor.url,&((yyvsp[(2) - (3)].valS)));}
    break;

  case 14:
#line 50 "yacc.y"
    {insertHead(autor.email,&((yyvsp[(2) - (3)].valS)));}
    break;

  case 15:
#line 51 "yacc.y"
    {insertHead(autor.affil,&((yyvsp[(2) - (3)].valS)));}
    break;

  case 17:
#line 55 "yacc.y"
    {(yyval.valS)=(yyvsp[(1) - (1)].valS);}
    break;

  case 18:
#line 57 "yacc.y"
    {(yyval.valS)=(yyvsp[(1) - (1)].valS);}
    break;

  case 19:
#line 59 "yacc.y"
    {(yyval.valS)=(yyvsp[(1) - (1)].valS);}
    break;

  case 20:
#line 61 "yacc.y"
    {(yyval.valS)=(yyvsp[(1) - (1)].valS);}
    break;


/* Line 1267 of yacc.c.  */
#line 1709 "y.tab.c"
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


#line 274 "yacc.y"



int yyerror( char *s )
{
  fprintf(stderr, "%s", s);
}

int main()
{

	//Inicializações
/*
	report.indice = 0;
	report.indice_fig = 0;
	report.indice_tab = 0;
	report.html=init(sizeof(char*),NULL);
	report.latex=init(sizeof(char*),NULL);
	report.seccoes=init(sizeof(char*),NULL);
	report.autores=init(sizeof(Autor),NULL);


  	int yyres = yyparse();
  	printf("YYRES: %d\n",yyres);
  	geraHTML(&report,NULL);
  	geraLATEX(&report,NULL);*/
  	return 0;
}




