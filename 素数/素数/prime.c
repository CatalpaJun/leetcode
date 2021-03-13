#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int isPrime(int x);
int main(void)
{
	int i = 1;
	while (i<100)
	{
		if (isPrime(i))
		{
			printf("ËØÊýÎª%d\n",i);
		}
		i = i + 2;
	}
	return 0;
}
int isPrime(int x)
{
	int i = 0;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	if (i == x)
	{
		return 1;
	}
	return 0;
	
}