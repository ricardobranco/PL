 #include "preprocessador.h"

void addTitulo(Report *report, char*arg){
	int len = (int)strlen(arg);
	char* titulo = (char*) malloc(sizeof(char)*len+1);
	strncpy(titulo,arg,len);
	report->titulo=strdup(titulo);
}

void addSTitulo(Report *report, char*arg){
	int len = (int)strlen(arg);
	char* stitulo = (char*) malloc(sizeof(char)*len+1);
	strncpy(stitulo,arg,len);
	report->stitulo=strdup(stitulo);
}

void addAutor(Report* report, char*arg){
	int len = (int)strlen(arg);
	//strncpy(autor,arg,len);
	//report->autor=strdup(arg);
}

void init_Aut(Report *report, char* autor){
	Autor aut;
    aut.author=strdup(autor);
	insertHead(&report->autor,&aut);
}

int nrDigits(int value){
	if(value < 0)
		value=value*-1;
	if(value<10)
		return 1;
	else return 1 + nrDigits(value/10);
}



void addSeccao(Report* report,char*arg,int tamanho,int count){
	int len = strlen(arg);
	char* seccao = (char*) malloc(sizeof(char)*len+1);
	strncpy(seccao,arg,len); 	


	//HTML
	
	addIndice(report,count,seccao);




	char ahtml[4] = "<h >";
	char fhtml[6] = "</h >\n";
	char ctamanho = '0'+tamanho;
	ahtml[2]= ctamanho;
	fhtml[3]=ctamanho;
	char* shtml = (char*)malloc(sizeof(char)*len+11);
	strncat(shtml,ahtml,4);
	strncat(shtml,seccao,strlen(seccao));
	strncat(shtml,fhtml,6);
	insertTail(report->html,&shtml);
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

	insertTail(report->latex,&slatex);
 }


void addHRef(Report* report, char* arg){
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
	insertTail(report->html,&hhtml);

	//LATEX
	char* hlatex=(char*) malloc(sizeof(char)*urllen+desclen+11);
	strncat(hlatex,"\\href{",6);
	strncat(hlatex,args[0],urllen);
	strncat(hlatex,"}{",2);
	strncat(hlatex,desc,desclen);
	strncat(hlatex,"}\n",2);
	insertTail(report->latex,&hlatex);
}

void addItem(Report* report, char* arg){
	int len =strlen(arg);	

	//HTML
	char* ihtml = (char*)malloc(sizeof(char)*len+11);
	strncat(ihtml,"<li>",4);
	strncat(ihtml,arg,len);
	strncat(ihtml,"</li>\n",6);
	insertTail(report->html,&ihtml);

	//LATEX
	char* ilatex = (char*)malloc(sizeof(char)*len+8);
	strncat(ilatex,"\\item ",6);
	strncat(ilatex,arg,len);
	strncat(ilatex,"\n",1);
	insertTail(report->latex,&ilatex);
}

void addOrdList(Report* report){
	//HTML
	char* olhtml = "<ol>\n";
	insertTail(report->html,&olhtml);

	//LATEX
	char* ollatex = "\\begin{enumerate}\n";
	insertTail(report->latex,&ollatex);
}


void addItemList(Report* report){
	//HTML
	char* ulhtml = "<ul>\n";
	insertTail(report->html,&ulhtml);

	//LATEX
	char* ullatex = "\\begin{itemize}\n";
	insertTail(report->latex,&ullatex);
}

void addEndTAG(Report* report,char* argHTML,char* argLatex){
	//HTML
	insertTail(report->html,&argHTML);

	//LATEX
	int latexlen = strlen(argLatex);
	char* endtaglatex = (char*)malloc(sizeof(char)*latexlen+8);
	strncat(endtaglatex,"\\end{",5);
	strncat(endtaglatex,argLatex,latexlen);
	strncat(endtaglatex,"}\n",2);
	insertTail(report->latex,&endtaglatex);
}

void addTextoNF(Report* report){
	//HTML
	char* htmlnf = "<pre>\n";
	insertTail(report->html,&htmlnf);
	//LATEX
	char* latexnf = "\\begin{verbatim}\n";
	insertTail(report->latex,&latexnf);
}

void addComentario(Report* report){
	//HTML
	char* chtml = "<!--\n";
	insertTail(report->html,&chtml); 
	//LATEX 
	char* clatex ="\\begin{comment}\n";
	insertTail(report->latex,&clatex);
}

void addQuebra(Report* report){
	//HTML
	char* qhtml = "<br>\n";
	insertTail(report->html,&qhtml);
	//LATEX
	char* qlatex = "\\\\\n";
	insertTail(report->latex,&qlatex);
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


void addFormat(Report* report,char* arg){
	
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
	insertTail(report->html,&formathtml);
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
	insertTail(report->latex,&formatlatex);
}

void addHTML(Report* report,char* arg){
	char* resultado = strdup(arg); //SE NÃO FIZER ESTE STRDUP ESTOU A FAZER COM QUE A LISTA LIGADA TENHA UM APONTADOR PARA O YYTEXT
	insertTail(report->html,&resultado);	
}

void addLATEX(Report* report,char* arg){
	char* resultado = strdup(arg); //SE NÃO FIZER ESTE STRDUP ESTOU A FAZER COM QUE A LISTA LIGADA TENHA UM APONTADOR PARA O YYTEXT
	insertTail(report->latex,&resultado);	
}

void addImagem(Report* report,Image* img){
	

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
	sprintf(float2string, "%.2f", fscale*100);
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
	
	insertTail(report->html,&imghtml);
	if(lencaption){
		char* abrecaphtml = "<figcaption>";
		char* fechacaphtml = "</figcaption>\n";

		int alocarcaphtml = lencaption+strlen(abrecaphtml)+strlen(fechacaphtml)+1;
		char* caphtml = (char*)malloc(sizeof(char)*alocarcaphtml);
		strncat(caphtml,abrecaphtml,strlen(abrecaphtml));
		strncat(caphtml,caption,lencaption);
		strncat(caphtml,fechacaphtml,strlen(fechacaphtml));
		insertTail(report->html,&caphtml);
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
	insertTail(report->latex,&imglatex);

	if(lencaption){
		char* abrecaplatex = "\\caption{";
		char* fechacaplatex ="}\n";
		int alocarcaplatex = strlen(abrecaplatex)+strlen(fechacaplatex)+lencaption+1;
		char* caplatex = (char*)malloc(sizeof(char)*alocarcaplatex);
		strncat(caplatex,abrecaplatex,strlen(abrecaplatex));
		strncat(caplatex,caption,lencaption);
		strncat(caplatex,fechacaplatex,strlen(fechacaplatex));
		insertTail(report->latex,&caplatex);	
	}
}


void addModImg(Report* report){
	//HTML
	char* htmlfigure = "<figure>\n";
	insertTail(report->html,&htmlfigure);
	//LATEX
	char* latexfigure ="\\begin{figure}[!hbp]\n"; 
	insertTail(report->latex,&latexfigure);
}

void addTexto(Report* report,char* arg){
	char* linha = strdup(arg);
	//HTML
	insertTail(report->html,&linha);
	//LATEX
	insertTail(report->latex,&linha);
}

void addTabela(Report* report,Table tabela,int colunas){
	

	//INIT

		

	//HTML
	
	char* ahtmltabela = "<table border=\"1\">\n";
	insertTail(report->html,&ahtmltabela);	

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
	insertTail(report->latex,&latextabela);
	char* hline = "\n\\hline\n";
	//CORPO DA TABELA	
	List* aux = tabela.rows;
	while(aux->size){
		//HTML
		char* ahtmllinha = "<tr>\n";
		insertTail(report->html,&ahtmllinha);
		
		//LATEX
		insertTail(report->latex,&hline);
		int andcount = 0;
		char* andsymbol = " & ";

		Row* rowhtml = pop(aux);
		List* aux2 = rowhtml->cells;
		
				
		while(aux2->size){
			Cell* celula = pop(aux2);

			//HTML
			char* ahtmlcelula = "<td align=\"";
			char* htmlpos;
			switch(celula->pos){
				case 'r':{
					htmlpos = "right\">";
					break;
				}
				case 'l':{
					htmlpos = "left\">";
					break;
				}
				case 'c':{
					htmlpos = "center\">";
					break;
				}
				
			}
			insertTail(report->html,&ahtmlcelula);
			insertTail(report->html,&htmlpos);
			insertTail(report->html,&celula->cell);
			char* fhtmlcelula = "</td>\n";
			insertTail(report->html,&fhtmlcelula);

			//LATEX
			
			char* multicolumn1 = "\\multicolumn{1}{|";
			char* multicolumn2 = "|}{";
			char* multicolumn3 = "}";
			char* latexpos = malloc(sizeof(char)*2);
			latexpos[0]=celula->pos;

			insertTail(report->latex,&multicolumn1);
			insertTail(report->latex,&latexpos);
			insertTail(report->latex,&multicolumn2);
			insertTail(report->latex,&celula->cell);
			insertTail(report->latex,&multicolumn3);
			andcount++;
			if(andcount<colunas)
				insertTail(report->latex,&andsymbol);
		}

		//HTML
		char* fhtmllinha = "</tr>\n";
		insertTail(report->html,&fhtmllinha);
		
		//LATEX
		while(andcount<colunas-1){
			insertTail(report->latex,&andsymbol);
			andcount++;
		}
		char* quebra = "\\\\";
		insertTail(report->latex,&quebra);
		
	}
	//HTML
	char* fhtmltabela = "</table>";
	insertTail(report->html,&fhtmltabela);

	//LATEX
	insertTail(report->latex,&hline);
	char* flatextabela = "\\end{tabular}";
	insertTail(report->latex,&flatextabela);
}

void addBackSlash(Report* report){ 
	//HTML
	char* hbackshlash = "\\";
	insertTail(report->html,&hbackshlash);
	//LATEX
	char* lbackslash = "\\textbackslash";
	insertTail(report->latex,&lbackslash);

}

void addAnd(Report* report){
	//HTML
	char* hand = "&";
	insertTail(report->html,&hand);
	//LATEX
	char* land = "\\&";
	insertTail(report->latex,&land);
}


void addLinha(Table tabela, Row linha){
	Row linhacopia;
	linhacopia.cells = init(sizeof(Cell),NULL);
	while(linha.cells->list){
		char* celula = pop(linha.cells);
		insertTail(linhacopia.cells,celula);
	}

	insertTail(tabela.rows,&linhacopia);
	

	
}

void addCelula(Row linha, char* arg,char pos){
	Cell celula;
	celula.pos = pos;
	celula.cell = strdup(arg);
	insertTail(linha.cells,&celula);
}

void addIndice(Report* report, int nseccao, char* arg){

	char* seccao = strdup(arg);

	int nrDigitsalocar = 2 + nrDigits(nseccao); //2 => \0 + sinal
	
	char* taghtml = (char*) malloc(sizeof(char)*nrDigitsalocar);
	sprintf(taghtml,"%d",nseccao);
	char* ataghtml = "<a name = \"";
	char* ftaghtml = "\"></a>\n";
	insertTail(report->html,&ataghtml);
	insertTail(report->html,&taghtml);
	insertTail(report->html,&ftaghtml);

	char* aind = "<li><a href=\"#";
	char* mind = "\">";
	char* find = "</a></li>\n";

	insertTail(report->seccoes,&aind);
	insertTail(report->seccoes,&taghtml);
	insertTail(report->seccoes,&mind);
	insertTail(report->seccoes,&seccao);
	insertTail(report->seccoes,&find);

}

void addIndList(Report* report){
	char* ol = "<ol>\n";
	insertTail(report->seccoes,&ol);
}

void addIndFecho(Report* report){
	char* col = "</ol>\n";
	insertTail(report->seccoes,&col);
}

