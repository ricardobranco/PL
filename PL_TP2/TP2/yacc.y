%{
#include <stdio.h>
#include <string.h>
%}


%token arg id email url sep
%token BTITLE BSTITLE BAUTHOR BURL BAFFIL BEMAIL



%union{
	char* valS;
	int valI;
} 
%start Report


%%

Report : FrontMatter '$' ;

FrontMatter : Title STitle Authores;

Title: BTITLE '(' arg ')' ;

STitle: BSTITLE '(' arg ')' ;

Authores : Authores Author 
		 | Author
		 ;
Author : BAUTHOR '(' Nome Nident Email Url Affiliation ')' ;



Nome : arg ;

Nident : sep id
	   | 
	   ;	
	   
Email : sep BEMAIL '(' email ')' 
	  |		
	  ;
Url : sep BURL '(' url ')' 
	  |	
	  ;
Affiliation : sep BAFFIL '(' arg ')' 
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



