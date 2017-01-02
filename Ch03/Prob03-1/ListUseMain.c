#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	/*** Initialize a list ***/
	List list;
	int data, i;
	int sum = 0;
	ListInit(&list);

	/*** Insert 1 to 9 value to list ***/
	for(i = 1 ; i < 10 ; i++)
		LInsert(&list, i);

	/*** Sum up the values ***/
	if(LFirst(&list, &data)) 
	{
		sum += data;
		
		while(LNext(&list, &data))   
			sum += data;
	}
	printf("SUM = %d \n\n", sum);

	/*** Delete 2's and 3's multiple values ***/
	if(LFirst(&list, &data))
	{
		if(data%2 == 0 || data%3 == 0)
			LRemove(&list);
		
		while(LNext(&list, &data))
		{
			if(data%2 == 0 || data%3 == 0)
				LRemove(&list);
		}
	}

	/*** Print all values in list ***/
	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}