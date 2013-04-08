#include "linkedlist.h"
#include "string.h"
#include "stdio.h"

typedef struct spplh
{
	char* autor;
	char* titulo;
	int indice;
	List* html;
	List* latex;
}PPLH;

typedef struct sImage
{
	char* scale;
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
	char pos;
	char* cell;
}Cell;



void addTitulo(PPLH*,char*);
void addAutor(PPLH*,char*);
void addSeccao(PPLH*,char*,int);
void addHRef(PPLH*,char*);
void addItem(PPLH*,char*);
void addOrdList(PPLH*);
void addItemList(PPLH*);
void addEndTAG(PPLH*,char*,char*);
void addTextoNF(PPLH*);
void addComentario(PPLH*);
void addQuebra(PPLH*);
void addFormat(PPLH*,char*);
void addHTML(PPLH*,char*);
void addLATEX(PPLH*,char*);
void addImagem(PPLH*,Image*);
void addModImg(PPLH*);
void addTexto(PPLH*,char*);
void addTabela(PPLH*,Table,int);
void addBackSlash(PPLH*);
void addAnd(PPLH*);
void addLinha(Table,Row);
void addCelula(Row,char*,char);