#include "holberton.h"

/**
  * print_diagonal - function that draws a straight line in the terminal.
  * @n: type int
**/
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
		for (b = 1; b <= a && b > 0; b++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	}
}
