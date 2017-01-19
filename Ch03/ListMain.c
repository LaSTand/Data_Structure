#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	/*** ArrayList gen and init ***/
	List list;
	int data;
	ListInit(&list);

	/*** Insert Data ***/
	LInsert(&list, 11);  LInsert(&list, 11);
	LInsert(&list, 22);  LInsert(&list, 22);
	LInsert(&list, 33);

	/*** print the number of data ***/
	printf("Current number of data : %d \n", LCount(&list));

	if(LFirst(&list, &data))    // Refer first data
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))    // Refer next data
			printf("%d ", data);
	}
	printf("\n\n");

	/*** Remove data ***/
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

	/*** Print the number of data ***/
	printf("Current number of data : %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}