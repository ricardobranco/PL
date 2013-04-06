 #include "preprocessador.h"

void addTitulo(PPLH* pplh, char*arg){
	int len = strlen(arg);
	char* titulo = (char*) malloc(sizeof(char)*len+1);
	strncpy(titulo,arg,len);
	pplh->titulo=strdup(titulo);
}

void addAutor(PPLH* pplh, char*arg){
	int len = strlen(arg);
	char* autor = (char*) malloc(sizeof(char)*len+1);
	strncpy(autor,arg,len);
	pplh->autor=strdup(autor);
}

void addSeccao(PPLH* pplh,char*arg,int tamanho){
	int len = strlen(arg);
	char* seccao = (char*) malloc(sizeof(char)*len+1);
	strncpy(seccao,arg,len); 	

	//HTML
	char ahtml[4] = "<h >";
	char fhtml[6] = "</h >\n";
	char ctamanho = '0'+tamanho;
	ahtml[2]= ctamanho;
	fhtml[3]=ctamanho;
	char* shtml = (char*)malloc(sizeof(char)*len+11);
	strncat(shtml,ahtml,4);
	strncat(shtml,seccao,strlen(seccao));
	strncat(shtml,fhtml,6);
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

	char* as1 = "\\section{";
	char* as2 = "\\subsection{";
	char* as3 = "\\subsubsection{";
	char* as4 = "\\paragraph{";
	char* as5 = "\\subparagraph{";
	char* as6 = "\\subsubparagraph{";
	char* mbox = "\\mbox{}\\\\\n";
	char* fs = "}\n";
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

	slatex = (char*)malloc(sizeof(char)*len+alocar+2);
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
	char* fhref = "</a>\n";
	char* hhtml = (char*) malloc(sizeof(char)*urllen+desclen+strlen(ahref)+strlen(fhref)+3);
	strncat(hhtml,ahref,strlen(ahref));
	strncat(hhtml,args[0],urllen);
	strncat(hhtml,"\">",2);
	strncat(hhtml,desc,desclen);
	strncat(hhtml,fhref,strlen(fhref));
	insertTail(pplh->html,&hhtml);

	//LATEX
	char* hlatex=(char*) malloc(sizeof(char)*urllen+desclen+11);
	strncat(hlatex,"\\href{",6);
	strncat(hlatex,args[0],urllen);
	strncat(hlatex,"}{",2);
	strncat(hlatex,desc,desclen);
	strncat(hlatex,"}\n",2);
	insertTail(pplh->latex,&hlatex);
}

void addItem(PPLH* pplh, char* arg){
	int len =strlen(arg);	

	//HTML
	char* ihtml = (char*)malloc(sizeof(char)*len+11);
	strncat(ihtml,"<li>",4);
	strncat(ihtml,arg,len);
	strncat(ihtml,"</li>\n",6);
	insertTail(pplh->html,&ihtml);

	//LATEX
	char* ilatex = (char*)malloc(sizeof(char)*len+8);
	strncat(ilatex,"\\item ",6);
	strncat(ilatex,arg,len);
	strncat(ilatex,"\n",1);
	insertTail(pplh->latex,&ilatex);
}

void addOrdList(PPLH* pplh){
	//HTML
	char* olhtml = "<ol>\n";
	insertTail(pplh->html,&olhtml);

	//LATEX
	char* ollatex = "\\begin{enumerate}\n";
	insertTail(pplh->latex,&ollatex);
}


void addItemList(PPLH* pplh){
	//HTML
	char* ulhtml = "<ul>\n";
	insertTail(pplh->html,&ulhtml);

	//LATEX
	char* ullatex = "\\begin{itemize}\n";
	insertTail(pplh->latex,&ullatex);
}

void addEndTAG(PPLH* pplh,char* argHTML,char* argLatex){
	//HTML
	insertTail(pplh->html,&argHTML);

	//LATEX
	int latexlen = strlen(argLatex);
	char* endtaglatex = (char*)malloc(sizeof(char)*latexlen+8);
	strncat(endtaglatex,"\\end{",5);
	strncat(endtaglatex,argLatex,latexlen);
	strncat(endtaglatex,"}\n",2);
	insertTail(pplh->latex,&endtaglatex);
}

void addTextoNF(PPLH* pplh){
	//HTML
	char* htmlnf = "<pre>\n";
	insertTail(pplh->html,&htmlnf);
	//LATEX
	char* latexnf = "\\begin{verbatim}\n";
	insertTail(pplh->latex,&latexnf);
}

void addComentario(PPLH* pplh){
	//HTML
	char* chtml = "<!--\n";
	insertTail(pplh->html,&chtml); 
	//LATEX 
	char* clatex ="\\begin{comment}\n";
	insertTail(pplh->latex,&clatex);
}

void addQuebra(PPLH* pplh){
	//HTML
	char* qhtml = "<br>\n";
	insertTail(pplh->html,&qhtml);
	//LATEX
	char* qlatex = "\\\\\n";
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
	args[0] = strtok(arg,"("); //TIPO DE FORMATAÇÃO
	args[1] = strtok(NULL,")");//TEXTO A FORMATAR
	
	int len = strlen(args[1]);
	
	char* foptions = "bie";
	
	int* options = (int*)malloc(sizeof(int)*3);
	int i;

	for(i=0;i<3;i++){
		options[i]=elem(foptions[i],args[0]);
	}




	//HTML
	int nctagshtml = options[0]*7+options[1]*7+options[2]*9;
	char* formathtml = (char*)malloc(sizeof(char)*len+nctagshtml+1);
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
	insertTail(pplh->html,&formathtml);
	//LATEX
	int nctagslatex = options[0]*9 + options[1]*9 + options[2]*7;
	char* formatlatex = (char*)malloc(sizeof(char)*len+nctagslatex+1);

	for(i=0;i<3;i++){
		if(options[i]){
			switch(i){
				case 0:{
					strncat(formatlatex,"\\textbf{",8);
					break;
				}
				case 1:{
					strncat(formatlatex,"\\textit{",8);
					break;
				}
				case 2:{
					strncat(formatlatex,"\\emph{",6);
					break;
				}

			}
		}
	}

	strncat(formatlatex,args[1],len);

	for(i=0;i<3;i++){
		if(options[i])
			strncat(formatlatex,"}",1);
	}
	insertTail(pplh->latex,&formatlatex);
}

void addHTML(PPLH* pplh,char* arg){
	char* resultado = strdup(arg); //SE NÃO FIZER ESTE STRDUP ESTOU A FAZER COM QUE A LISTA LIGADA TENHA UM APONTADOR PARA O YYTEXT
	insertTail(pplh->html,&resultado);	
}

void addLATEX(PPLH* pplh,char* arg){
	char* resultado = strdup(arg); //SE NÃO FIZER ESTE STRDUP ESTOU A FAZER COM QUE A LISTA LIGADA TENHA UM APONTADOR PARA O YYTEXT
	insertTail(pplh->latex,&resultado);	
}

void addImagem(PPLH* pplh,Image* img){
	

	char* imagem = (char*)malloc(sizeof(char)*strlen(img->path));
	strncpy(imagem,img->path,strlen(img->path)-1);
	int len = strlen(imagem);
	
	float fscale = 1;
	int slen = 0;
	if(img->scale){
		fscale=atof(img->scale);
		slen=strlen(img->scale);
		img->scale=NULL;
	}
	int lencaption=0;
	char* caption;
	
	if(img->caption){
		lencaption=strlen(img->caption);
		caption=strdup(img->caption);
		img->caption=NULL;
	}

	//HTML



	char* float2string = (char*)malloc(sizeof(char)*slen+4);
	sprintf(float2string, "%.2f%%", fscale*100);
	int f2shlen = strlen(float2string);

	char* abrehtml = "<img src=\"";
	char* width = "\" width=\"";
	char* height ="\" height=\""; 
	char* fechahtml = "\"/>\n";
	
	int alocarhtml = len+2*f2shlen+strlen(abrehtml)+strlen(width)+strlen(height)+strlen(fechahtml)+1;

	char* imghtml = (char*)malloc(sizeof(char)*alocarhtml);
	strncpy(imghtml,abrehtml,strlen(abrehtml));
	strncat(imghtml,imagem,len);
	strncat(imghtml,width,strlen(width));
	strncat(imghtml,float2string,f2shlen);
	strncat(imghtml,height,strlen(height));
	strncat(imghtml,float2string,f2shlen);
	strncat(imghtml,fechahtml,strlen(fechahtml));
	
	insertTail(pplh->html,&imghtml);
	if(lencaption){
		char* abrecaphtml = "<figcaption>";
		char* fechacaphtml = "</figcaption>\n";

		int alocarcaphtml = lencaption+strlen(abrecaphtml)+strlen(fechacaphtml)+1;
		char* caphtml = (char*)malloc(sizeof(char)*alocarcaphtml);
		strncat(caphtml,abrecaphtml,strlen(abrecaphtml));
		strncat(caphtml,caption,lencaption);
		strncat(caphtml,fechacaphtml,strlen(fechacaphtml));
		insertTail(pplh->html,&caphtml);
	}


	//LATEX
	
	char* includegraphics ="\\includegraphics[scale=";
	char* opt2arg ="]{";
	sprintf(float2string, "%.2f", fscale);
	int alocar = len+strlen(includegraphics)+strlen(opt2arg)+strlen(float2string)+3;



	char* imglatex = (char*)malloc(sizeof(char)*alocar);
	strncat(imglatex,includegraphics,strlen(includegraphics));
	strncat(imglatex,float2string,strlen(float2string));
	strncat(imglatex,opt2arg,strlen(opt2arg));
	strncat(imglatex,imagem,len);
	strncat(imglatex,"}\n",2);
	insertTail(pplh->latex,&imglatex);

	if(lencaption){
		char* abrecaplatex = "\\caption{";
		char* fechacaplatex ="}\n";
		int alocarcaplatex = strlen(abrecaplatex)+strlen(fechacaplatex)+lencaption+1;
		char* caplatex = (char*)malloc(sizeof(char)*alocarcaplatex);
		strncat(caplatex,abrecaplatex,strlen(abrecaplatex));
		strncat(caplatex,caption,lencaption);
		strncat(caplatex,fechacaplatex,strlen(fechacaplatex));
		insertTail(pplh->latex,&caplatex);	
	}
}


void addModImg(PPLH* pplh){
	//HTML
	char* htmlfigure = "<figure>\n";
	insertTail(pplh->html,&htmlfigure);
	//LATEX
	char* latexfigure ="\\begin{figure}[!hbp]\n"; 
	insertTail(pplh->latex,&latexfigure);
}

void addTexto(PPLH* pplh,char* arg){
	char* linha = strdup(arg);
	//HTML
	insertTail(pplh->html,&linha);
	//LATEX
	insertTail(pplh->latex,&linha);
}

void addTabela(PPLH* pplh,Table tabela,int colunas){
	

	//INIT

		

	//HTML
	
	char* ahtmltabela = "<table border=\"1\">\n";
	insertTail(pplh->html,&ahtmltabela);	

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
	insertTail(pplh->latex,&latextabela);
	char* hline = "\n\\hline\n";
	//CORPO DA TABELA	
	List* aux = tabela.rows;
	while(aux->size){
		//HTML
		char* ahtmllinha = "<tr>";
		insertTail(pplh->html,&ahtmllinha);
		
		//LATEX
		insertTail(pplh->latex,&hline);
		int andcount = 0;
		char* andsymbol = " & ";

		Row* rowhtml = pop(aux);
		List* aux2 = rowhtml->cells;
		
				
		while(aux2->size){
			char** celula = pop(aux2);
			//HTML
			char* ahtmlcelula = "<td>";
			insertTail(pplh->html,&ahtmlcelula);
			insertTail(pplh->html,celula);
			char* fhtmlcelula = "</td>\n";
			insertTail(pplh->html,&fhtmlcelula);

			//LATEX
			insertTail(pplh->latex,celula);
			andcount++;
			if(andcount<colunas)
				insertTail(pplh->latex,&andsymbol);
		}

		//HTML
		char* fhtmllinha = "</tr>\n";
		insertTail(pplh->html,&fhtmllinha);
		
		//LATEX
		while(andcount<colunas-1){
			insertTail(pplh->latex,&andsymbol);
			andcount++;
		}
		char* quebra = "\\\\";
		insertTail(pplh->latex,&quebra);
		
	}
	//HTML
	char* fhtmltabela = "</table>";
	insertTail(pplh->html,&fhtmltabela);

	//LATEX
	insertTail(pplh->latex,&hline);
	char* flatextabela = "\\end{tabular}";
	insertTail(pplh->latex,&flatextabela);
}

void addBackSlash(PPLH* pplh){ 
	//HTML
	char* hbackshlash = "\\";
	insertTail(pplh->html,&hbackshlash);
	//LATEX
	char* lbackslash = "\\backslash";
	insertTail(pplh->latex,&lbackslash);

}

void addAnd(PPLH* pplh){
	//HTML
	char* hand = "&";
	insertTail(pplh->html,&hand);
	//LATEX
	char* land = "\\&";
	insertTail(pplh->latex,&land);
}


void addLinha(Table tabela, Row linha){
	Row linhacopia;
	linhacopia.cells = init(sizeof(char*),NULL);
	while(linha.cells->list){
		char** celula = pop(linha.cells);
		insertTail(linhacopia.cells,celula);
	}

	insertTail(tabela.rows,&linhacopia);
	

	
}

void addCelula(Row linha, char* arg){
	char* celula = strdup(arg);
	insertTail(linha.cells,&celula);


}