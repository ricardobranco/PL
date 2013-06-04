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
     BItem = 301,
     BTAB = 302,
     BCEL = 303,
     BItemize = 304,
     IFIGURE = 305,
     ITABLE = 306
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
#define BItem 301
#define BTAB 302
#define BCEL 303
#define BItemize 304
#define IFIGURE 305
#define ITABLE 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 29 "yacc.y"
{
	char* valS;
	char valC; 
	int valI;
}
/* Line 1529 of yacc.c.  */
#line 157 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

