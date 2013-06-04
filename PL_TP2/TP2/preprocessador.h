#include "linkedlist.h"
#include "string.h"
#include "stdio.h"

typedef struct sreport
{
	
	char* titulo;
	char* stitulo;
	char* inst;
	int indice;
	int indice_fig;
	int indice_tab;
	int data;
	
	List* autores;
	List* keywords;
	List* lindice_tab;
	List* lindice_fig;
	List* lindice;

	List* html;
	List* latex;
	 
}Report;

typedef struct sAutor
{
	char* anome;
	char* aid;
	char* aemail;
	char* aurl;
	char* aaffil;
	
}Autor;

typedef struct sKeywords
{
	List* keywords;
}Keywords;

typedef struct sImage
{
	char* path;
	char* caption;
}Image;

typedef struct stabel
{
	List* rows;
}Table;

typedef struct sRow
{
	List* cells;	
}Row;

typedef struct sCell
{
	int dim; //Dimensao da celula
	char pos; //Cento Esquerda ou Direita
	char* cell;
}Cell;


typedef struct sIndiceCell
{
	char* label;
	char* texto;

}IndiceCell;


//INICIALIZAÇÕES
Autor init_Autor();
Cell init_Cell();
Row init_Row();
Table init_Table();
Image init_Image();
IndiceCell init_IndiceCell();
Image init_Image();
Keywords init_Keywords();
Report init_Report();
//FrontMatter
void addTitulo(Report*,char*);
void addSTitulo(Report*, char*);
void addAutor(Report*,Autor*);

void addData(Report*);
void addSeccao(Report*,char*,int,int);
void addHRef(Report*,char*);
void addItem(Report*,char*);
void addOrdList(Report*);
void addItemList(Report*);
void addEndTAG(Report*,char*,char*);
void addTextoNF(Report*);
void addComentario(Report*);
void addQuebra(Report*);
void addFormat(Report*,char*);
void addHTML(Report*,char*);
void addLATEX(Report*,char*);
void addImagem(Report*,Image*);
void addModImg(Report*);
void addTexto(Report*,char*);
void addTabela(Report*,Table,int);
void addBackSlash(Report*);
void addAnd(Report*);
void addLinha(Table,Row);
void addCelula(Row,char*,char);
void addIndice(Report*,int,char*);
void addIndList(Report*);
void addIndFecho(Report*);
void addData(Report*);