/*
 * Array based stack 
 */
#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"
// Stack initialization
void StackInit(Stack * pstack)
{
	pstack->topIndex = -1;	// no data
}
// Check empty
int SIsEmpty(Stack * pstack)
{
	if(pstack->topIndex == -1)
		return TRUE;
	else
		return FALSE;
}
// Push operation
void SPush(Stack * pstack, Data data)
{
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}
// Pop operation
Data SPop(Stack * pstack)
{
	int rIdx;

	if(SIsEmpty(pstack))
	{
		printf("Stack Memory Error!");
		exit(-1);
	}

	rIdx = pstack->topIndex;
	pstack->topIndex -= 1;
	// Return the data will be removed
	return pstack->stackArr[rIdx];
}
// Peek operation
Data SPeek(Stack * pstack)
{
	if(SIsEmpty(pstack))
	{
		printf("Stack Memory Error!");
		exit(-1);
	}
	// Return the data in top
	return pstack->stackArr[pstack->topIndex];
}