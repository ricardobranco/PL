%{
#include <stdio.h>
#include <string.h>
#include "preprocessador.h"


//VARIAVEIS GLOBAIS
Report report;
Autor autor;
Image image;
Table table;
Row row;
Cell cell;
int seccao;
int count_foot;
int zona;
%}


%token arg id email url sep texto codigo carater inteiro linha
%token BTITLE BSTITLE BAUTHOR BURL BAFFIL BEMAIL BDATE BINST BKEY BABS BAKNOW BINDICE
%token BSUMMARY BBOLD BPARAG BREF BCODE BIterm BFoteN BLineCode BUNDERLINE BAcronym 
%token BITALIC BXREF  BHREF BCiteR BCHAP BSEC BFIG BImg BENUM BCAP BLINHA BItem BTAB BCEL BItemize
%token IFIGURE ITABLE

%type<valS> arg id email url sep texto codigo linha
%type<valI> inteiro
%type<valC> carater

%union{
	char* valS;
	char valC; 
	int valI;
} 
%start Report


%%

Report : FrontMatter Body '$' {return 0;};

FrontMatter : BFMatter  Title STitle Authores Date Institution Keywords Abstract Aknowledgements Indice;

BFMatter : {zona=FRONTMATTER;}

Title: BTITLE '(' arg ')' 	{printf("Titulo\n");addTitulo(&report, $3);};

STitle: BSTITLE '(' arg ')' {printf("STitulo\n");addSTitulo(&report, $3);}
	  | 
	  ;

Authores : Authores Author 	{printf("Autor\n");addAutor(&report,&autor);} 
		 | Author 			{printf("Autor\n");addAutor(&report,&autor);}
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

Date : BDATE '('')' {printf("Data\n");report.data = 1;};

Institution : BINST '(' arg ')' {printf("Instituição\n");report.inst = strdup($3);}
			|
			;

Keywords : BKEY '(' Keys ')' 
		 |	
		 ;	

Keys : Keys sep Key
	 | Key
	 ;

Key : arg {addKey(&report,$1);};

Abstract : BAbs  ParaList  {printf("RESUMO\n");} ;

BAbs : BABS {addResumo(&report);};

Aknowledgements : BAknow '{' ParaList '}' {printf("Agradecimentos\n");fechoAgradecimentos(&report);};
				|
				; 

BAknow : BAKNOW {addAgradecimentos(&report);};

ParaList : ParaList Paragraph {fechoParagrafo(&report,zona);} 
		 | Paragraph {fechoParagrafo(&report,zona);}
		 ;

Indice : Toc ;

Toc : BToc Lof 
	| Lof
	;


Lof :  BLof Lot 
	| Lot
	;
Lot :  BLot 
	|
	;



BToc :BINDICE '(' ')' {printf("Indice\n"); report.indice = 1;}
BLof :BINDICE '(' IFIGURE ')'{printf("Figuras \n");report.indice_fig = 1;}
BLot :BINDICE '(' ITABLE ')'{printf("Tabelas\n"); report.indice_tab = 1;}

//---------------------------------


Body: BBody ChapterList;

BBody : {zona = BODY;};

ChapterList	: ChapterList Chapter 
			| Chapter 
			;

Chapter : C_Title '{' ElemList '}' ;



C_Title : BCHAP  '('  arg ')' {printf("Capitulo\n"); addCapitulo(&report,$3);};

ElemList:  ElemList Elem
		|  Elem
		;

Elem 	: CodeBlock 
		| Paragraph 
		| Section	
		| Float 		
		| List
		;

CodeBlock: BCODE '{' codigo '}' {addTextoNF(&report,$3);};

Section	: S_Title  '{' ElemList '}';

S_Title: BSec '(' arg ')' {printf("Secção\n");addSeccao(&report,$3,seccao);};

BSec : BSEC {seccao = yylval.valI;}

Paragraph:	BParag	'{' ParaContend '}' ;

BParag : BPARAG {addParagrafo(&report,zona);}

ParaContend	: ParaContend texto 
			| ParaContend FreeElem	
			|
			;

FreeElem	: FootNote
			| Ref
			| Xref //FALTA
			| CitRef //FALTA
			| Href
			| Iterm //FALTA
			| Bold
			| Italic
			| Underline
			| InlineCode
			| Acronym 
			;


Ref : BREF '(' texto sep texto')' {addRef(&report,$3,$5,zona);};

Href : BHREF '(' texto sep url ')' {}  ;

Xref: BXREF '(' texto ')' {};

CitRef	: BCiteR '(' texto ')' {};

Iterm	: BIterm '(' texto ')' {};

FootNote: BFoteN '(' texto ')' {count_foot++; addFoteNote(&report,$3,count_foot,zona);};

InlineCode: BLineCode '(' linha ')' {addCodLinha(&report,$3,zona);};

Acronym	: BAcronym '(' texto ')';

Bold: Bbold '{' BCont '}' {fechoTag(&report,"</b>",zona);};

Bbold : BBOLD {addNegTag(&report,zona);};

BCont	: BCont texto {addTexto(&report,$2,zona);} 
		| BCont Italic 
		| BCont Underline 
		| 
		;

Italic: BItalic '{' ICont '}' {fechoTag(&report,"</i>",zona);};

BItalic : BITALIC {addItTag(&report,zona);};

ICont	: ICont texto {addTexto(&report,$2,zona);}
		| ICont Bold {}
		| ICont Underline {}
		| 
		;

Underline : BUnderLine '{' UCont '}' {fechoTag(&report,"</b>",zona);};

BUnderLine : BUNDERLINE {addUnderTag(&report,zona);};

UCont	: UCont texto {addTexto(&report,$2,zona);}
		| UCont Bold 
		| UCont Italic 
		| 
		;


Float	: Figure {addImagem(&report,&image);}
		| Table
		;


Figure	: BFig '(' Image Caption ')';

BFig : BFIG {image = init_Image();} ;


Image 	: BImg	'(' Path  ')'; 

Path: texto {image.path = $1;};

Caption	: BCAP '(' texto ')' {image.caption = $3;};

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



Table : BTab '(' T_Caption  C_Tabela ')' {addTabela(&report,&table);};

T_Caption : BCAP '(' texto ')' {table.caption = $3;};

BTab : BTAB {table = init_Table();};


C_Tabela: C_Tabela Linha {addLinha(&table,&row);}
		| Linha {addLinha(&table,&row);}
		;

Linha	: BLinha '{'  Celulas  '}';


BLinha : BLINHA {row = init_Row();};

Celulas	: Celulas  Cel {addCelula(&row,&cell);}
		| Cel {addCelula(&row,&cell);}
		;

Cel : BCel '(' OPT_Cel  ')'  '{'   texto   '}' {cell.cell = $6;};

BCel : BCEL {init_Cell();};

OPT_Cel : POS sep OPT_Cel_um
		| OPT_Cel_um;

POS : carater {cell.pos = $1;};

OPT_Cel_um	: Dim
			|
			;

Dim: inteiro {cell.dim = $1;};



%%


int yyerror( char *s )
{
  fprintf(stderr, "%s", s);
}

int main()
{	

	//INICIALIZAÇÕES
	report = init_Report();
	count_foot=0;

	int yyres = yyparse();
  	printf("YYRES: %d\n",yyres);
  	


  	return 0;
}



