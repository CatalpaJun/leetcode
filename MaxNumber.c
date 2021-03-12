#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int maximum(int a, int b) {
	return a > b ? a : b;
}
int main()
{
	int s = maximum(1, 2);
	printf("%d\n", s);
	return 0;
}