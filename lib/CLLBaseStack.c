/*
 * Circular linked list based stack
 */
#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"
#include "CLLBaseStack.h"
// Stack initialization
void StackInit(Stack * pstack)
{
	pstack->plist = (List*)malloc(sizeof(List));
	ListInit(pstack->plist);
}
// Check stack
int SIsEmpty(Stack * pstack)
{
	if(LCount(pstack->plist)==0)
		return TRUE;
	else
		return FALSE;
}
// Push data
void SPush(Stack * pstack, Data data)
{
	LInsertFront(pstack->plist, data);
}
// Pop data
Data SPop(Stack * pstack)
{
	Data data;
	LFirst(pstack->plist, &data);
	LRemove(pstack->plist);
	return data;
}
// Peek data
Data SPeek(Stack * pstack)
{
	Data data;
	LFirst(pstack->plist, &data);
	return data;
}