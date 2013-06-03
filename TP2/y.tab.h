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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 17 "yacc.y"
{
	char* valS;
	int vali;
}
/* Line 1529 of yacc.c.  */
#line 174 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

