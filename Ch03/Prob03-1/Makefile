CC:=gcc
CCFLAG:=-I.
OBJ:=ArrayList.o
TARGET:=ListUseMain

all: ${TARGET}

ArrayList.o: ArrayList.c ArrayList.h
	${CC} -c ArrayList.c
	
${TARGET}: ${TARGET}.c $(OBJ)
	${CC} ${CCFLAG} -o $@ ${TARGET}.c ${OBJ}

clean:
	rm -rf *.o
