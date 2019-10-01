#include "holberton.h"
#include <stdio.h>

/**
* _puts - Function that prints a string like a puts function
* @str: pointer to char
*/

void _puts(char *str)
{
	int i;


	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
