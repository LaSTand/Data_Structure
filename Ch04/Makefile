CC:=gcc
CCFLAG:=-I../include
OBJ_DIR:=../lib

all: DLinkedListMain DLinkedListSortMain
	
DLinkedListMain: DlinkedListMain.c 
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/DlinkedList.c

DLinkedListSortMain: DlinkedListSortMain.c 
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/DlinkedList.c

clean:
	rm -rf *.o
