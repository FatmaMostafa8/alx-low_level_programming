#include <stdio.h>
/**
 * main - Enter point
 * Description: prints numbers
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	printf("\n");
	return (0);
}
