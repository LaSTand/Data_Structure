CC:=gcc
CCFLAG:=-I../../include
OBJ_DIR:=../../lib

all: ListUseMain
	
ListUseMain: ListUseMain.c 
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/ArrayList.c

clean:
	rm -rf *.o
