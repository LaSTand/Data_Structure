CC:=gcc
CCFLAG:=-I.
OBJ_DIR:=../../lib

all: NightDutyMain
	
NightDutyMain: NightDutyMain.c 
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/ClinkedList.c

#DLinkedListSortMain: DlinkedListSortMain.c 
#	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/DlinkedList.c

clean:
	rm -rf *.o
