#include "holberton.h"

/**
  * print_square - function that draws a straight line in the terminal.
  * @size: type int
**/
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');

	for (b = 0; b < size; b++)
	{
	for (a = 1; a <= size && a > 0; a++)
	{
		_putchar('#');
		if (a == size)
			_putchar('\n');
	}
	}
}
