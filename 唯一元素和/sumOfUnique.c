#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int sumOfUnique(int* nums, int numsSize) {
	int i = 0;
	int j = 0;
	int sum = 0;
	for ( i = 0; i < numsSize; i++)
	{
		int count = 0;
		for ( j = 0; j < numsSize; j++)
		{
			if (nums[i] == nums[j])
			{
				count++;
			}
		}
		if (count <= 1)
		{
			sum += nums[i];
		}
	}
	return sum;
	
}
int main()
{
	int nums[5] = { 1,2,3,2};
	int sz = sizeof(nums) / sizeof(nums[0]);
	int s = sumOfUnique(nums, sz);
	printf("%d\n", s);
	return 0;
}