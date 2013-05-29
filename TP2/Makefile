OBJS = y.tab.o lex.yy.o linkedlist.o
CC = gcc
CFLAGS = 
LIBS = -ll -ly
YACC = yacc.y
PARSER = flex.fl
FILES = flex.fl yacc.y linkedlist.c linkedlist.h makefile
OUTPUT = report


report:$(OBJS)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(OBJS) $(LIBS) -g
	#./$(OUTPUT) < Exemplo.rpt

lex.yy.c: $(PARSER)
	flex $(PARSER)

lex.yy.o: lex.yy.c y.tab.h
	$(CC) $(CFLAGS) -c lex.yy.c

y.tab.c: $(YACC)
	yacc -d -t --debug --verbose $(YACC)

y.tab.o: y.tab.c
	$(CC) $(CFLAGS) -c y.tab.c

linkedlist.o: linkedlist.c linkedList.h
	$(CC) $(CFLAGS) -c linkedlist.c	

clean:
	rm *.o
	rm $(OUTPUT)
	rm lex.yy.c
	rm y.tab.c	

install:
	cp $(OUTPUT) /usr/bin		

remove:
	rm /usr/bin/$(OUTPUT)


tar:
	mkdir $(OUTPUT)
	cp -r relatorio $(OUTPUT)/relatorio
	cp -r originals $(OUTPUT)/originals
	cp -r text $(OUTPUT)/text
	cp $(FILES) $(OUTPUT)
	tar -pczf $(OUTPUT).tar.gz $(OUTPUT)
	rm -r $(OUTPUT)