#include "holberton.h"

/**
* _puts_recursion - Function that prints a string, follow by newline
* @s: Getting string as input
**/

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
