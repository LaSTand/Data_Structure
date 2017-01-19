CC:=gcc
CCFLAG:=-I../include
OBJ_DIR:=../lib

all: ListMain PointListMain
	
ListMain: ListMain.c 
	${CC} ${CCFLAG} -o $@ ListMain.c ${OBJ_DIR}/ArrayList.c

PointListMain: PointListMain.c
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/ArrayList.c ${OBJ_DIR}/Point.c

clean:
	rm -rf *.o
