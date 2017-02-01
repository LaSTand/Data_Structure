CC:=gcc
CCFLAG:=-I../../include
OBJ_DIR:=../../lib

all: InfixCalculatorMain
	
InfixCalculatorMain: InfixCalculatorMain.c 
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/ListBaseStack.c ${OBJ_DIR}/PostCalculator.c ${OBJ_DIR}/InfixCalculator.c ${OBJ_DIR}/InfixToPostfix.c

clean:
	rm -rf *.o
