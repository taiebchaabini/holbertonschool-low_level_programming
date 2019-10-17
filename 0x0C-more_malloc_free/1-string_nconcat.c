#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1:
* @s2:
* n: 
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned i = 0, b = 0, d = 0, c = 0;
	char *p;

	while(s1[i] != '\0')
		i++;
	while(s2[b] != '\0')
		b++;
	p = malloc(i + n * sizeof(char));
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
