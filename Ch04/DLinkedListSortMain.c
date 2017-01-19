/*
 * Double Linked List with Soring 
 * Data will be sorted 
 */
#include <stdio.h>
#include "DLinkedList.h"
/* programmer can set the standard of sorting */
int WhoIsPrecede(int d1, int d2)
{
	if(d1 < d2)
		return 0;    // d1 is first
	else
		return 1;    // d2 is first or same
}

int main(void)
{
	// List initailize
	List list;
	int data;
	ListInit(&list);
	// Sort data
	SetSortRule(&list, WhoIsPrecede);

	// Insert data
	LInsert(&list, 11);  LInsert(&list, 11);
	LInsert(&list, 22);  LInsert(&list, 22);
	LInsert(&list, 33);

	// Print all the data
	printf("Current num of data : %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data)) 
			printf("%d ", data);
	}
	printf("\n\n");

	// Remove specific node 
	if(LFirst(&list, &data))
	{
		if(data == 22)
			LRemove(&list);
		
		while(LNext(&list, &data))
		{
			if(data == 22)
				LRemove(&list);
		}
	}

	// Print all the data
	printf("Current num of data: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}