#include "holberton.h"

/**
  * print_line - function that draws a straight line in the terminal.
  * @n: type int
**/
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
		_putchar('_');
		_putchar('\n');
	}
}
