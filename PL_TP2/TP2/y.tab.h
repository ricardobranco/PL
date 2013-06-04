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
     carater = 265,
     BTITLE = 266,
     BSTITLE = 267,
     BAUTHOR = 268,
     BURL = 269,
     BAFFIL = 270,
     BEMAIL = 271,
     BDATE = 272,
     BINST = 273,
     BKEY = 274,
     BABS = 275,
     BAKNOW = 276,
     BINDICE = 277,
     BSUMMARY = 278,
     BBOLD = 279,
     BParag = 280,
     BREF = 281,
     BCODE = 282,
     BIterm = 283,
     BFoteN = 284,
     BLineCode = 285,
     BUnderLine = 286,
     BAcronym = 287,
     BItalic = 288,
     BXREF = 289,
     BCiteR = 290,
     BCHAP = 291,
     BSEC = 292,
     BFig = 293,
     BImg = 294,
     BENUM = 295,
     BCAP = 296,
     BLinha = 297,
     BItem = 298,
     BTAB = 299,
     BCel = 300,
     BItemize = 301,
     IFIGURE = 302,
     ITABLE = 303
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
#define BTITLE 266
#define BSTITLE 267
#define BAUTHOR 268
#define BURL 269
#define BAFFIL 270
#define BEMAIL 271
#define BDATE 272
#define BINST 273
#define BKEY 274
#define BABS 275
#define BAKNOW 276
#define BINDICE 277
#define BSUMMARY 278
#define BBOLD 279
#define BParag 280
#define BREF 281
#define BCODE 282
#define BIterm 283
#define BFoteN 284
#define BLineCode 285
#define BUnderLine 286
#define BAcronym 287
#define BItalic 288
#define BXREF 289
#define BCiteR 290
#define BCHAP 291
#define BSEC 292
#define BFig 293
#define BImg 294
#define BENUM 295
#define BCAP 296
#define BLinha 297
#define BItem 298
#define BTAB 299
#define BCel 300
#define BItemize 301
#define IFIGURE 302
#define ITABLE 303




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "yacc.y"
{
	char* valS;
	int valI;
}
/* Line 1529 of yacc.c.  */
#line 150 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

