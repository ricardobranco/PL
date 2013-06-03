%{
#include <stdio.h>
#include <string.h>
#include "report.h"

Report report;

%}

%token TEXT ERROR ENDARG NID SEP EMAIL URL ENDBLOCK BTEXT BREAK BCODE CodeB BCiteR

%token BTITLE BSTITLE BAUTHOR BEMAIL BURL BAFFIL BABS BDATE BINST BKEY BAKNOW BLOF BLOT BTOC BBODY BCHAP BLIST BSEC BParag BREF
%start Report

%union{
	char* vals;
	int vali;
} 

%type<vals> Report


%%

Report: /*Breport*/ FrontMatter '$' {return 0;};

//Breport : {yylval.vali=0; };

FrontMatter : Title SubTitle Authors Date Instituition Keywords Abstract Aknowledgements Toc Lof Lot ;

Title : BTITLE TEXT ENDARG  ;//{addTitulo(&report, $2);};

SubTitle : BSTITLE TEXT ENDARG ;//{addSTitulo(&report, $2);};
		 | 
		 ;

Authors : Author Authors 
		|
		;

Author : BAUTHOR Name AuthorOPT ENDARG ;


Name : TEXT ;//{init_Aut(&report, $1);};


AuthorOPT : SEP Nident AuthorOPT {add};
		  | SEP Url AuthorOPT
		  | SEP Email AuthorOPT
		  | SEP Affilliation AuthorOPT
		  |;

Nident : NID  ;

Email : EMAIL ;

Url :  URL  ;

Affilliation :  TEXT ;

Abstract : BABS ParaList ENDBLOCK

Aknowledgements : BAKNOW ParaList ENDBLOCK

ParaList : Paragraph_ BREAK ParaList;
		 | Paragraph_ ;
		 ;

Paragraph_ : BTEXT ;

Date : BDATE ;

Instituition : BINST TEXT ENDARG 
			 |
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

Chapterlist : 	Chapter Chapterlist
			|	Chapter
			;

Chapter :	 C_Title	ElemList  ;


C_Title: BCHAP 	TEXT   ENDARG;



SECTION	:	S_Title  ElemList ;


S_Title: BSEC  TEXT  ENDARG;


ElemList	: Elem ElemList
			| Elem
			;


Elem 	: Paragraph 	
	//	| Float 		
	//	| List			
		| CodeBlock  	
		| SECTION		
	//	| Summary 
		|
		;

CodeBlock: BCODE CodeB ENDBLOCK;


Paragraph:	BParag	ParaContend ENDARG;


ParaContend	: TEXT_Virg ParaContend
			| FreeElem	ParaContend
			|
			;

TEXT_Virg 	: TEXT SEP TEXT_Virg
			| TEXT
			|
			; 


FreeElem	: FootNote
			| Ref
			| Xref
			| CitRef
		//	| Iterm
			| BEIU
		//	| InlineCode
		//	| Acroym
			;

BEIU	: BBEIU TEXT_Virg BEIU TEXT_Virg ENDARG
		| 
		;


//Confirmar se só leva TEXT ou é uma String especial
Ref 	: BREF TEXT ENDARG;

Xref	: BXREF TEXT ENDARG;

CitRef	: BCiteR TEXT ENDARG;









	

 
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

	report.indice = 0;
	report.html=init(sizeof(char*),NULL);
	report.latex=init(sizeof(char*),NULL);
	report.seccoes=init(sizeof(char*),NULL);
	report.autor=init(sizeof(Autor),NULL)


  	int yyres = yyparse();
  	printf("YYRES: %d\n",yyres);
  	return 0;
}




