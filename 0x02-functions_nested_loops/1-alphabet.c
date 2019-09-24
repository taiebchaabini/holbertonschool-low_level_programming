#include "holberton.h"

/**
  * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
  * Return: 0
**/

void print_alphabet(void)
{
	char a, b;

	b = 'z';
	for (a = 'a'; a <= b; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
	return (0);
}
