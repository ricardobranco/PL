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
     BTITLE = 268,
     BSTITLE = 269,
     BAUTHOR = 270,
     BEMAIL = 271,
     BURL = 272,
     BAFFIL = 273,
     BABS = 274,
     BDATE = 275,
     BINST = 276,
     BKEY = 277,
     BAKNOW = 278,
     BLOF = 279,
     BLOT = 280,
     BTOC = 281
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
#define BTITLE 268
#define BSTITLE 269
#define BAUTHOR 270
#define BEMAIL 271
#define BURL 272
#define BAFFIL 273
#define BABS 274
#define BDATE 275
#define BINST 276
#define BKEY 277
#define BAKNOW 278
#define BLOF 279
#define BLOT 280
#define BTOC 281




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 10 "yacc.y"
{
	char* vals;
}
/* Line 1529 of yacc.c.  */
#line 105 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

