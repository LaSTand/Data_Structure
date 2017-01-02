#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target)
{
	int mid;
	if(first > last)
		return -1;    // -1 means search failed 
	mid = (first+last) / 2;    // Calc the mid-value

	if(ar[mid] == target)
		return mid;    // End searching
	else if(target < ar[mid])
		return BSearchRecur(ar, first, mid-1, target);
	else
		return BSearchRecur(ar, mid+1, last, target);
}

int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};
	int idx;

	idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
	if(idx == -1)
		printf("Search Failed! \n");
	else
		printf("Target located index : %d \n", idx);

	idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 2);
	if(idx == -1)
		printf("Search Failed! \n");
	else
		printf("Target located index : %d \n", idx);

	return 0;
}