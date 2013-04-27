#include "pplh.h"

void geraHTML(PPLH* pplh,char* output){


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


	if(pplh->titulo){
		fprintf(fileout,"<h1>%s</h1>\n<hr>\n",pplh->titulo);
	}
	if(pplh->autor){
		fprintf(fileout,"<address>%s</address>\n",pplh->autor);
	}
	

	if(pplh->indice){
		List* indice = pplh->seccoes;
		while(indice->list){
			char** indentrada = pop(indice);
			fprintf(fileout, "%s",*indentrada);   
		}
	}

	List* html = pplh->html;
	while(html->list){
		char** entrada = pop(html);
		fprintf(fileout,"%s",*entrada);
	}

	fprintf(fileout,"%s\n",fbody);

	fclose(fileout);


}


void geraLATEX(PPLH* pplh,char* output){
	FILE* fileout;
	if(output){
		fileout=fopen(output,"w");

	}
	else{
		fileout=fopen("output.tex","w");

	}

	char* docclass = "\\documentclass[10pt]{article}";
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

	if(pplh->titulo){
		fprintf(fileout, "\\title{%s}\n",pplh->titulo) ;
	}
	if(pplh->autor){
		fprintf(fileout, "\\author{%s}\n",pplh->autor);
	}

	char* begindoc = "\\begin{document}";
	char* maketitle = "\\maketitle";

	
	fprintf(fileout,"%s\n%s\n",begindoc,maketitle);

	char* indicelatex = "\\tableofcontents";
	if(pplh->indice)
		fprintf(fileout, "%s\n",indicelatex);


	List* latex = pplh->latex;
	while(latex->list){
		char** entrada = pop(latex);
		fprintf(fileout,"%s",*entrada);
	}

	char* enddoc = "\\end{document}";
	fprintf(fileout, "%s\n",enddoc);

	fclose(fileout);
}