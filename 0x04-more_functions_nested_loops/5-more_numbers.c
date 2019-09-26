#include "holberton.h"

/**
  * more_numbers - prints 10 times the numbers, from 0 to 14
**/
void more_numbers(void)
{
	char a;
	char b;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	for (b = '0'; b <= '4'; b++)
	{
		_putchar('1');
		_putchar(b);
	}
	_putchar('\n');
}
