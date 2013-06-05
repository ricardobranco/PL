OBJS = y.tab.o lex.yy.o linkedlist.o preprocessador.o report.o
CC = gcc
CFLAGS = -g
LIBS = -ll -ly
YACC = yacc.y
PARSER = flex.fl
FILES = flex.fl yacc.y linkedlist.c linkedlist.h makefile report.c report.h preprocessador.c preprocessador.h
OUTPUT = report


report:$(OBJS)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(OBJS) $(LIBS) 
	
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

report.o: report.c report.h
	$(CC) $(CFLAGS) -c report.c

preprocessador.o: preprocessador.c preprocessador.h
	$(CC) $(CFLAGS) -c preprocessador.c

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