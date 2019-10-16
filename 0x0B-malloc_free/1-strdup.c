#include <stdlib.h>
#include "holberton.h"

/**
* _strdup -  function that returns a pointer to a newly allocated space in
* memory, which contains a copy of the string given as a parameter.
* @str: pointer of char
* Return: return pointer if allocated memory success otherwise NULL
**/

char *_strdup(char *str)
{
	unsigned int i = 0, b = 0;
	char *p;

	while (str[i])
		i++;
	p = malloc(i * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (b = 0; b < i; b++)
		p[b] = str[b];
	p[b] = '\0';
	return (p);
}