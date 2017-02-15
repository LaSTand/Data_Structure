#include <stdio.h>
#include "Deque.h"

int main(void)
{
	// Deque initializtion
	Deque deq;
	DequeInit(&deq);

	// insert data
	DQAddFirst(&deq, 3); 
	DQAddFirst(&deq, 2); 
	DQAddFirst(&deq, 1); 

	DQAddLast(&deq, 4); 
	DQAddLast(&deq, 5); 
	DQAddLast(&deq, 6);

	// Check data order in deque
	while(!DQIsEmpty(&deq))
		printf("%d ", DQRemoveFirst(&deq));

	printf("\n");

	// insert again
	DQAddFirst(&deq, 3); 
	DQAddFirst(&deq, 2); 
	DQAddFirst(&deq, 1);
	
	DQAddLast(&deq, 4); 
	DQAddLast(&deq, 5); 
	DQAddLast(&deq, 6);

	// Check data order in deque
	while(!DQIsEmpty(&deq))
		printf("%d ", DQRemoveLast(&deq));

	return 0;
}