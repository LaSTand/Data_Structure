/*
 * Deque
 * Double-ended queue
 */
#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"
// Deque initialization
void DequeInit(Deque * pdeq)
{
	pdeq->head = NULL;
	pdeq->tail = NULL;
}
// Check empty
int DQIsEmpty(Deque * pdeq)
{
	if(pdeq->head == NULL)
		return TRUE;
	else
		return FALSE;
}
// Insert data into head
void DQAddFirst(Deque * pdeq, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = pdeq->head;

	if(DQIsEmpty(pdeq))
		pdeq->tail = newNode;
	else
		pdeq->head->prev = newNode;

	newNode->prev = NULL;
	pdeq->head = newNode;
}
// Insert data into tail
void DQAddLast(Deque * pdeq, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->prev = pdeq->tail;

	if(DQIsEmpty(pdeq))
		pdeq->head = newNode;		
	else
		pdeq->tail->next = newNode;		

	newNode->next = NULL;
	pdeq->tail = newNode;
}
// Remove data from head
Data DQRemoveFirst(Deque * pdeq)
{
	Node * rnode = pdeq->head;
	Data rdata = pdeq->head->data;

	if(DQIsEmpty(pdeq))
	{
		printf("Deque Memory Error!");
		exit(-1);
	}

	pdeq->head = pdeq->head->next;
	free(rnode);

	if(pdeq->head == NULL)
		pdeq->tail = NULL;
	else
		pdeq->head->prev = NULL;

	return rdata;
}
// Remove data from tail
Data DQRemoveLast(Deque * pdeq)
{
	Node * rnode = pdeq->tail;
	Data rdata = pdeq->tail->data;

	if(DQIsEmpty(pdeq))
	{
		printf("Deque Memory Error!");
		exit(-1);
	}

	pdeq->tail = pdeq->tail->prev;
	free(rnode);

	if(pdeq->tail == NULL)
		pdeq->head = NULL;
	else
		pdeq->tail->next = NULL;

	return rdata;
}
// Get data from head
Data DQGetFirst(Deque * pdeq)
{
	if(DQIsEmpty(pdeq))
	{
		printf("Deque Memory Error!");
		exit(-1);
	}

	return pdeq->head->data;
}
// Get data from tail
Data DQGetLast(Deque * pdeq)
{
	if(DQIsEmpty(pdeq))
	{
		printf("Deque Memory Error!");
		exit(-1);
	}

	return pdeq->tail->data;
}
