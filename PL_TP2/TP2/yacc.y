%{
#include <stdio.h>
#include <string.h>
#include "preprocessador.h"

//VARIAVEIS GLOBAIS
Report report;

%}


%token arg id email url sep
%token BTITLE BSTITLE BAUTHOR BURL BAFFIL BEMAIL BDATE BINST BKEY BABS BAKNOW BINDICE
%token FIGURE TABLE

%type<valS> arg id email url sep

%union{
	char* valS;
	int valI;
} 
%start Report


%%

Report : FrontMatter '$' {return 0;};

FrontMatter : Title STitle Authores Date Institution Keywords Abstract Aknowledgements Indice;

Title: BTITLE '(' arg ')' {};

STitle: BSTITLE '(' arg ')'
	  | ;

Authores : Authores Author 
		 | Author
		 ;
Author : BAUTHOR '(' Nome OPT_Author ')';

Nome : arg ;


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

Nident : sep id	;	
	   
Email : sep  email ;

Url : sep  url ;

Affiliation : sep  arg ;

Date : BDATE '('')';

Institution : BINST '(' arg ')'
			|
			;

Keywords : BKEY '(' Keys ')'
		 |	
		 ;	

Keys : Keys sep Key
	 | Key
	 ;

Key : arg ;

Abstract : BABS '{' ParaList '}';

Aknowledgements : BAKNOW '{' ParaList '}'
				|
				; 

Indice : Toc ;

Toc : BINDICE '(' ')' Lof
	| Lof
	;
Lof : BINDICE '(' FIGURE ')' Lot
	| Lot
	;
Lot : BINDICE '(' TABLE ')'
	|
	;



//CONCLUIR
ParaList : ;




%%


int yyerror( char *s )
{
  fprintf(stderr, "%s", s);
}

int main()
{	
	int yyres = yyparse();
  	printf("YYRES: %d\n",yyres);
  	



	//Inicializações
/*
	report.indice = 0;
	report.indice_fig = 0;
	report.indice_tab = 0;
	report.html=init(sizeof(char*),NULL);
	report.latex=init(sizeof(char*),NULL);
	report.seccoes=init(sizeof(char*),NULL);
	report.autores=init(sizeof(Autor),NULL);


  	geraHTML(&report,NULL);
  	geraLATEX(&report,NULL);*/
  	return 0;
}



