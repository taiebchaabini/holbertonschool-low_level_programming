#include "holberton.h"

/**
  * more_numbers - prints 10 times the numbers, from 0 to 14
**/
void more_numbers(void)
{
	int a;
	int c;
	int i;

	while (i < 10)
	{
	for (a = 0; a <= 14; a++)
	{
		c = a;
		if (a > 9)
		{
			c = a / 10;
		}
		_putchar(c + '0');
		if (a > 9)
		{
			_putchar(a % 10 + '0');
		}
	}
	_putchar('\n');
	i++;
	}
}
