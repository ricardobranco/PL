%{
#include <stdio.h>
#include <string.h>
#include "report.h"


Report report;
Autor autor;

%}

%token TEXT ERROR ENDARG NID SEP EMAIL URL ENDBLOCK BTEXT BREAK
%token BTITLE BSTITLE BAUTHOR BEMAIL BURL BAFFIL BABS BDATE BINST BKEY BAKNOW BLOF BLOT BTOC
%start Report

%union{
	char* valS;
} 

%type<valS> TEXT BTEXT EMAIL URL NID Name Nident Email Url Affilliation

%%

Report: FrontMatter '$' {return 0;};

FrontMatter : Title SubTitle Authors Date Instituition Keywords Abstract Aknowledgements Toc Lof Lot ;

Title : BTITLE TEXT ENDARG  {addTitulo(&report, yylval.valS);};

SubTitle : BSTITLE TEXT ENDARG {addSTitulo(&report, yylval.valS);}
		 | {}
		 ;

Authors : Author Authors 
		| 
		;

Author : Bauthor Name AuthorOPT ENDARG {autor.nome = strdup($2);
										insertHead(report.autores,&autor);} ;

Bauthor : BAUTHOR {autor = init_Autor();};


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

Paragraph : BTEXT ;

Date : BDATE ;

Instituition : BINST TEXT ENDARG {report.inst = strdup($2); } 
			 | {report.inst = NULL;}
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
	report.autores=init(sizeof(Autor),NULL);


  	int yyres = yyparse();
  	printf("YYRES: %d\n",yyres);
  	geraHTML(&report,NULL);
  	geraLATEX(&report,NULL);
  	return 0;
}




