#include <stdio.h>
#include "CLLBaseStack.h"

int main(void)
{
	// Stack initailization
	Stack stack;
	StackInit(&stack);

	// Push data
	SPush(&stack, 1);  SPush(&stack, 2);
	SPush(&stack, 3);  SPush(&stack, 4);
	SPush(&stack, 5);

	// print all data
	while(!SIsEmpty(&stack))
		printf("%d ", SPop(&stack)); 

	return 0;
}