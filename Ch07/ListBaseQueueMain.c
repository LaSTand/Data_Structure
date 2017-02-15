#include <stdio.h>
#include "ListBaseQueue.h"

int main(void)
{
	// Queue initializtion
	Queue q;
	QueueInit(&q);

	// Insert data
	Enqueue(&q, 1);  Enqueue(&q, 2);
	Enqueue(&q, 3);  Enqueue(&q, 4);
	Enqueue(&q, 5);

	// Print all data
	while(!QIsEmpty(&q))
		printf("%d ", Dequeue(&q)); 

	return 0;
}