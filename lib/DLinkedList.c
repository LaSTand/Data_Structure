/*
 * Double Linked List ADTs
 */
#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List * plist)
{
	plist->head = (Node*)malloc(sizeof(Node));	// Dummy node
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->numOfData = 0;
}
/** First Insert **/ 
void FInsert(List * plist, LData data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	/* Insert new node into head */
	newNode->next = plist->head->next;	
	plist->head->next = newNode;

	(plist->numOfData)++;
}
/** Insert data(Sorting) **/
void SInsert(List * plist, LData data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	Node * pred = plist->head;	// pred
	newNode->data = data;

	while(pred->next != NULL && plist->comp(data, pred->next->data) != 0)
	{
		pred = pred->next;
	}

	newNode->next = pred->next;
	pred->next = newNode;

	(plist->numOfData)++;
}

void LInsert(List * plist, LData data)
{	// comp == NULL; Sort criteria not setted
	if(plist->comp == NULL)	
		FInsert(plist, data);
	else
		SInsert(plist, data);
}
/** Search the first data **/
int LFirst(List * plist, LData * pdata)
{	/* Nothing in list */
	if(plist->head->next == NULL)
		return FALSE;
	/* before == Dummy // cur == First node */
	plist->before = plist->head;
	plist->cur = plist->head->next;

	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List * plist, LData * pdata)
{	/* Nothing in list */
	if(plist->cur->next == NULL)
		return FALSE;
	/* before == cur // cur == next */
	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

LData LRemove(List * plist)
{
	Node * rpos = plist->cur;
	LData rdata = rpos->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount(List * plist)
{
	return plist->numOfData;
}

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2))
{
	plist->comp = comp;
}
