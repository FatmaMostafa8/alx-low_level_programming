#include <stdio.h>
/**
 * main - Enter point
 * Description: prints the alphabet in lowercase except q and e
 * Return: always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
		putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
