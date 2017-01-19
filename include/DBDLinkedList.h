/*
 * Doubly Dummy Linked List ADTs
 */
#ifndef __DBD_LINKED_LIST_H__
#define __DBD_LINKED_LIST_H__

#define TRUE	1
#define FALSE	0
/* 
 'Data' type should be change,
 by the case of source.
 ex) int -> char or sth else
 */
typedef int Data;

typedef struct _node
{
	Data data;
	struct _node * next;
	struct _node * prev;
} Node;

typedef struct _dbDLinkedList
{
	Node * head;
	Node * tail;	//tail added
	Node * cur;
	int numOfData;
} DBDLinkedList;

typedef DBDLinkedList List;
// List initialization
void ListInit(List * plist);
// Insert data
void LInsert(List * plist, Data data);
// Search data
int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);
// Remove data
Data LRemove(List * plist);
int LCount(List * plist);

#endif