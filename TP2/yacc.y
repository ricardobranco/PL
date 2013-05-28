%{
#include <stdio.h>
#include <string.h>
%}

%token TEXT ERROR ENDARG NID SEP EMAIL URL ENDBLOCK BTEXT BREAK
%token BTITLE BSTITLE BAUTHOR BEMAIL BURL BAFFIL BABS BDATE BINST BKEY BAKNOW BLOF BLOT BTOC
%start Report

%union{
	char* vals;
} 

%%

Report: FrontMatter '$' {return 0;};

FrontMatter : Title SubTitle Authors Date Instituition Keywords Abstract Aknowledgements Toc Lof Lot ;

Title : BTITLE TEXT ENDARG ;

SubTitle : BSTITLE TEXT ENDARG 
		 | 
		 ;

Authors : Author Authors 
		|
		;

Author : BAUTHOR Name AuthorOPT ENDARG ;


Name : TEXT ;


AuthorOPT : SEP Nident AuthorOPT
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

ParaList : Paragraph BREAK ParaList;
		 | Paragraph ;
		 ;

Paragraph : BTEXT ;

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
	


%%

int yyerror( char *s )
{
  fprintf(stderr, "%s", s);
}

int main()
{
  int yyres = yyparse();
  printf("YYRES: %d\n",yyres);
  return 0;
}




