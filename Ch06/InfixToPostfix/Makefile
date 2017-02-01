CC:=gcc
CCFLAG:=-I../../include
OBJ_DIR:=../../lib

all: InfixToPostfixMain
	
InfixToPostfixMain: InfixToPostfixMain.c 
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/ListBaseStack.c ${OBJ_DIR}/InfixToPostfix.c

clean:
	rm -rf *.o
