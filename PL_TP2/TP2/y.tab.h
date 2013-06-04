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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 24 "yacc.y"
{
	char* valS;
	int valI;
}
/* Line 1529 of yacc.c.  */
#line 154 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

