#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first=0;   // Start index of searching.
	int last=len-1;   // End index of searching.
	int mid; 

	while(first<=last)
	{
		mid=(first+last)/2;   // Calc mid-value

		if(target==ar[mid])   // IF the target equals with the mid-index value
		{
			return mid;		// End searching
		}
		else    // If not.. 
		{
			if(target<ar[mid])   
				last=mid-1;   // Left side 
			else
				first=mid+1;   // Right side 
		}
	}
	return -1;   // Search Failed
} 

int main(void)
{
	int arr[]={1, 3, 5, 7, 9}; // Shall be arragned
	int idx;

	idx=BSearch(arr, sizeof(arr)/sizeof(int), 7);
	if(idx==-1)
		printf("Serach Failed! \n");
	else
		printf("Target located index : %d \n", idx);

	idx=BSearch(arr, sizeof(arr)/sizeof(int), 4);
	if(idx==-1)
		printf("Search Failed! \n");
	else
		printf("Target located index : %d \n", idx);

	return 0;
}