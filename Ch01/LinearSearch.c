#include <stdio.h>

int LSearch(int ar[], int len, int target)
{
	int i;
	for(i=0; i<len; i++)
	{
		if(ar[i]==target)
			return i;    // Return index of being searched.
	}
	return -1;    // Search failed.
}

int main(void)
{
	int arr[]={3, 5, 2, 4, 9};
	int idx;

	idx=LSearch(arr, sizeof(arr)/sizeof(int), 4);
	if(idx==-1)
		printf("Serach Failed! \n");
	else
		printf("Target stored index : %d \n", idx);

	idx=LSearch(arr, sizeof(arr)/sizeof(int), 7);
	if(idx==-1)
		printf("Search Failed! \n");
	else
		printf("Target stored index : %d \n", idx);

	return 0;
}