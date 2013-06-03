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
%token BSUMMARY
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
			| 	Chapterlist Section
			|	
			;

Chapter :	 C_Title BEGI ElemList  ENDARG;


C_Title: BCHAP 	TEXT   ENDARG;


Section	: BSEC  TEXT  ENDARG ElemList ;

/*S_Title: BSEC  TEXT  ENDARG;
*/

ElemList	:  ElemList Elem
			|  Elem
			;


Elem 	: CodeBlock 
		| Paragraph
		| Section	ENDARG
		| Summary 
	//	| Float 		
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
			//| BEIU
			| InlineCode
			| Acronym
			;

//BEIU	: BBEIU OPT_BEIU ENDARG;

/*OPT_BEIU: BEIU TEXT_V
		| TEXT_V BEIU
		| TEXT_V
		;
*/

//Confirmar se só leva TEXT_V ou é uma String especial

Summary: BSUMMARY BTEXT ENDARG;

Ref 	: BREF BTEXT ENDARG;

Xref	: BXREF BTEXT ENDARG;

CitRef	: BCiteR BTEXT ENDARG;

Iterm	: BIterm BTEXT ENDARG;

FootNote: BFoteN BTEXT ENDARG;

InlineCode: BLineCode BTEXT ENDARG;

Acronym	: BAcronym BTEXT ENDARG;









/*

Float	: Figure
		| TABLE
		;


*/





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



