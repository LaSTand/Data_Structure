#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(void)
{
	List list;
	NameCard * pcard;
	ListInit(&list);

	pcard = MakeNameCard("John", "010-1111-2222");
	LInsert(&list, pcard);

	pcard = MakeNameCard("Charles", "010-2222-5555");
	LInsert(&list, pcard);

	pcard = MakeNameCard("Paul", "010-3333-7777");
	LInsert(&list, pcard);

	// Print Specific name's info
	if(LFirst(&list, &pcard))
	{
		if(!NameCompare(pcard, "Charles")) 
		{
			ShowNameCardInfo(pcard);
		}
		else 
		{
			while(LNext(&list, &pcard)) 
			{
				if(!NameCompare(pcard, "Charles")) 
				{
					ShowNameCardInfo(pcard);
					break;
				}
			}
		}
	}

	// Change phone number of specific's
	if(LFirst(&list, &pcard))
	{
		if(!NameCompare(pcard, "John")) 
		{
			ChangePhoneNum(pcard, "010-9999-9999");
		}
		else 
		{
			while(LNext(&list, &pcard)) 
			{
				if(!NameCompare(pcard, "John")) 
				{
					ChangePhoneNum(pcard, "010-9999-9999");
					break;
				}
			}
		}
	}

	// Remove specific's info
	if(LFirst(&list, &pcard))
	{
		if(!NameCompare(pcard, "Paul")) 
		{
			pcard = LRemove(&list);
			free(pcard);
		}
		else 
		{
			while(LNext(&list, &pcard)) 
			{
				if(!NameCompare(pcard, "Paul")) 
				{
					pcard = LRemove(&list);
					free(pcard);					
					break;
				}
			}
		}
	}

	// Print all data info after ~~
	printf("Current Number of Data: %d \n", LCount(&list));

	if(LFirst(&list, &pcard))
	{
		ShowNameCardInfo(pcard);
		
		while(LNext(&list, &pcard))
			ShowNameCardInfo(pcard);
	}

	return 0;
}