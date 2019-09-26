#include "holberton.h"

/**
  * print_numbers - function that prints the numbers, from 0 to 9
  * @a: type int
**/
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
