%{
#include <stdio.h>
#include <string.h>
%}

%token STRING EMAIL URL

%start Report


%%

Report : FrontMatter Body BackMatter;

FrontMatter : Title SubTitle Authors Date Institution Keywords Abstract Aknowledgements Toc Loc Lot;

Title : STRING;

SubTitle : STRING
		 | ;

Authors : Authors Author
		| Author
		| ;			 

Author : Name Nident Email Url Affiliation ;

Name : STRING ;

/*Nident ?*/  

Email : EMAIL ;

Url : URL ;

/*Affiliation?*/


Date: Dia Mes Ano;








%%