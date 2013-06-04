 #include "preprocessador.h"

//INICIALIZAÇÕES

Autor init_Autor(){
	Autor autor;
	autor.anome = NULL;
	autor.aid = NULL;
	autor.aemail = NULL;
	autor.aurl = NULL;
	autor.aaffil = NULL;
	return autor;
}

Cell init_Cell(){
	Cell cell;
	cell.dim = 1;
	cell.pos = 'e';
	cell.cell = NULL;
}

Row init_Row(){
	Row row;
	row.cells = init(sizeof(Cell),NULL);
	return row;
}

Table init_Table(){
	Table table;
	table.rows = init(sizeof(Row),NULL);
	return table;
}

Report init_Report(){
	Report report;
	report.titulo = NULL;
	report.stitulo = NULL;
	report.inst = NULL;
	report.indice = 0;
	report.indice_tab = 0;
	report.indice_fig = 0;
	report.data = 0;
	report.autores = init(sizeof(Autor),NULL);
	report.keywords = init(sizeof(char*),NULL);
	report.keywords = init(sizeof(char*),NULL);
	report.lindice_tab = init(sizeof(IndiceCell),NULL);
	report.lindice_fig = init(sizeof(IndiceCell),NULL);
	report.lindice = init(sizeof(IndiceCell),NULL);
	

	report.htmlCorpo = init(sizeof(char*),NULL);
	report.latexCorpo = init(sizeof(char*),NULL);
	report.htmlInicio = init(sizeof(char*),NULL);
	report.latexInicio = init(sizeof(char*),NULL);
	

	
}

Image init_Image(){
	Image image;
	image.path = NULL;
	image.caption = NULL;
	return image;

}


IndiceCell init_IndiceCell(){
	IndiceCell indicecell;
	indicecell.ilabel = NULL;
	indicecell.itexto = NULL;
	return indicecell;

}


Keywords init_Keywords(){
	Keywords keywords;
	keywords.keywords = init(sizeof(char*),NULL);
}

//FrontMatter

void addTitulo(Report *report, char*arg){
	char* titulo = strdup(arg);
	report->titulo=titulo;
}

void addSTitulo(Report *report, char*arg){
	char* stitulo = strdup(arg);
	report->stitulo=stitulo;
}

void addAutor(Report* report, Autor* autor){
	insertHead(report->autores,autor);
}

void addKey(Report* report, char* arg){
	char* key = strdup(arg);
	insertHead(report->keywords,&key);

}



void addRef(Report* report, char* arg1 , char* arg2 ,int mode){
	
	char* label =  strdup(arg1);
	char* texto = strdup(arg2);  


	//HTML
	char* ahref = "<a href=\"#";
	char* mhref = "\">";
	char* fhref = "</a>\n";
	if(mode == BODY){
		insertTail(report->htmlCorpo,&ahref);
		insertTail(report->htmlCorpo,&label);
		insertTail(report->htmlCorpo,&mhref);
		insertTail(report->htmlCorpo,&texto);
		insertTail(report->htmlCorpo,&fhref);
	}
	else{
		insertTail(report->htmlInicio,&ahref);
		insertTail(report->htmlInicio,&label);
		insertTail(report->htmlInicio,&mhref);
		insertTail(report->htmlInicio,&texto);
		insertTail(report->htmlInicio,&fhref);
	}



	//LATEX
		char* alref = "\\ref{";
		char* flref = "}\n";

	if(mode == BODY){
		insertTail(report->latexCorpo,&alref);
		insertTail(report->latexCorpo,&label);
		insertTail(report->latexCorpo,&flref);
		
	}
	else{
		insertTail(report->latexInicio,&ahref);
		insertTail(report->latexInicio,&label);
		insertTail(report->latexInicio,&flref);
		
	}

}


void addHRef(Report* report, char* arg1 , char* arg2 ,int mode){
	
	char* label =  strdup(arg1);
	char* texto = strdup(arg2);  


	//HTML
	char* ahref = "<a href=\"";
	char* mhref = "\">";
	char* fhref = "</a>\n";
	if(mode == BODY){
		insertTail(report->htmlCorpo,&ahref);
		insertTail(report->htmlCorpo,&label);
		insertTail(report->htmlCorpo,&mhref);
		insertTail(report->htmlCorpo,&texto);
		insertTail(report->htmlCorpo,&fhref);
	}
	else{
		insertTail(report->htmlInicio,&ahref);
		insertTail(report->htmlInicio,&label);
		insertTail(report->htmlInicio,&mhref);
		insertTail(report->htmlInicio,&texto);
		insertTail(report->htmlInicio,&fhref);
	}



	//LATEX
		char* alref = "\\ref{";
		char* mlref = "}{";
		char* flref = "}\n";

	if(mode == BODY){
		insertTail(report->latexCorpo,&alref);
		insertTail(report->latexCorpo,&label);
		insertTail(report->latexCorpo,&mlref);
		insertTail(report->latexInicio,&texto);
		insertTail(report->latexCorpo,&flref);
		
	}
	else{
		insertTail(report->latexInicio,&ahref);
		insertTail(report->latexInicio,&label);
		insertTail(report->latexInicio,&mlref);
		insertTail(report->latexInicio,&texto);
		insertTail(report->latexInicio,&flref);
		
	}

}


