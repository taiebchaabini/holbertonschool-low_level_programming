#include "holberton.h"
/**
* tc_rest - function that convert deciam to binary
* @n: take a decimal number as argument
**/
void tc_rest(unsigned long int n)
{
	if (n != 0)
		tc_rest(n >> 1);
	if (n & 1)
		_putchar(1 + '0');
	else if (!(n & 0))
		_putchar(0 + '0');
}
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: take a decimal number as argument
 **/
void print_binary(unsigned long int n)
{
	tc_rest(n);
}
