CC:=gcc
CCFLAG:=-I.
#OBJ:=ArrayList.o NameCard.o
TARGET:=DLinkedListSortMain
LIBS:=DLinkedList.c

all: ${TARGET}

${TARGET}: ${TARGET}.c $(LIBS)
	${CC} ${CCFLAG} -o $@ ${TARGET}.c ${LIBS}

clean:
	rm $(OBJ)
