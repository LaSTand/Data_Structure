CC:=gcc
CCFLAG:=-I../../include
OBJ_DIR:=../../lib

all: PostCalculatorMain
	
PostCalculatorMain: PostCalculatorMain.c 
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/ListBaseStack.c ${OBJ_DIR}/PostCalculator.c

clean:
	rm -rf *.o
