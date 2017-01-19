/*
 * Simple Linked List
 * Read data and save it to linked list
 * The list grow by left side
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
	Node * head = NULL;    // NULL initailize
	Node * tail = NULL;
	Node * cur = NULL;

	Node * newNode = NULL;
	int readData;

	/**** Input data ****/
	while(1)
	{
		printf("Input number : ");
		scanf("%d", &readData);
		if(readData < 1)
			break;

		/*** Save data into list ***/
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		if(head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else // This part is difference
		{
			newNode->next = head;
			head = newNode;
		}
	}
	printf("\n");

	/**** Pinte all data of the¤****/
	printf("Print all data in list! \n");
	if(head == NULL) 
	{
		printf("Nothing in list. \n");
	}
	else 
	{
		cur = head; 
		printf("%d  ", cur->data);   // Print the First data
		
		while(cur->next != NULL)    // Search next nodes
		{
			cur = cur->next;
			printf("%d  ", cur->data);
		}
	}
	printf("\n\n");

	/**** Freeing memory ***/
	if(head == NULL) 
	{
		return 0;    // Nothing to free
	}
	else 
	{
		Node * delNode = head;
		Node * delNextNode = head->next;

		printf("%d will be freed \n", head->data);
		free(delNode);   // free memory
		
		while(delNextNode != NULL)    // search next nodes
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d will be freed \n", delNode->data);
			free(delNode);    // Free memory
		}
	}

	return 0;
}