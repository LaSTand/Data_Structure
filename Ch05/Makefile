CC:=gcc
CCFLAG:=-I../include
OBJ_DIR:=../lib

all: CLinkedListMain
	
CLinkedListMain: ClinkedListMain.c 
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/ClinkedList.c

DBDLinkedListMain : DBDlinkedListMain.c
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/DBDlinkedList.c

clean:
	rm -rf *.o
