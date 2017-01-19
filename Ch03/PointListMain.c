#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Point.h"

int main(void)
{
	List list;
	Point compPos;
	Point * ppos;

	ListInit(&list);

	/*** Insert struct values to List(total 4) ***/
	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 4, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 2);
	LInsert(&list, ppos);

	/*** Print number of saved value ***/
	printf("Current Number of Data : %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	/*** comPos values setting ***/
	compPos.xpos=2;
	compPos.ypos=0;
	/*** Remove data which has 2 in xpos ***/
	if(LFirst(&list, &ppos))
	{
		if(PointComp(ppos, &compPos) == 1)
		{
			LRemove(&list);
			//ppos = LRemove(&list);
			//free(ppos);
			printf("Remove Succeed!\n");
		}

		while(LNext(&list, &ppos)) 
		{
			if(PointComp(ppos, &compPos) == 1)
			{
				LRemove(&list);
				//ppos = LRemove(&list);
				//free(ppos);
				printf("Remove Succeed!\n");
			}
		}
	}

	/*** Print all data after removing ***/
	printf("Current Number of Data : %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	return 0;
}