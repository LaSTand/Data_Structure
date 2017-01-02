CC:=gcc
CCFLAG:=-I.
OBJ:=ArrayList.o Point.o
TARGET:=PointListMain

all: ${TARGET}

ArrayList.o: ArrayList.c ArrayList.h
	${CC} -c ArrayList.c

Point.o: Point.c Point.h
	${CC} -c Point.c
	
${TARGET}: ${TARGET}.c $(OBJ)
	${CC} ${CCFLAG} -o $@ ${TARGET}.c ${OBJ}

.PHONY: clean
clean:
	rm *.o
