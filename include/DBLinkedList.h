/*
 * Doubly Linked List ADTs
 */
#ifndef __DB_LINKED_LIST_H__
#define __DB_LINKED_LIST_H__

#define TRUE	1
#define FALSE	0
/* 
 'Data' type should be change,
 by the case of source.
 ex) int -> char or sth else
 */
typedef int Data;
// Node has next and prev pointer
typedef struct _node
{
	Data data;
	struct _node * next;
	struct _node * prev;
} Node;

typedef struct _dbLinkedList
{
	Node * head;
	Node * cur;
	int numOfData;
} DBLinkedList;

typedef DBLinkedList List;

// List initialization
void ListInit(List * plist);
// Insert data into list
void LInsert(List * plist, Data data);
// Search the first node
int LFirst(List * plist, Data * pdata);
// Search next nodes
int LNext(List * plist, Data * pdata);
// Search previous nodes
int LPrevious(List * plist, Data * pdata);
// Count the num of nodes
int LCount(List * plist);

#endif