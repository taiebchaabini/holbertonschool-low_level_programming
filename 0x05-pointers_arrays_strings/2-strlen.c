#include "holberton.h"
#include <stdio.h>

/**
* _strlen - Function that returns the length of a string
* @a: pointer to int
* @b: pointer to int
* Return: Always 0
**/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}

	return (i);
}
