#include "preprocessador.h"

void addTitulo(PPLH* pplh, char*arg){
	int len = strlen(arg)-1;
	char* titulo = (char*) malloc(sizeof(char)*len);
	strncpy(titulo,arg,len);
	pplh->titulo=strdup(titulo);
}

void addAutor(PPLH* pplh, char*arg){
	int len = strlen(arg)-1;
	char* autor = (char*) malloc(sizeof(char)*len);
	strncpy(autor,arg,len);
	pplh->autor=strdup(autor);
}

void addSeccao(PPLH* pplh,char*arg,int tamanho){
	int len = strlen(arg)-1;
	char* seccao = (char*) malloc(sizeof(char)*len);
	strncpy(seccao,arg,len); 	

	//HTML
	char ahtml[5] = "<h >\0";
	char fhtml[6] = "</h >\0";
	char ctamanho = '0'+tamanho;
	ahtml[2]= ctamanho;
	fhtml[3]=ctamanho;
	char* shtml = (char*)malloc(sizeof(char)*len+10);
	strncat(shtml,ahtml,4);
	strncat(shtml,seccao,strlen(seccao));
	strncat(shtml,fhtml,5);
	insertTail(pplh->html,&shtml);

	//LATEX
	/*
	SECÇÃO LVL1 -> /section{}
	SECÇÃO LVL2 -> /subsection{}
	SECÇÃO LVL3 -> /subsubsection{}
	SECÇÃO LVL4 -> /paragraph{}\mbox{}\\
	SECÇÃO LVL5 -> /subparagraph{}\mbox{}\\
	SECÇÃO LVL6 -> /subsubparagraph{}\mbox{}\\

	evitar erro "there's no line here to end" -> \mbox{}\\  
	*/

	char* as1 = "/section{";
	char* as2 = "/subsection{";
	char* as3 = "/subsubsection{";
	char* as4 = "/paragraph{";
	char* as5 = "/subparagraph{";
	char* as6 = "/subsubparagraph{";
	char* mbox = "\\mbox{}\\\\";
	char* fs = "}";
	char* slatex;
	int alocar;
	switch(tamanho){
		case 1:{
			alocar=strlen(as1)+1;
			break;
		}
		case 2:{
			alocar=strlen(as2)+1;
			break;
		}
		case 3:{
			alocar=strlen(as3)+1;
			break;
		}
		case 4:{
			alocar=strlen(as4)+1+strlen(mbox);
			break;
		}
		case 5:{
			alocar=strlen(as5)+1+strlen(mbox);
			break;
		}
		case 6:{
			alocar=strlen(as6)+1+strlen(mbox);
			break;
		}
	}

	slatex = (char*)malloc(sizeof(char)*len+alocar+1);
	switch(tamanho){
		case 1:{
			strncat(slatex,as1,strlen(as1));
			break;
		}
		case 2:{
			strncat(slatex,as2,strlen(as2));
			break;
		}
		case 3:{
			strncat(slatex,as3,strlen(as3));
			break;
		}
		case 4:{
			strncat(slatex,as4,strlen(as4));
			break;
		}
		case 5:{
			strncat(slatex,as5,strlen(as5));
			break;
		}
		case 6:{
			strncat(slatex,as6,strlen(as6));
			break;
		}
	}

	strncat(slatex,seccao,len);
	strncat(slatex,fs,strlen(fs));
	if(tamanho>3)
		strncat(slatex,mbox,strlen(mbox));

	insertTail(pplh->latex,&slatex);
}


void addHRef(PPLH* pplh, char* arg){
	char* args[2];
	args[0] = strtok(arg,",");
	args[1] = strtok(NULL,",");
	int urllen = strlen(args[0]);
	int desclen = strlen(args[1])-1;
	char* desc = (char*)malloc(sizeof(char)*desclen);
	strncpy(desc,args[1],desclen);
	
	//HTML
	char* ahref = "<a href=\"";
	char* fhref = "</a>";
	char* hhtml = (char*) malloc(sizeof(char)*urllen+desclen+strlen(ahref)+strlen(fhref)+3);
	strncat(hhtml,ahref,strlen(ahref));
	strncat(hhtml,args[0],urllen);
	strncat(hhtml,"\">",2);
	strncat(hhtml,desc,desclen);
	strncat(hhtml,fhref,strlen(fhref));
	insertTail(pplh->html,&hhtml);

	//LATEX
	char* hlatex=(char*) malloc(sizeof(char)*urllen+desclen+10);
	strncat(hlatex,"\\href{",6);
	strncat(hlatex,args[0],urllen);
	strncat(hlatex,"}{",2);
	strncat(hlatex,desc,desclen);
	strncat(hlatex,"}",1);
	insertTail(pplh->latex,&hlatex);
}

void addItem(PPLH* pplh, char* arg){
	
}







