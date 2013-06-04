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
     BCiteR = 291,
     BCHAP = 292,
     BSEC = 293,
     BFig = 294,
     BImg = 295,
     BENUM = 296,
     BCAP = 297,
     BLinha = 298,
     BItem = 299,
     BTAB = 300,
     BCel = 301,
     BItemize = 302,
     IFIGURE = 303,
     ITABLE = 304
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
#define BCiteR 291
#define BCHAP 292
#define BSEC 293
#define BFig 294
#define BImg 295
#define BENUM 296
#define BCAP 297
#define BLinha 298
#define BItem 299
#define BTAB 300
#define BCel 301
#define BItemize 302
#define IFIGURE 303
#define ITABLE 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 25 "yacc.y"
{
	char* valS;
	int valI;
}
/* Line 1529 of yacc.c.  */
#line 152 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

