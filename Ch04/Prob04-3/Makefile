CC:=gcc
CCFLAG:=-I../../include
OBJ_DIR:=../../lib
LIBS:=${OBJ_DIR}/DlinkedList.c ${OBJ_DIR}/Point.c 

all: PointListMain
	
PointListMain: PointListMain.c 
	${CC} ${CCFLAG} -o $@ $< ${LIBS}