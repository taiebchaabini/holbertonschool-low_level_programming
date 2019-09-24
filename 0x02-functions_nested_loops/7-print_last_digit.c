#include "holberton.h"

/**
  * print_last_digit - prints the last digit of a number.
  * @a: parameter type int
  * Return: last digits
**/
int print_last_digit(int a)
{
	if (a < 0)
	{
	a = -a;
	}
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
