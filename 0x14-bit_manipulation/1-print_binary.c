#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: take a decimal number as argument
 **/
void print_binary(unsigned long int n)
{
	if (n != 0)
		rest(n >> 1);
	if (n & 1)
		_putchar(1 + '0');
	if (!(n & 1))
		_putchar(0 + '0');
}
