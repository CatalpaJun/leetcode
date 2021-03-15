#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int addDigits(int num) {
	int ans = 0;
	if (num == 0)
	{
		return 0;
	}
	while (num >=10)
	{
		ans = num % 10;
		num /= 10;
		num += ans;
	}
	return num ;
}
int main()
{
	int a = 3283;
	int s = addDigits(a);
	printf("%d\n", s);
	return 0;
}