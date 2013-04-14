OBJS = linkedList.o lex.yy.o preprocessador.o pplh.o
CC = gcc
CFLAGS = -g
LIBS = -ll
PARSER = parser.fl
FILES = linkedList.c parser.fl linkedList.h Makefile preprocessador.h preprocessador.c pplh.h pplh.c pplh.1.gz


pplh:$(OBJS)
	$(CC) $(CFLAGS) -o pplh $(OBJS) $(LIBS) 


pplh.o:pplh.c pplh.h
	$(CC) $(CFLAGS) -c pplh.c


linkedList.o:linkedList.c linkedList.h
	$(CC) $(CFLAGS) -c linkedList.c

preprocessador.o:preprocessador.c preprocessador.h linkedlist.h
	$(CC) $(CFLAGS) -c preprocessador.c

lex.yy.c:$(PARSER)
	flex $(PARSER)

lex.yy.o:lex.yy.c linkedlist.h preprocessador.h pplh.h
	$(CC) $(CFLAGS) -c lex.yy.c

clean:
	rm *.o
	rm lex.yy.c
	rm pplh

install:
	cp pplh /usr/bin
	cp pplh.1.gz /usr/share/man/man1
	rm *.o
	rm pplh
remove:
	rm /usr/bin/pplh

debug::$(OBJS)
	$(CC) $(CFLAGS) -o pplh $(OBJS) $(LIBS) -g

tar:
	mkdir pplh
	cp $(FILES) pplh
	tar -pczf pplh.tar.gz pplh
	rm -r pplh

info:
	@echo "to compile, just run \"make\""
	@echo "\"make clean\" deletes all object files"
	@echo "\"make install\" puts the executable file in the PATH (needs sudo)"
	@echo "\"make remove\" removes the executable from the PATH (needs sudo)"
	@echo "\"make tar\" compresses every file necessary for the build in a tar.gz file"