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
	int len =strlen(arg);	

	//HTML
	char* ihtml = (char*)malloc(sizeof(char)*len+10);
	strncat(ihtml,"<li>",4);
	strncat(ihtml,arg,len);
	strncat(ihtml,"</li>",5);
	insertTail(pplh->html,&ihtml);

	//LATEX
	char* ilatex = (char*)malloc(sizeof(char)*len+7);
	strncat(ilatex,"\\item ",6);
	strncat(ilatex,arg,len);
	insertTail(pplh->latex,&ilatex);
}

void addOrdList(PPLH* pplh){
	//HTML
	char* olhtml = "<ol>";
	insertTail(pplh->html,&olhtml);

	//LATEX
	char* ollatex = "\\begin{enumerate}";
	insertTail(pplh->latex,&ollatex);
}


void addItemList(PPLH* pplh){
	//HTML
	char* ulhtml = "<ul>";
	insertTail(pplh->html,&ulhtml);

	//LATEX
	char* ullatex = "\\begin{itemize}";
	insertTail(pplh->latex,&ullatex);
}

void addEndTAG(PPLH* pplh,char* argHTML,char* argLatex){
	//HTML
	int htmllen = strlen(argHTML);
	char* endtaghtml = (char*)malloc(sizeof(char)*htmllen+4);
	strncpy(endtaghtml,"</\0",3);
	strncat(endtaghtml,argHTML,htmllen);
	strncat(endtaghtml,">",1);
	insertTail(pplh->html,&endtaghtml);

	//LATEX
	int latexlen = strlen(argLatex);
	char* endtaglatex = (char*)malloc(sizeof(char)*latexlen+7);
	strncat(endtaglatex,"\\end{",5);
	strncat(endtaglatex,argLatex,latexlen);
	strncat(endtaglatex,"}",1);
	insertTail(pplh->latex,&endtaglatex);
}

void addTextoNF(PPLH* pplh){
	//HTML
	char* htmlnf = "<pre>";
	insertTail(pplh->html,&htmlnf);
	//LATEX
	char* latexnf = "\\begin{verbatim}";
	insertTail(pplh->html,&latexnf);
}

void addComentario(PPLH* pplh){
	//HTML
	char* chtml = "<!-->";
	insertTail(pplh->html,&chtml); 
	//LATEX 
	char* clatex ="\\begin{comment}";
	insertTail(pplh->latex,&clatex);
}

void addQuebra(PPLH* pplh){
	//HTML
	char* qhtml = "<br>";
	insertTail(pplh->html,&qhtml);
	//LATEX
	char* qlatex = "\\\\";
	insertTail(pplh->latex,&qlatex);
}

int elem(char c,char* arg){
	int flag=0;
	int i;
	for(i=0;i<strlen(arg)&&flag==0;i++){
		if(arg[i]==c)
			flag=1;
	}
	return flag;
}



void addFormat(PPLH* pplh,char* arg){
	char* args[2];
	args[0] = strtok(arg,"{"); //TIPO DE FORMATAÇÃO
	args[1] = strtok(NULL,"}");//TEXTO A FORMATAR
	int len = strlen(args[1]);
	char* foptions = "bie";
	int* options = (int*)malloc(sizeof(int)*3);
	int i;

	for(i=0;i<3;i++){
		options[i]=elem(foptions[i],args[0]);
	}




	//HTML
	int nctags = options[0]*7+options[1]*7+options[2]*9;
	char* formathtml = (char*)malloc(sizeof(char)*len+nctags+1);
	for(i=0;i<3;i++){
		if(options[i]){
			switch(i){
				case 0:{
					strncat(formathtml,"<b>",3);
					break;
				}
				case 1:{
					strncat(formathtml,"<i>",3);
					break;
				}
				case 2:{
					strncat(formathtml,"<em>",4);
					break;
				}

			}
		}
	}

	strncat(formathtml,args[1],len);

	for(i=2;i>=0;i--){
		if(options[i]){
			switch(i){
				case 0:{
					strncat(formathtml,"</b>",4);
					break;
				}
				case 1:{
					strncat(formathtml,"</i>",4);
					break;
				}
				case 2:{
					strncat(formathtml,"</em>",5);
					break;
				}

			}
		}
	}

	printf("%s\n",formathtml);






}

