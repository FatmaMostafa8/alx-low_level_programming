#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: check last digital of number n.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	printf("Last digital %d is ", n)
	if (ld > 5)
	{
		printf("%d and is greater than 5\n", ld);
	}
	else if (ld == 0)
	{
		printf("%d and is 0\n", ld);
	}
	else if (ld < 6)
	{
		printf("%d and is less than 6 and not 0\n", ld);
	}
	return (0);
}
