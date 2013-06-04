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
     arg = 258,
     id = 259,
     email = 260,
     url = 261,
     sep = 262,
     texto = 263,
     codigo = 264,
     BTITLE = 265,
     BSTITLE = 266,
     BAUTHOR = 267,
     BURL = 268,
     BAFFIL = 269,
     BEMAIL = 270,
     BDATE = 271,
     BINST = 272,
     BKEY = 273,
     BABS = 274,
     BAKNOW = 275,
     BINDICE = 276,
     BSUMMARY = 277,
     BBOLD = 278,
     BParag = 279,
     BREF = 280,
     BCODE = 281,
     BIterm = 282,
     BFoteN = 283,
     BLineCode = 284,
     BUnderLine = 285,
     BAcronym = 286,
     BItalic = 287,
     BXREF = 288,
     BCiteR = 289,
     BCHAP = 290,
     BSEC = 291,
     IFIGURE = 292,
     ITABLE = 293
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
#define BTITLE 265
#define BSTITLE 266
#define BAUTHOR 267
#define BURL 268
#define BAFFIL 269
#define BEMAIL 270
#define BDATE 271
#define BINST 272
#define BKEY 273
#define BABS 274
#define BAKNOW 275
#define BINDICE 276
#define BSUMMARY 277
#define BBOLD 278
#define BParag 279
#define BREF 280
#define BCODE 281
#define BIterm 282
#define BFoteN 283
#define BLineCode 284
#define BUnderLine 285
#define BAcronym 286
#define BItalic 287
#define BXREF 288
#define BCiteR 289
#define BCHAP 290
#define BSEC 291
#define IFIGURE 292
#define ITABLE 293




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "yacc.y"
{
	char* valS;
	int valI;
}
/* Line 1529 of yacc.c.  */
#line 130 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

