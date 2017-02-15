/*
 * List based Queue
 */
#include <stdio.h>
#include <stdlib.h>
#include "ListBaseQueue.h"

// Queue initialization
void QueueInit(Queue * pq)
{
	pq->front = NULL;
	pq->rear = NULL;
}
// Front == NULL => Queue is empty
int QIsEmpty(Queue * pq)
{
	if(pq->front == NULL)
		return TRUE;
	else
		return FALSE;
}
// Insert data into queue
void Enqueue(Queue * pq, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->data = data;
	// first node
	if(QIsEmpty(pq))
	{
		pq->front = newNode;
		pq->rear = newNode;
	}// after second node
	else
	{
		pq->rear->next = newNode;
		pq->rear = newNode;
	}
}
// Delete node in queue
Data Dequeue(Queue * pq)
{
	Node * delNode;
	Data retData;

	if(QIsEmpty(pq))
	{
		printf("Queue Memory Error!");
		exit(-1);
	}
	// backup data -> move 'front' to next node
	delNode = pq->front;
	retData = delNode->data;
	pq->front = pq->front->next;
	// free
	free(delNode);	
	return retData;
}
// Peek a node's data
Data QPeek(Queue * pq)
{
	if(QIsEmpty(pq))
	{
		printf("Queue Memory Error!");
		exit(-1);
	}

	return pq->front->data;
}