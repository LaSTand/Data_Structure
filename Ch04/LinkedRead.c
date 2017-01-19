/*
 * Simple Linked List
 * Read data and save it to linked list
 * Normal list
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node * next;
} Node;

int main(void)
{
	Node * head = NULL;    // NULL initialize
	Node * tail = NULL;
	Node * cur = NULL;

	Node * newNode = NULL;
	int readData;

	/**** Input data into linked list ****/
	while(1)
	{
		printf("Input number : ");
		scanf("%d", &readData);
		if(readData < 1)	// natural number only
			break;

		/*** Memory allocation ***/
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL; // Should set as NULL in the tail

		if(head == NULL)	// nothing in list
			head = newNode;
		else				// sth alread exist in list
			tail->next = newNode;

		tail = newNode;
	}
	printf("\n");

	/**** Print all data in list ****/
	printf("All saved data printing !! \n");
	if(head == NULL) 
	{
		printf("Nothing input \n");
	}
	else 
	{
		cur = head; 
		printf("%d  ", cur->data);   // First data
		
		while(cur->next != NULL)    // Search next nodes
		{
			cur = cur->next;
			printf("%d  ", cur->data);
		}
	}
	printf("\n\n");

	/**** Freeing memory ****/
	if(head == NULL) 
	{
		return 0;    // Nothing to free
	}
	else 
	{
		Node * delNode = head;
		Node * delNextNode = head->next;

		printf("%d will be freed. \n", head->data);
		free(delNode);    // Free memory
		
		while(delNextNode != NULL)    // Data remain
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d will be freed. \n", delNode->data);
			free(delNode);    // Free memory
		}
	}

	return 0;
}