#ifndef __C_LINKED_LIST_H__
#define __C_LINKED_LIST_H__

#include "Employee.h"

#define TRUE	1
#define FALSE	0

typedef Employee * Data;

typedef struct _node
{
	Data data;
	struct _node * next;
} Node;
// Clist type
typedef struct _CLL
{
	Node * tail;
	Node * cur;
	Node * before;
	int numOfData;
} CList;

typedef CList List;
// List initialize
void ListInit(List * plist);
// Insert data
void LInsert(List * plist, Data data);
// Insert data front
void LInsertFront(List * plist, Data data);
// Node search(first node)
int LFirst(List * plist, Data * pdata);
// Node search(next node)
int LNext(List * plist, Data * pdata);
// Remove node
Data LRemove(List * plist);
// Count num of node
int LCount(List * plist);

#endif