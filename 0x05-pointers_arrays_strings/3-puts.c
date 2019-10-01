#include "holberton.h"
#include <stdio.h>

/**
* _puts - Function that prints a string like a puts function
* @str: pointer to char
*/

void _puts(char *str)
{
	int i;


	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
