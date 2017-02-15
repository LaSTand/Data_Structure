CC:=gcc
CCFLAG:=-I../include
OBJ_DIR:=../lib

all: CircularQueueMain ListBaseQueueMain
	
CircularQueueMain : CircularQueueMain.c
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/CircularQueue.c

ListBaseQueueMain : ListBaseQueueMain.c
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/ListBaseQueue.c

HamburgerSim : HamburgerSim.c
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/CircularQueue.c

DequeMain : DequeMain.c
	${CC} ${CCFLAG} -o $@ $< ${OBJ_DIR}/Deque.c

clean:
	rm -rf *.o
