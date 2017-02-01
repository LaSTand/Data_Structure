CC:=gcc
CCFLAG:=-I../include
OBJ_DIR:=../lib

all: ArrayBaseStackMain ListBaseStackMain CLLBaseStackMain
	
ArrayBaseStackMain: ArrayBaseStackMain.c 
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/ArrayBaseStack.c

ListBaseStackMain : ListBaseStackMain.c
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/ListBaseStack.c

CLLBaseStackMain : CLLBaseStackMain.c
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/CLLBaseStack.c ${OBJ_DIR}/CLinkedList.c

clean:
	rm -rf *.o
