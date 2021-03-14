#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
int hammingWeight(uint32_t n) {
	int i = 0;
	int count = 0;
	while (n)
	{
		n &= n - 1;
		count++;
	}
	return count;
	
}
int main()
{
	uint32_t n = 0B00000000000000000000000000001111;
	int x = hammingWeight(n);
	printf("%d\n", x);
	return 0;
}