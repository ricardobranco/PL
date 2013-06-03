%{
#include <stdio.h>
#include <string.h>
#include "report.h"

Report report;
Autor autor;
Image imagem;
 
%}

%token TEXT ERROR ENDARG NID SEP EMAIL URL ENDBLOCK BTEXT BREAK BCODE CodeB BCiteR BIterm BBEIU BXREF BFoteN BAcronym BLineCode BEGI
%token BTITLE BSTITLE BAUTHOR BEMAIL BURL BAFFIL BABS BDATE BINST BKEY BAKNOW BLOF BLOT BTOC BBODY BCHAP BLIST BSEC BParag BREF TEXT_V
%token BSUMMARY BBOLD BUnderLine BItalic Path BFig BImg BCAP
%start Report

%union{
	char* valS;
	int vali;
} 

%type<valS> TEXT BTEXT EMAIL URL NID Name Nident Email Url Affilliation

%%

Report: FrontMatter Body'$' {return 0;};

FrontMatter : Title SubTitle Authors Date Instituition Keywords Abstract Aknowledgements Toc Lof Lot ;

Title : BTITLE TEXT ENDARG  {addTitulo(&report, yylval.valS);};

SubTitle : BSTITLE TEXT ENDARG {addSTitulo(&report, yylval.valS);} ;
		 | 
		 ;
Authors : Author Authors 
		| 
		;

Author : Bauthor Name AuthorOPT ENDARG 	{autor.nome = strdup($2);
										 insertHead(report.autores,&autor);} ;

Bauthor : BAUTHOR  {autor = init_Autor();};


Name : TEXT {$$=$1;};


AuthorOPT : SEP Nident AuthorOPT {insertHead(autor.nident,&($2));}
		  | SEP Url AuthorOPT {insertHead(autor.url,&($2));}
		  | SEP Email AuthorOPT {insertHead(autor.email,&($2));}
		  | SEP Affilliation AuthorOPT {insertHead(autor.affil,&($2));}
		  |
		  ;

Nident : NID  {$$=$1;};

Email : EMAIL {$$=$1;};

Url :  URL  {$$=$1;};

Affilliation :  TEXT {$$=$1;};

Abstract : BABS ParaList ENDBLOCK ;

Aknowledgements : BAKNOW ParaList ENDBLOCK

ParaList : Paragraph BREAK ParaList;
		 | Paragraph ;
		 ;

Date : BDATE ;

Instituition : BINST TEXT ENDARG ;//{report.inst = strdup($2); } 
			 | //{report.inst = NULL;}
			 ;

Keywords : BKEY Keys ENDARG
		 |
		 ;

Keys : TEXT SEP Keys
	 | TEXT 
	 ;

 Toc : BTOC 
 	 |
 	 ;

 Lof : BLOF
 	 |
 	 ;

 Lot : BLOT
     |
     ;	 	 	
	
//----------------------------

 
Body : BBODY Chapterlist ENDARG ;

Chapterlist : 	Chapterlist Chapter 
			| 	Chapterlist SECTION
			|	
			;

Chapter :	 C_Title BEGI ElemList  ENDARG;


C_Title: BCHAP 	TEXT   ENDARG;


SECTION	: S_Title  BEGI ElemList ENDBLOCK;

S_Title: BSEC  TEXT  ENDARG;


ElemList	:  ElemList Elem
			|  Elem
			;


Elem 	: CodeBlock 
		| Paragraph
		| SECTION	
		| Summary 
		| Float 		
	//	| List		
		;	

CodeBlock: BCODE CodeB ENDBLOCK;


Paragraph:	BParag	ParaContend ENDARG;


ParaContend	: ParaContend TEXT_V
			| ParaContend FreeElem	
			|
			;



FreeElem	: FootNote
			| Ref
			| Xref
			| CitRef
			| Iterm
			| Bold
			| Italic
			| Underline
			| InlineCode
			| Acronym
			;

Bold: BBOLD BCont ENDARG

BCont	: BCont TEXT
		| BCont Italic
		| BCont Underline
		|
		;

Italic: BItalic ICont ENDARG

ICont	: BCont TEXT
		| BCont Bold
		| BCont Underline
		|
		;

Underline: BUnderLine UCont ENDARG

UCont	: BCont TEXT
		| BCont Bold
		| BCont Italic
		|
		;


//Confirmar se só leva TEXT_V ou é uma String especial

Summary: BSUMMARY TEXT_V ENDARG;

Ref 	: BREF TEXT ENDARG;

Xref	: BXREF TEXT ENDARG;

CitRef	: BCiteR TEXT ENDARG;

Iterm	: BIterm TEXT ENDARG;

FootNote: BFoteN TEXT ENDARG;

InlineCode: BLineCode TEXT ENDARG;

Acronym	: BAcronym TEXT ENDARG;






Float	: Figure
	//	| TABLE
		;


Figure	: BFig  Image Caption ENDARG;

Image 	: BImg	Path  ENDARG;

Caption	: BCAP TEXT ENDARG;









%%


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



