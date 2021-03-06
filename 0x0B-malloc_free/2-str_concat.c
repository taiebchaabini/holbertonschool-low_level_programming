#include <stdlib.h>
#include "holberton.h"

/**
* str_concat - function that concatenates two strings.
* @s1: pointer of char
* @s2: pointer of char
* Return: two strings concatenated
**/

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, b = 0, c = 0, d = 0;
	char *p;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 != NULL)
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	p = malloc((i + b + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		p[c] = s1[c];
	for (d = 0; d < b; d++)
		p[c + d] = s2[d];
	p[(c + d) + 1] = '\0';
	return (p);
}
