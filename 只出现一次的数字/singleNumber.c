#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int singleNumber(int* nums, int numsSize) {
	int i = 0;
	int temp = 0;
	for ( i = 0; i < numsSize; i++)
	{
		temp ^= nums[i];
	}
	return temp;
}
int main()
{
	int num[] = { 1,1,3,2,4,3,2,6,4,7,5,7,17,5,6 };
	int szSizeNum = sizeof(num) / sizeof(num[0]);
	int singlenum = singleNumber(num, szSizeNum);
	printf("single number = %d\n", singlenum);
}