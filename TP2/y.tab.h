/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     BTITLE = 277,
     BSTITLE = 278,
     BAUTHOR = 279,
     BEMAIL = 280,
     BURL = 281,
     BAFFIL = 282,
     BABS = 283,
     BDATE = 284,
     BINST = 285,
     BKEY = 286,
     BAKNOW = 287,
     BLOF = 288,
     BLOT = 289,
     BTOC = 290,
     BBODY = 291,
     BCHAP = 292,
     BLIST = 293,
     BSEC = 294,
     BParag = 295,
     BREF = 296
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
#define BTITLE 277
#define BSTITLE 278
#define BAUTHOR 279
#define BEMAIL 280
#define BURL 281
#define BAFFIL 282
#define BABS 283
#define BDATE 284
#define BINST 285
#define BKEY 286
#define BAKNOW 287
#define BLOF 288
#define BLOT 289
#define BTOC 290
#define BBODY 291
#define BCHAP 292
#define BLIST 293
#define BSEC 294
#define BParag 295
#define BREF 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 15 "yacc.y"
{
	char* valS;
	int vali;
}
/* Line 1529 of yacc.c.  */
#line 136 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

