#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int* swapNumbers(int* numbers, int numbersSize, int* returnSize) {
	numbers[0] = numbers[0] ^ numbers[1];
	numbers[1] = numbers[0] ^ numbers[1];
	numbers[0] = numbers[0] ^ numbers[1];
	*returnSize = 2;
	return numbers;
}
int main(void)
{
	int nums[] = { 0,2147483647 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int* s = swapNumbers(nums, sz, 2);
	for (int i = 0; i < sz; i++)
	{
		printf("%d,", nums[i]);
	}
	return 0;
}