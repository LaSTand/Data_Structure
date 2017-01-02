/*
Binary Search Worst Case Operation Count
*/
#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first=0;
	int last=len-1;
	int mid; 
	int opCount=0;   // Operation count

	while(first<=last)
	{
		mid=(first+last)/2;

		if(target==ar[mid])
		{
			return mid;
		}
		else 
		{
			if(target<ar[mid])   
				last=mid-1;
			else
				first=mid+1;
		}
		opCount+=1;   // Compare the mid-vaule ==> one operation
	}
	printf("Operation Count : %d \n", opCount);  // Print Operation Count(Search Failed)
	return -1;
} 

int main(void)
{
	int arr1[500]={0,};    // initialize with 0
	int arr2[5000]={0,};    // initialize with 0
	int arr3[50000]={0,};    // initialize with 0
	int idx;

	// Find a value(1) which is not in the array.
	idx=BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
	if(idx==-1)
		printf("Search Failed! \n\n");
	else
		printf("Target located index: %d \n", idx);

	// Find a value(2) which is not in the array.
	idx=BSearch(arr2, sizeof(arr2)/sizeof(int), 2);
	if(idx==-1)
		printf("Search Failed! \n\n");
	else
		printf("Target located index : %d \n", idx);

	// Find a value(3) which is not in the array.
	idx=BSearch(arr3, sizeof(arr3)/sizeof(int), 3);
	if(idx==-1)
		printf("Search Failed! \n\n");
	else
		printf("Target located index : %d \n", idx);

	return 0;
}