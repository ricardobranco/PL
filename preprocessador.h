#include "linkedlist.h"
#include "string.h"
#include "stdio.h"

typedef struct spplh
{
	char* autor;
	char* titulo;
	List* html;
	List* latex;
}PPLH;


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
