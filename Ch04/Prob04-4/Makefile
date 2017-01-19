CC:=gcc
CCFLAG:=-I.
OBJ_DIR:=../../lib
LIBS:=${OBJ_DIR}/DlinkedList.c ${OBJ_DIR}/Point.c 

all: PointListSortMain
	
PointListSortMain: PointListSortMain.c 
	${CC} ${CCFLAG} -o $@ $< ${LIBS}