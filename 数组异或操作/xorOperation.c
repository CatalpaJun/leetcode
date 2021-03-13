#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int xorOperation(int n, int start) {
	int re = 0;
	int i = 0;
	for ( i = 0; i <n; i++)
	{
		re ^= start + 2 * i;
	}
	return re;
}
int main()
{
	int n = 0;
	int s = 0;
	printf("n = ");
	scanf("%d", &n);
	printf("start = ");
	scanf("%d", &s);
	int nums = xorOperation(n, s);
	printf("½á¹ûÎª£º%d", nums);
	return 0;
}