#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1: Taking first string
* @s2: Taking second string
* @n: limit size of concatenates string of @s2
* Return: concatenated string
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, b = 0, d = 0, c = 0;
	char *p;

	while (s1[i] != '\0')
		i++;
	if (s2 != NULL)
	{
	while (s2[b] != '\0' || b < n)
		b++;
	}
	p = malloc(i + b + 1* sizeof(char));
	if (p == NULL)
		return (NULL);
	for (d = 0; d < i; d++)
	{
		p[d] = s1[c];
		c++;
	}
	for (c = 0; c < n; c++)
	{
		p[d] = s2[c];
		d++;
	}
	p[d] = '\0';
	return (p);
}
