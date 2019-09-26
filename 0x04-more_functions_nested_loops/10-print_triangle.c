#include "holberton.h"

/**
  * print_triangle - function that draws a straight line in the terminal.
  * @size: type int
**/
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (a = size; a > 0; a--)
	{
		for (b = 1; b <= size; b++)
		{
			if (b >= a)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
