#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.h"
#include "Employee.h"

Employee * WhosNightDuty(List * plist, char * name, int day);
void ShowEmployeeInfo(Employee * emp);

int main(void)
{
	int i;
	Employee * pemp;

	// List initialization
	List list;
	ListInit(&list);

	// Insert employees info
	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 11111;
	strcpy(pemp->name, "Terry");
	LInsert(&list, pemp);
	
	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 2222;
	strcpy(pemp->name, "Jery");
	LInsert(&list, pemp);

	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 3333;
	strcpy(pemp->name, "Hary");
	LInsert(&list, pemp);

	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 4444;
	strcpy(pemp->name, "Sunny");
	LInsert(&list, pemp);

	// Who's duty after Terry's 3 days
	pemp = WhosNightDuty(&list, "Terry", 3);
	ShowEmployeeInfo(pemp);

	// Who's duty after Sunny's 15 days
	pemp = WhosNightDuty(&list, "Sunny", 15);
	ShowEmployeeInfo(pemp);

	// free memory
	if(LFirst(&list, &pemp))
	{
		free(pemp);
		
		for(i=0; i<LCount(&list)-1; i++)
		{
			if(LNext(&list, &pemp))
				free(pemp);
		}
	}

	return 0;
}

Employee * WhosNightDuty(List * plist, char * name, int day)
{
	int i, num;
	Employee *ret;

	num = LCount(plist);

	// Search name
	LFirst(plist, &ret);

	if(strcmp(ret->name, name) != 0)
	{
		for(i=0; i<num-1; i++)
		{
			LNext(plist, &ret);

			if(strcmp(ret->name, name) == 0)
				break;
		}
		if(i >= num-1)     // If no one found
			return NULL;
	}

	// Calc the day who's next
	for(i=0; i<day; i++)
		LNext(plist, &ret);

	return ret;
}

void ShowEmployeeInfo(Employee * emp)
{
	printf("Employee name: %s \n", emp->name);
	printf("Employee number: %d \n\n", emp->empNum);
}