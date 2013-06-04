#include "linkedlist.h"
#include "string.h"
#include "stdio.h"


#define FRONTMATTER 1
#define BODY 2

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

	List* htmlCorpo;
	List* htmlInicio;
    
    List* htmlFootNote;

	List* latexCorpo;
	List* latexInicio;
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
	int maxcolunas;
	char* caption;
}Table;

typedef struct sRow
{
	List* cells;
	int size ;	
}Row;

typedef struct sCell
{
	int dim; //Dimensao da celula
	char pos; //Cento Esquerda ou Direita
	char* cell;
}Cell;


typedef struct sIndiceCell
{
	char* ilabel;
	char* itexto;

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
void addKey(Report*,char*);


//Body
void addRef(Report*,char*, char*,int);
void addHRef(Report*,char*,char*,int);
void addNegTag(Report*,int);
void addItTag(Report*,int);
void addUnderTag(Report*,int);
void fechoTag(Report*,char*,int);
void addTexto(Report*,char*,int);
void fechoParagrafo(Report*,int);
void addCapitulo(Report*,char*);
void addParagrafo(Report*,int);
void addEndTAG(Report*,char*,char*);
void addTextoNF(Report*,char*);
void addCodLinha(Report*,char*,int);
void addImagem(Report*,Image*);
void addItem(Report*,char*);
void addOrdList(Report*);
void addItemList(Report*);
void fechaOrdList(Report*);
void fechaItemList(Report*);
void addCelula(Row*,Cell*);
void addLinha(Table*,Row*);
void addTabela(Report*,Table*);
void addSeccao(Report*,char*,int);
void addResumo(Report*);
void addAgradecimentos(Report*);
void fechoResumo(Report*);
void fechoAgradecimentos(Report*);










void addData(Report*); //TEM QUE ESTAR NO REPORT.C/H