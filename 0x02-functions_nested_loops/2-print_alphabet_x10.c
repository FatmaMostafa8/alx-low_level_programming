#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet * 10, in lowercase
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter;
  int i;
  
  for (i = 0; i < 10; i++)
  {
	  letter = 'a';
	  while (letter <= 'z')
	  {
		  _putchar(letter);
		  letter++;
	  }
	  _putchar('\n');
  }
}
