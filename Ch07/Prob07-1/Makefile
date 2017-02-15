CC:=gcc
CCFLAG:=-I../../include
OBJ_DIR:=../../lib

all: DequeBaseQueueMain
	
DequeBaseQueueMain : DequeBaseQueueMain.c
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/CircularQueue.c ${OBJ_DIR}/Deque.c

clean:
	rm -rf *.o
