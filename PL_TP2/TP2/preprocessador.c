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
	row.size = 0;
	return row;
}

Table init_Table(){
	Table table;
	table.rows = init(sizeof(Row),NULL);
	table.maxcolunas = 0;
	table.caption = NULL;
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


void addNegTag(Report* report ,int mode){
	//HTML
	char* html = "<b>";
		
	if(mode == BODY){
		insertTail(report->htmlCorpo,&html);
	}else{
		insertTail(report->htmlInicio,&html);
	}

	//Latex

	char* latex = "\\textbf{";
	if(mode == BODY){
		insertTail(report->latexCorpo,&latex);
	}else{
		insertTail(report->latexInicio,&latex);
	}

}


void addItTag(Report* report ,int mode){
	//HTML
	char* html = "<i>";
		
	if(mode == BODY){
		insertTail(report->htmlCorpo,&html);
	}else{
		insertTail(report->htmlInicio,&html);
	}

	//Latex

	char* latex = "\\textit{";
	if(mode == BODY){
		insertTail(report->latexCorpo,&latex);
	}else{
		insertTail(report->latexInicio,&latex);
	}

}

void addUnderTag(Report* report ,int mode){
	//HTML
	char* html = "<u>";
		
	if(mode == BODY){
		insertTail(report->htmlCorpo,&html);
	}else{
		insertTail(report->htmlInicio,&html);
	}

	//Latex

	char* latex = "\\underline{";
	if(mode == BODY){
		insertTail(report->latexCorpo,&latex);
	}else{
		insertTail(report->latexInicio,&latex);
	}

}


void fechoTag(Report* report,char* htmltag,int mode){
	//HTML
	char* html = strdup(htmltag);
	

	if(mode == BODY){
		insertTail(report->htmlCorpo,&html);
	}else{
		insertTail(report->htmlInicio,&html);
	}

	//Latex

	char* latex = "}";
	if(mode == BODY){
		insertTail(report->latexCorpo,&latex);
	}else{
		insertTail(report->latexInicio,&latex);
	}
}


void addTexto(Report* report,char* arg,int mode){
	char* linha = strdup(arg);
	//HTML
	mode==BODY?insertTail(report->htmlCorpo,&linha):insertTail(report->htmlInicio,&linha);
	//LATEX
	mode==BODY?insertTail(report->latexCorpo,&linha):insertTail(report->latexInicio,&linha);
	
}


void fechoParagrafo(Report* report,int mode){
	//HTML
	char* html = "</p>\n";
	mode==BODY?insertTail(report->htmlCorpo,&html):insertTail(report->htmlInicio,&html);
	//LATEX
	char* latex = "\\\\\n";
	mode==BODY?insertTail(report->latexCorpo,&latex):insertTail(report->latexInicio,&latex);

}


void addCapitulo(Report* report,char* arg){
	char* capitulo = strdup(arg);
	
	//HTML
	char* achtml = "<h1>";
	char* fchtml = "</h1>\n";
	char* athtml = "<a name=\"";
	char* fthtml = "\"></a>\n";

	
	insertTail(report->htmlCorpo,&achtml);
	insertTail(report->htmlCorpo,&capitulo);
	insertTail(report->htmlCorpo,&fchtml);
	insertTail(report->htmlCorpo,&athtml);
	insertTail(report->htmlCorpo,&capitulo);
	insertTail(report->htmlCorpo,&fthtml);

	IndiceCell novo;
	novo.ilabel = novo.itexto = capitulo;

	//LATEX
	char* alatex = "\\chapter{";
	char* flatex = "}\n";
	insertTail(report->latexCorpo,&alatex);
	insertTail(report->latexCorpo,&capitulo);
	insertTail(report->latexCorpo,&flatex);

}


void addTextoNF(Report* report,char * arg){
	char* codigo = strdup(arg);
	//HTML
	char* ahtmlnf = "<pre>\n";
	char* fhtmlnf = "</pre>\n";

	insertTail(report->htmlCorpo,&ahtmlnf);
	insertTail(report->htmlCorpo,&codigo);
	insertTail(report->htmlCorpo,&fhtmlnf);
	
	//LATEX
	char* alatexnf = "\\begin{verbatim}\n";
	char* flatexnf = "\\end{verbatim}\n";
	insertTail(report->latexCorpo,&alatexnf);
	insertTail(report->latexCorpo,&codigo);
	insertTail(report->latexCorpo,&flatexnf);
}


void addParagrafo(Report* report,int mode){
	//SO PRECISO PARA HTML
	char* html = "<p>\n";
	mode==BODY?insertTail(report->htmlCorpo,&html):insertTail(report->htmlInicio,&html);
}

void addCodLinha(Report* report, char* arg, int mode){
	char* codigo = strdup(arg);
	//HTML
	char* ahtml = "<code>";
	char* fhtml = "</code>\n";
	mode==BODY?insertTail(report->htmlCorpo,&ahtml):insertTail(report->htmlInicio,&ahtml);
	mode==BODY?insertTail(report->htmlCorpo,&codigo):insertTail(report->htmlInicio,&codigo);
	mode==BODY?insertTail(report->htmlCorpo,&fhtml):insertTail(report->htmlInicio,&fhtml);


	//LATEX
	char* alatex = "\\verb";
	char* flatex = "\n";
	mode==BODY?insertTail(report->latexCorpo,&alatex):insertTail(report->latexInicio,&alatex);
	mode==BODY?insertTail(report->latexCorpo,&codigo):insertTail(report->latexInicio,&codigo);
	mode==BODY?insertTail(report->latexCorpo,&flatex):insertTail(report->latexInicio,&flatex);


}


void addImagem(Report* report,Image* img){


	char* path = strdup(img->path);
	char* caption = strdup(img->caption);

	//HTML


	char* afigurehtml = "<figure>\n";
	char* ffigurehtml = "</figure>"; 	
	char* aimghtml = "<img src=\"";
	char* fimghtml = "\"/>\n";
	char* acaphtml = "<figcaption>";
	char* fcaphtml = "</figcaption>\n";
	char* athtml = "<a name=\"";
	char* fthtml = "\"></a>\n";



	insertTail(report->htmlCorpo,&athtml);
	insertTail(report->htmlCorpo,&caption);
	insertTail(report->htmlCorpo,&fthtml);
	insertTail(report->htmlCorpo,&afigurehtml);
	insertTail(report->htmlCorpo,&aimghtml);
	insertTail(report->htmlCorpo,&path);
	insertTail(report->htmlCorpo,&fimghtml);
	insertTail(report->htmlCorpo,&acaphtml);
	insertTail(report->htmlCorpo,&caption);
	insertTail(report->htmlCorpo,&fcaphtml);
	insertTail(report->htmlCorpo,&ffigurehtml);
	


	IndiceCell novo;
	novo.ilabel = novo.itexto = caption;



	//LATEX


	char* alatexfigure ="\\begin{figure}[!hbp]\n"; 
	char* includegraphics ="\\includegraphics{";
	char* flatexchavetas = "}\n";
	char* alatexcap = "\\caption{";
	char* flatexfigure = "\\end{figure}\n";

	insertTail(report->latexCorpo,&alatexfigure);
	insertTail(report->latexCorpo,&includegraphics);
	insertTail(report->latexCorpo,&path);
	insertTail(report->latexCorpo,&flatexchavetas);
	insertTail(report->latexCorpo,&alatexcap);
	insertTail(report->latexCorpo,&caption);
	insertTail(report->latexCorpo,&flatexchavetas);
	insertTail(report->latexCorpo,&flatexfigure);

	
	
}



void addItem(Report* report, char* arg){
	
	char* item = strdup(arg);


	//HTML
	char* ahtmlitem = "<li>";
	char* fhtmlitem = "</li>\n";
	insertTail(report->latexCorpo,&ahtmlitem);
	insertTail(report->latexCorpo,&item);
	insertTail(report->latexCorpo,&fhtmlitem);
	



	//LATEX
	char* latexitem = "\\item";
	char* newline = "\n";

	insertTail(report->latexCorpo,&latexitem);
	insertTail(report->latexCorpo,&item);
	insertTail(report->latexCorpo,&newline);





}

void addOrdList(Report* report){
	//HTML
	char* olhtml = "<ol>\n";
	insertTail(report->htmlCorpo,&olhtml);

	//LATEX
	char* ollatex = "\\begin{enumerate}\n";
	insertTail(report->latexCorpo,&ollatex);
}


void addItemList(Report* report){
	//HTML
	char* ulhtml = "<ul>\n";
	insertTail(report->htmlCorpo,&ulhtml);

	//LATEX
	char* ullatex = "\\begin{itemize}\n";
	insertTail(report->latexCorpo,&ullatex);
}


void addLinha(Table* tabela, Row* linha){
	Row linhacopia;
	linhacopia.size = linha->size;
	linhacopia.cells = init(sizeof(Cell),NULL);
	
	while(linha->cells->list){
		Cell* cell = pop(linha->cells);
		insertTail(linhacopia.cells,cell);
	}
	tabela->maxcolunas = tabela->maxcolunas<linha->size?linha->size:tabela->maxcolunas;
	insertTail(tabela->rows,&linhacopia);



}

void addCelula(Row* linha, Cell* cell){
	Cell celula;
	celula.pos = cell->pos;
	celula.cell = strdup(cell->cell);
	celula.dim = cell->dim;
	linha->size+=celula.dim;
	insertTail(linha->cells,&celula);
}


void addTabela(Report* report,Table* tabela){


	//INIT

	int colunas = tabela->maxcolunas;
	int dimactual = 1;
	char* caption = strdup(tabela->caption);

	//HTML

	char* athtml = "<a name=\"";
	char* fthtml = "\"></a>\n";



	insertTail(report->htmlCorpo,&athtml);
	insertTail(report->htmlCorpo,&caption);
	insertTail(report->htmlCorpo,&fthtml);
	



	char* ahtmltabela = "<table border=\"1\">\n";
	insertTail(report->htmlCorpo,&ahtmltabela);	

	//LATEX
	char* latextabela;
	char* alatextabela = "\\begin{tabular}{";
	int latexalocar = strlen(alatextabela) + 3 + 2*colunas;
	latextabela = (char*) malloc(sizeof(char)*latexalocar);
	strncat(latextabela,alatextabela,strlen(alatextabela));
	int i,j;
	for(i=strlen(alatextabela),j=0;i<latexalocar-2;i++,j++){
		if(j%2)
			latextabela[i]='l';
		else
			latextabela[i]='|';
	}
	strncat(latextabela,"}",1);
	insertTail(report->latexCorpo,&latextabela);
	char* hline = "\n\\hline\n";
	//CORPO DA TABELA	
	List* aux = tabela->rows;
	while(aux->size){
		//HTML
		char* ahtmllinha = "<tr>\n";
		insertTail(report->htmlCorpo,&ahtmllinha);

		//LATEX
		insertTail(report->latexCorpo,&hline);
		int andcount = 0;
		char* andsymbol = " & ";

		Row* rowhtml = pop(aux);
		List* aux2 = rowhtml->cells;


		while(aux2->size){
			Cell* celula = pop(aux2);
			char* sizechar = malloc(sizeof(char)*nrDigits(celula->dim));
			sprintf(sizechar,"%d",celula->dim);	
			dimactual = celula->dim;
			//HTML
			char* ahtmlcelula = "<td align=\"";
			char* htmlpos;
			switch(celula->pos){
				case 'd':{
					htmlpos = "right\" colspan=\"";
					break;
				}
				case 'e':{
					htmlpos = "left\" colspan=\"";
					break;
				}
				case 'c':{
					htmlpos = "center\" colspan=\"";
					break;
				}

			}
			char* fatagcelhtml = "\">";
			insertTail(report->htmlCorpo,&ahtmlcelula);
			insertTail(report->htmlCorpo,&htmlpos);
			insertTail(report->htmlCorpo,&sizechar);
			insertTail(report->htmlCorpo,&fatagcelhtml);
			insertTail(report->htmlCorpo,&celula->cell);
			char* fhtmlcelula = "</td>\n";
			insertTail(report->htmlCorpo,&fhtmlcelula);

			//LATEX

			char* multicolumn1 = "\\multicolumn{";
			char* multicolumn2 = "}{|";
			char* multicolumn3 = "|}{";
			char* multicolumn4 = "}";
			char* latexpos = malloc(sizeof(char)*2);
			
			char posPT2EN;
			switch(celula->pos){
				case 'e':{
					posPT2EN = 'l';
					break;
				}
				case 'd':{
					posPT2EN = 'r';
					break;
				}
				case 'c':{
					posPT2EN = 'c';
					break;
				}

			}

			latexpos[0]=posPT2EN;

			insertTail(report->latexCorpo,&multicolumn1);
			insertTail(report->latexCorpo,&sizechar);
			insertTail(report->latexCorpo,&multicolumn2);
			insertTail(report->latexCorpo,&latexpos);
			insertTail(report->latexCorpo,&multicolumn3);
			insertTail(report->latexCorpo,&celula->cell);
			insertTail(report->latexCorpo,&multicolumn4);
			andcount+=dimactual;
			if(andcount<colunas)
				insertTail(report->latexCorpo,&andsymbol);
		}

		//HTML
		char* fhtmllinha = "</tr>\n";
		insertTail(report->htmlCorpo,&fhtmllinha);

		//LATEX
		while(andcount<colunas-1){
			insertTail(report->latexCorpo,&andsymbol);
			andcount++;
		}
		char* quebra = "\\\\";
		insertTail(report->latexCorpo,&quebra);

	}
	//HTML
	char* fhtmltabela = "</table>";
	insertTail(report->htmlCorpo,&fhtmltabela);

	//LATEX
	insertTail(report->latexCorpo,&hline);

	char* alatexcap = "\\caption{";
	char* flatexcap = "}\n";
	insertTail(report->latexCorpo,&alatexcap);
	insertTail(report->latexCorpo,&caption);
	insertTail(report->latexCorpo,&flatexcap);
	char* flatextabela = "\\end{tabular}";
	insertTail(report->latexCorpo,&flatextabela);
}


int nrDigits(int value){
	if(value < 0)
		value=value*-1;
	if(value<10)
		return 1;
	else return 1 + nrDigits(value/10);
}


