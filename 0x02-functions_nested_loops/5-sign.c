#include "holberton.h"

/**
  * print_sign - prints the sign of a number.
  * @n: parameter type int
  * Return: depends on each statement
**/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	_putchar('-');
	return (-1);
}
