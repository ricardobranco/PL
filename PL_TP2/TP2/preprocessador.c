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
	report.autores = init(sizeof(Autor),NULL);
	report.html = init(sizeof(char*),NULL);
	report.latex = init(sizeof(char*),NULL);
	report.lindice = init(sizeof(IndiceCell),NULL);
	report.lindice_fig = init(sizeof(IndiceCell),NULL);
	report.lindice_tab = init(sizeof(IndiceCell),NULL);
	report.titulo = NULL;
	report.stitulo = NULL;
	report.inst = NULL;
	report.indice = 0;
	report.indice_tab = 0;
	report.indice_fig = 0;
	report.data = 0;
}

Image init_Image(){
	Image image;
	image.path = NULL;
	image.caption = NULL;
	return image;

}


IndiceCell init_IndiceCell(){
	IndiceCell indicecell;
	indicecell.label = NULL;
	indicecell.texto = NULL;
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
