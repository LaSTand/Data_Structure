/*
 * Double Linked List ADTs
 */

#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#define TRUE	1
#define FALSE	0

typedef int LData;
/** Node Data(int data)**/
typedef struct _node
{
	LData data;
	struct _node * next;
} Node;
/** List structure **/
typedef struct _linkedList
{
	Node * head;
	Node * cur;
	Node * before;
	int numOfData;
	int (*comp)(LData d1, LData d2);
} LinkedList;

/** List **/
typedef LinkedList List;
/** List Initialize **/
void ListInit(List * plist);
/** Insert data into list **/
void LInsert(List * plist, LData data);
/** Seartch list(first data) **/
int LFirst(List * plist, LData * pdata);
/** Search list(~) **/
int LNext(List * plist, LData * pdata);
/** Remove data **/
LData LRemove(List * plist);
/** Count data **/
int LCount(List * plist);
/** Sort data **/
void SetSortRule(List * plist, int (*comp)(LData d1, LData d2));

#endif