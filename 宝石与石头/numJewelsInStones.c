#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int numJewelsInStones(char* jewels, char* stones) {
	int jewelsLen = strlen(jewels);
	int stonesLen = strlen(stones);
	int i = 0;
	int tmp = 0;
	if ( (jewelsLen <= 50 )|| (stonesLen <= 50))
	{
		
		for ( i = 0; i < jewelsLen; i++)
		{
			int j = 0;
			for ( j = 0; j < stonesLen; j++)
			{
				if ((jewels[i] ^ stones[j]) == 0)
				{
					tmp++;
				}
			}
		}
		return tmp;
	}
	return -1;
}
int main(void)
{
	char* J = "aAb";
	char* S = "aAAbbb";
	int num = numJewelsInStones(J, S);
	printf("±¦Ê¯ÓÐ%d¸ö\n", num);
	return 0;
}