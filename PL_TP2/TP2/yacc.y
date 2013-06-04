%{
#include <stdio.h>
#include <string.h>
#include "preprocessador.h"

//VARIAVEIS GLOBAIS
Report report;
Autor autor;
List* chars;
%}


%token arg id email url sep texto codigo
%token BTITLE BSTITLE BAUTHOR BURL BAFFIL BEMAIL BDATE BINST BKEY BABS BAKNOW BINDICE
%token BSUMMARY BBOLD BParag BREF BCODE BIterm BFoteN BLineCode BUnderLine BAcronym 
%token BItalic BXREF BCiteR BCHAP
%token IFIGURE ITABLE

%type<valS> arg id email url sep

%union{
	char* valS;
	int valI;
} 
%start Report


%%

Report : FrontMatter Body'$' {return 0;};

FrontMatter : Title STitle Authores Date Institution Keywords Abstract Aknowledgements Indice;

Title: BTITLE '(' arg ')' 	{addTitulo(&report, $3);};

STitle: BSTITLE '(' arg ')' {addSTitulo(&report, $3);}
	  | ;

Authores : Authores Author 	{addAutor(&report,&autor);} 
		 | Author 			{addAutor(&report,&autor);}
		 ;

Author : Bauthor '(' Nome OPT_Author ')';

Bauthor : BAUTHOR {autor = init_Autor();}

Nome : arg {autor.anome = $1;};


OPT_Author	: Nident OPT_A_UM
			| OPT_A_UM
			;

OPT_A_UM	: Email OPT_A_Dois
			| OPT_A_Dois
			;

OPT_A_Dois	: Url OPT_A_Tres
			| OPT_A_Tres
			;

OPT_A_Tres	: Affiliation
			|
			;

Nident : sep id	{autor.aid = $2;};	
	   
Email : sep  email {autor.aemail = $2;};

Url : sep  url {autor.aurl = $2;};

Affiliation : sep  arg {autor.aaffil = $2;};

Date : BDATE '('')' {report.data = 1;};

Institution : BINST '(' arg ')' {report.inst = $3;}
			|
			;

Keywords : BKEY '(' Keys ')' 
		 |	
		 ;	

Keys : Keys sep Key
	 | Key
	 ;

Key : arg {addKey(&report,$1);};

Abstract : BABS '{' ParaList '}';

Aknowledgements : BAKNOW '{' ParaList '}'
				|
				; 

ParaList : ParaList Paragraph ;
		 | Paragraph 
		 ;

Indice : Toc ;

Toc : BINDICE '(' ')' Lof {report.indice = 1;}
	| Lof
	;
Lof : BINDICE '(' IFIGURE ')' Lot {report.indice_fig = 1;}
	| Lot
	;
Lot : BINDICE '(' ITABLE ')' {report.indice_tab = 1;}
	|
	;

//---------------------------------


Body: ChapterList;

ChapterList	: ChapterList Chapter
			| Chapter
			;

Chapter : C_Title '{' ElemList '}';

C_Title : BCHAP  '('  texto ')';

ElemList:  ElemList Elem
		|  Elem
		;

Elem 	: CodeBlock 
		| Paragraph
	//	| Section	
		| Summary 
	//	| Float 		
	//	| List
		;	

CodeBlock: BCODE '{' codigo '}';

Paragraph:	BParag	'(' ParaContend ')' ;

ParaContend	: ParaContend texto
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

Summary: BSUMMARY '(' texto ')' ;

Ref : BREF '(' texto ')';

Xref: BXREF '(' texto ')';

CitRef	: BCiteR '(' texto ')';

Iterm	: BIterm '(' texto ')';

FootNote: BFoteN '(' texto ')';

InlineCode: BLineCode '(' texto ')';

Acronym	: BAcronym '(' texto ')';

Bold: BBOLD '(' BCont ')'

BCont	: BCont texto
		| BCont Italic
		| BCont Underline
		|
		;

Italic: BItalic '(' ICont ')'

ICont	: ICont texto
		| ICont Bold
		| ICont Underline
		|
		;

Underline: BUnderLine '(' UCont ')'

UCont	: UCont texto
		| UCont Bold
		| UCont Italic
		|
		;








%%


int yyerror( char *s )
{
  fprintf(stderr, "%s", s);
}

int main()
{	

	//INICIALIZAÇÕES
	report = init_Report();

	int yyres = yyparse();
  	printf("YYRES: %d\n",yyres);
  	


  	return 0;
}



