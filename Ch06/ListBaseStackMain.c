#include <stdio.h>
#include "ListBaseStack.h"

int main(void)
{
	// Stack initialization
	Stack stack;
	StackInit(&stack);

	// Push data
	SPush(&stack, 1);  SPush(&stack, 2);
	SPush(&stack, 3);  SPush(&stack, 4);
	SPush(&stack, 5);

	// Check all the data in stack 
	while(!SIsEmpty(&stack))
		printf("%d ", SPop(&stack)); 

	return 0;
}