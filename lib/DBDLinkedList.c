#include <stdio.h>
#include <stdlib.h>
#include "DBDLinkedList.h"

void ListInit(List * plist)
{	// Dummy nodes
	plist->head = (Node*)malloc(sizeof(Node));
	plist->tail = (Node*)malloc(sizeof(Node));
	// link dummys each other 
	plist->head->prev = NULL;
	plist->head->next = plist->tail;

	plist->tail->next = NULL;
	plist->tail->prev = plist->head;

	plist->numOfData = 0;
}

void LInsert(List * plist, Data data) 
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	// new node is inserted into tail of list
	newNode->prev = plist->tail->prev;
	plist->tail->prev->next = newNode;
	// newnode <-> dummy node <- tail
	newNode->next = plist->tail;
	plist->tail->prev = newNode;

	(plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata)
{	// Nothing in list
	if(plist->head->next == plist->tail)
		return FALSE;
	// cur -> NODE 
	plist->cur = plist->head->next;
	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List * plist, Data * pdata)
{	// Nothing in list
	if(plist->cur->next == plist->tail)
		return FALSE;

	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;
	return TRUE;
}

Data LRemove(List * plist)
{	// cur -> NODE <= will be removed
	Node * rpos = plist->cur;
	Data remv = rpos->data;
	// Prev node <-(removing node) -> Next node
	plist->cur->prev->next = plist->cur->next;
	plist->cur->next->prev = plist->cur->prev;
	// 'cur' move to left
	plist->cur = plist->cur->prev;

	free(rpos);
	(plist->numOfData)--;
	return remv;
}

int LCount(List * plist)
{
	return plist->numOfData;
}