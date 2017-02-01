#include <stdio.h>
#include "ArrayBaseStack.h"

int main(void)
{
	// Stack initialization
	Stack stack;
	StackInit(&stack);

	// Push data into stack
	SPush(&stack, 1);  SPush(&stack, 2);
	SPush(&stack, 3);  SPush(&stack, 4);
	SPush(&stack, 5);

	// Pop the data
	while(!SIsEmpty(&stack))
		printf("%d ", SPop(&stack)); 

	return 0;
}