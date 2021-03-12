#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int game(int* guess, int guessSize, int* answer, int answerSize) {
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		if (guess[i] == answer[i])
		{
			sum += 1;
		}
		else
		{
			continue;
		}
	}
	return sum;
}
int main(void)
{
	int guess[3] = { 1,3,3 };
	int answer[3] = { 2,2,3 };
	int s = game(guess, 3, answer, 3);
	printf("A guessed it%dtimes\n",s);
	return 0;
}
