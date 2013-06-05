#include "preprocessador.h"

void geraHTML(Report*,char*);
void geraLATEX(Report*,char*);
void geraData(FILE*);
void geraIndice(List*,FILE*);
void geraIndice_tab(List*,FILE*);
void geraIndice_fig(List*,FILE*);
void geraAutoresHTML(List*,FILE*);
void geraAutoresLatex(List*,FILE*);
void geraKeywords(List*,FILE*);