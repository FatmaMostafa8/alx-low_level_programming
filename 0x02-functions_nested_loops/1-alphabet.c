#include "main.h"

/**
 * main - check the code
 * Description: print lowercase letter
 * print_alphabet - a function that prints the alphabet
 * Return: Always 0.
 */

char print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
