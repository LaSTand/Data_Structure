CC:=gcc
CCFLAG:=-I.
OBJ:=ArrayList.o

all: ListMain

ArrayList.o: ArrayList.c ArrayList.h
	${CC} -c ArrayList.c
	
ListMain: ListMain.c $(OBJ)
	${CC} ${CCFLAG} -o $@ ListMain.c ${OBJ}

clean:
	rm -rf *.o
