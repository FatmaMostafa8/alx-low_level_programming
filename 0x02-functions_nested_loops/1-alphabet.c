#include "main.h"

/**
 * main - check the code
 * Description: print lowercase letter
 * print_alphabet - a function that prints the alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
