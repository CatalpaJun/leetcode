#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int findMagicIndex(int* nums, int numsSize) {
	int i = 0;
	for ( i = 0; i < numsSize; i++)
	{
		if (nums[i] == i)
		{
			return nums[i];
		}
		else
		{
			return -1;
		}
	}
}
int main(void)
{
	int nums[] = { 1, 1, 4, 4, 5 };
	int sizeA = sizeof(nums) / sizeof(nums[0]);
	int sz = findMagicIndex(nums, sizeA);
	printf("%d\n", sz);
	return 0;
}