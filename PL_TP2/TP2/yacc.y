%{
#include <stdio.h>
#include <string.h>
#include "preprocessador.h"


//VARIAVEIS GLOBAIS
Report report;
Autor autor;
int zona;
%}


%token arg id email url sep texto codigo carater inteiro
%token BTITLE BSTITLE BAUTHOR BURL BAFFIL BEMAIL BDATE BINST BKEY BABS BAKNOW BINDICE
%token BSUMMARY BBOLD BParag BREF BCODE BIterm BFoteN BLineCode BUnderLine BAcronym 


%token BItalic BXREF  BHREF BCiteR BCHAP BSEC BFig BImg BENUM BCAP BLinha BItem BTAB BCel BItemize
%token IFIGURE ITABLE

%type<valS> arg id email url sep texto
%type<valI> inteiro

%union{
	char* valS;
	int valI;
} 
%start Report


%%

Report : FrontMatter Body'$' {return 0;};

FrontMatter : BFMatter Title STitle Authores Date Institution Keywords Abstract Aknowledgements Indice;

BFMatter : {zona=FRONTMATTER;}

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
		| Section	
		| Summary 
		| Float 		
		| List
		;	

CodeBlock: BCODE '{' codigo '}';

Section	: S_Title  '{' ElemList '}';

S_Title: BSEC '(' texto ')' ;

Paragraph:	BParag	'{' ParaContend '}' ;

ParaContend	: ParaContend texto
			| ParaContend FreeElem	
			|
			;

FreeElem	: FootNote
			| Ref
			| Xref
			| CitRef
			| Href
			| Iterm
			| Bold
			| Italic
			| Underline
			| InlineCode
			| Acronym
			;

Summary: BSUMMARY '(' texto ')' ;

Ref : BREF '(' texto sep texto')' {addRef(&report,$3,$5,zona);};

Href : BHREF '(' texto sep url ')' {}  ;

Xref: BXREF '(' texto ')' {};

CitRef	: BCiteR '(' texto ')' {};

Iterm	: BIterm '(' texto ')' {};

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


Float	: Figure
		| TABELA
		;


Figure	: BFig '(' Image Caption ')';


Image 	: BImg	'(' Path  ')'; 

Path: texto;

Caption	: BCAP '(' texto ')';

//---------------- Listas --------------------------

List: Enumerate
	| Itemize
	;

Enumerate	: BENUM '(' C_ENUM   ')'

C_ENUM	: C_ENUM Item
		| C_ENUM Itemize
		|
		;


Itemize	: BItemize '(' C_Item ')';

C_Item	: C_Item Item
		| C_Item Enumerate
		|
		;

Item: BItem '(' ParaContend ')';


//----------------------- TABELAS --------------------------------



TABELA 	: BTAB '(' Caption  C_Tabela ')';


C_Tabela: C_Tabela Linha
		| Linha
		;

Linha	: BLinha '{'  Celulas  '}';


Celulas	:  Celulas  Cel
		| Cel
		;

Cel : BCel '(' OPT_Cel  ')'  '{'   ParaContend   '}' ;


OPT_Cel :  POS sep OPT_Cel_um
		| OPT_Cel_um;

POS : carater;

OPT_Cel_um	: DIM
			|
			;

DIM: inteiro;



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



