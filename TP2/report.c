#include "report.h"
#include "time.h"
void geraHTML(Report* report,char* output){


	FILE* fileout;
	if(output){
		fileout=fopen(output,"w");

	}
	else{
		fileout=fopen("output.html","w");

	}

	char* ahtml = "<html>";
	char* fhtml = "</html>";
	char* abody = "<body>";
	char* fbody = "</body>";
	char* meta = "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\"/>";

			fprintf(fileout,"%s\n%s\n%s\n",ahtml,meta,abody);


	
		fprintf(fileout,"<h1>%s</h1>\n",report->titulo);
		if(report->stitulo)
			fprintf(fileout,"<h2>%s</h2>\n",report->stitulo);
		
		fprintf(fileout,"<hr>\n" );

	
	List* autores = report->autores;
	List* aux = init(sizeof(Autor),NULL);
	while(autores->size){
		Autor* autor = pop(autores);
		fprintf(fileout,"<address> %s",autor->anome);
		if(autor->aid){
			fprintf(fileout," - %s",autor->aid);
		}
		if(autor->aemail){
			fprintf(fileout," - %s",autor->aemail);
		}
		if(autor->aurl){
			fprintf(fileout," - %s",autor->aurl);
		}
		if(autor->aaffil){
			fprintf(fileout," - %s",autor->aaffil);
		}
		fprintf(fileout,"</address>\n");
		insertTail(aux,autor);
}
	report->autores = aux;	
	
	time_t timenow = time(NULL);
	struct tm tm = *localtime(&timenow);
	fprintf(fileout,"<center>%d/%d/%d</center>\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900);




	
	if(report->inst){
	////////INSTITUIÇÃO////////////////////
	fprintf(fileout, "<center>\n<h3>%s</h3></center>\n",report->inst );	

	
	}
	List* keywords = report->keywords;
	List* aux2 = init(sizeof(char*),NULL);
	if(keywords->size){
		char** key1 = pop(keywords);
		insertTail(aux2,key1);
		fprintf(fileout, "<h2>Palavras-Chave</h2>\n%s",*key1);
		while(keywords->size){
			char** key2 = pop(keywords);
			insertTail(aux2,key2);
			fprintf(fileout,";%s",*key2);
		}
	}

	report->keywords=aux2;

	List* htmlresumoagradecimentos = report->htmlInicio;
	while(htmlresumoagradecimentos->size){
		char** entrada = pop(htmlresumoagradecimentos);
		fprintf(fileout,"%s",*entrada);
	}

	
	if(report->indice){
		List* indice = report->lindice;
		fprintf(fileout, "<h2>Indice</h2>\n" );
			fprintf(fileout, "<ol>\n" );
			
		while(indice->size){
			IndiceCell* ic = pop(indice);
			fprintf(fileout, "<li><a hef=\"#%s\">%s</a></li>",ic->ilabel,ic->itexto);
			
		}
		fprintf(fileout, "</ol><br/>\n" );
			
	}

if(report->indice_fig){
		List* indice = report->lindice_fig;
		fprintf(fileout, "<h2>Lista de figuras</h2>\n" );
			fprintf(fileout, "<ol>\n" );
			
		while(indice->size){
			IndiceCell* ic = pop(indice);
			fprintf(fileout, "<li><a hef=\"#%s\">%s</a></li>",ic->ilabel,ic->itexto);
			

		}
		fprintf(fileout, "</ol><br/>\n" );
			
	}

if(report->indice_tab){
		List* indice = report->lindice_tab;
		fprintf(fileout, "<h2>Listas de tabelas</h2>\n" );
			fprintf(fileout, "<ol>\n" );
			
		while(indice->size){
			IndiceCell* ic = pop(indice);
			fprintf(fileout, "<li><a hef=\"#%s\">%s</a></li>",ic->ilabel,ic->itexto);
			

		}
		fprintf(fileout, "</ol><br/>\n" );
			
	}



	

	List* html = report->htmlCorpo;
	while(html->size){
		char** entrada = pop(html);
		
		fprintf(fileout,"%s",*entrada);
	}


	List* rodape = report->htmlFootNote;
	while(html->size){
		char** foot = pop(html);
		
		fprintf(fileout,"%s",*foot);
	}



	fprintf(fileout,"%s\n",fbody);

	fclose(fileout);


}



void geraLATEX(Report* report,char* output){
	FILE* fileout;
	if(output){
		fileout=fopen(output,"w");

	}
	else{
		fileout=fopen("output.tex","w");

	}

	char* docclass = "\\documentclass[11pt, a4paper]{report}";
	char* usepackage = "\\usepackage{graphicx, url,hyperref,verbatim}";
	char* inputenc = "\\usepackage[utf8]{inputenc}";
	char* babel = "\\usepackage[portuges]{babel}";

	char* parskip = "\\setlength{\\parskip}{1ex}";
	char* parindent = "\\setlength{\\parindent}{0ex}";
	char* secnumdepth = "\\setcounter{secnumdepth}{6}";
	char* tocdepth = "\\setcounter{tocdepth}{6}";
	char* letter = "\\makeatletter";
	
	char* subsubparagraph = "\\newcounter{subsubparagraph}[subparagraph]";
	char* renewcommand = "\\renewcommand\\thesubsubparagraph{%%";
	char* thesubparagraph = "\\thesubparagraph.\\@arabic\\c@subsubparagraph}";
	char* subsubparagraph2 = "\\newcommand\\subsubparagraph{%%";

	char* counter = "\\@startsection{subsubparagraph}    %% counter";
    char* lever = "{6} %% level";
    char* indent = "{\\parindent}                     %% indent";
    char* beforeskip = "{3.25ex \\@plus 1ex \\@minus .2ex} %% beforeskip";
    char* afterskip = "{-1em}                           %% afterskip";

    char* font = "{\\normalfont\\normalsize\\bfseries}}";
	char* subsubparagraph3 = "\\newcommand\\l@subsubparagraph{\\@dottedtocline{6}{10em}{5em}}";
	char* subsubparagraphmark = "\\newcommand{\\subsubparagraphmark}[1]{}";
	char* makeatother = "\\makeatother";

	fprintf(fileout,"%s\n%s\n%s\n%s\n",docclass,usepackage,inputenc,babel);
	fprintf(fileout,"%s\n%s\n%s\n%s\n%s\n",parskip,parindent,secnumdepth,tocdepth,letter);
	fprintf(fileout,"%s\n%s\n%s\n%s\n",subsubparagraph,renewcommand,thesubparagraph,subsubparagraph2);
	fprintf(fileout,"%s\n%s\n%s\n%s\n%s\n",counter,lever,indent,beforeskip,afterskip);
	fprintf(fileout,"%s\n%s\n%s\n%s\n",font,subsubparagraph3,subsubparagraphmark,makeatother);

	fprintf(fileout, "\\title{%s",report->titulo) ;
	
	if(report->stitulo){
		fprintf(fileout, "\\\\ \n %s",report->stitulo);
	}
	fprintf(fileout, "}\n" );
	List* autores = report->autores;
	Autor* autor = pop(autores);
	fprintf(fileout,"\\author{\n%s\n",autor->anome);
	if(autor->aid){
		fprintf(fileout,"\\\\ \\texttt{%s}\n",autor->aid);
	}
	if(autor->aemail){
		fprintf(fileout,"\\\\ \\texttt{%s}\n",autor->aemail);
	}
	if(autor->aurl){
		fprintf(fileout,"\\\\ \\texttt{%s}\n",autor->aurl);
	}
	if(autor->aaffil){
		fprintf(fileout,"\\\\ \\texttt{%s}\n",autor->aaffil);
	}
	while(autores->size){

		Autor* autor2 = pop(autores);
	fprintf(fileout,"\\and \n%s\n",autor2->anome);
	if(autor2->aid){
		fprintf(fileout,"\\\\ \\texttt{%s}\n",autor2->aid);
	}
	if(autor2->aemail){
		fprintf(fileout,"\\\\ \\texttt{%s}\n",autor2->aemail);
	}
	if(autor2->aurl){
		fprintf(fileout,"\\\\ \\texttt{%s}\n",autor2->aurl);
	}
	if(autor2->aaffil){
		fprintf(fileout,"\\\\ \\texttt{%s}\n",autor2->aaffil);
	}

	}

	fprintf(fileout, "}\n" );




	fprintf(fileout, "\\date{\\today}\n");

	char* begindoc = "\\begin{document}";
	char* maketitle = "\\maketitle";

	
	fprintf(fileout,"%s\n%s\n",begindoc,maketitle);

	List* latexInicio = report->latexInicio;
	while(latexInicio->list){
		char** entrada = pop(latexInicio);
		fprintf(fileout,"%s",*entrada);
	}


	char* indicelatex = "\\tableofcontents";
	char* indicefig = "\\listoffigures";
	char* indicetab = "\\listoftables";
	if(report->indice)
		fprintf(fileout, "%s\n",indicelatex);
	if(report->indice_fig)
		fprintf(fileout, "%s\n", indicefig );
	if(report->indice_tab)
		fprintf(fileout, "%s\n", indicetab );



	List* latex = report->latexCorpo;
	while(latex->list){
		char** entrada = pop(latex);
		fprintf(fileout,"%s",*entrada);
	}

	char* enddoc = "\\end{document}";
	fprintf(fileout, "%s\n",enddoc);

	fclose(fileout);
}




