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
}

	
	time_t timenow = time(NULL);
	struct tm tm = *localtime(&timenow);
	fprintf(fileout,"<center>%d/%d/%d</center>\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900);

	
	if(report->inst){
	////////INSTITUIÇÃO////////////////////
	fprintf(fileout, "<center>\n<h3>%s</h3></center>\n",report->inst );	

	
	}


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

	char* docclass = "\\documentclass[11pt, a4paper, oneside]";
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

	fprintf(fileout, "\\title{%s}\n",report->titulo) ;
	
	if(report->stitulo){
		fprintf(fileout, "\\subtitle{%s}\n",report->stitulo);
	}

	//geraAutoresLatex(report->autores,fileout);
	fprintf(fileout, "\\frontmatter" );	
	fprintf(fileout, "\\date{\\today}\n");

	char* begindoc = "\\begin{document}";
	char* maketitle = "\\maketitle";

	
	fprintf(fileout,"%s\n%s\n",begindoc,maketitle);

	char* indicelatex = "\\tableofcontents";
	char* indicefig = "\\listoffigures";
	char* indicetab = "\\listoftables";
	if(report->indice)
		fprintf(fileout, "%s\n",indicelatex);
	if(report->indice_fig)
		fprintf(fileout, "%s\n", indicefig );
	if(report->indice_tab)
		fprintf(stderr, "%s\n", indicetab );



	fprintf(fileout, "\\mainmatter\n");
	List* latex = report->latexCorpo;
	while(latex->list){
		char** entrada = pop(latex);
		fprintf(fileout,"%s",*entrada);
	}

	char* enddoc = "\\end{document}";
	fprintf(fileout, "%s\n",enddoc);

	fclose(fileout);
}

char* get_time(){
    
    char *data=(char*)malloc(sizeof(char)*11);
	time_t rawtime = time(NULL);
    struct tm tm = *localtime(&rawtime);
    sprintf(data,"%d/%d/%d",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900);
    
    return data;
}


