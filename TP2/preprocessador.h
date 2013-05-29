#include "linkedlist.h"
#include "string.h"
#include "stdio.h"

typedef struct sreport
{
	List autor;
	char* titulo;
	char* stitulo;
	int indice;
	int indice_fig;
	int indice_tab;
	List* seccoes;
	List* html;
	List* latex;
}Report;

typedef struct sAUT_OPT
{
	List nident;
	List email;
	List url;
	List affil;

}AUT_OPT;

typedef struct sAutor
{
	char* author;
	AUT_OPT opt;

}Autor;


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



void addTitulo(Report*,char*);
void addSTitulo(Report*, char*);
void addAutor(Report*,char*);
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
