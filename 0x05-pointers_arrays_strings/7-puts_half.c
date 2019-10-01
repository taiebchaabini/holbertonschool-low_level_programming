#include "holberton.h"
#include <stdio.h>

/**
* puts_half - function that prints every other character of a string
* @str: pointer to char
**/

void puts_half(char *str)
{
	int i, n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (str[n] != '\0')
	{
		if (n > ((i - 1) / 2))
		{
		_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
