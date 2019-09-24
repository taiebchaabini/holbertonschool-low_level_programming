#include "holberton.h"

/**
  * print_last_digit - prints the last digit of a number.
  * @a: parameter type int
  * Return: last digits
**/
int print_last_digit(int a)
{
	a = a % 10;
	if(a < 0)
	a = -a;
	_putchar(a + '0');
	return (a);
}
