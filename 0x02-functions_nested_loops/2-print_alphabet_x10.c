#include "holberton.h"

/**
  * print_alphabet_x10 - Display 10 times alphabet
  * Return: void
**/

void print_alphabet_x10(void)
{
	int a, b, i;

	b = 'z';
	for (i = 0; i < 10; i++)
	{
	for (a = 'a'; a <= b; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	}
}
