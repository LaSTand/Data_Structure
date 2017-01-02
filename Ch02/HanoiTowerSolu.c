/*
Simple Hanoi Tower Move Solution
Recusive function
*/
#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to)
{
	if(num==1)    // If only 1 discus
	{
		printf("Discus1 moved from %c­ to %c \n", from, to);
	}
	else
	{    
		HanoiTowerMove(num-1, from, to, by);    // n-1 discuses move to A->B
		printf("Discus%d moved from %c to­ %c \n", num, from, to);  // move the largest discus A->C
		HanoiTowerMove(num-1, by, from, to);    // n-1 discuses move to B->C
	}
}


int main(void)
{
	// 3 discuses will be move A->C via B
	HanoiTowerMove(3, 'A', 'B', 'C');
	return 0;
}