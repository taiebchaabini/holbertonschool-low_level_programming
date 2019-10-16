#include <stdlib.h>
#include "holberton.h"

/**
* strtow - function that splits a string into words.
* @str: h
* @Return: h 
**/

char **strtow(char *str)
{
	int i = 0, j = 0, b = 0, c = 0, r = 0;
	int chars = 0, words = 0;
	char **p;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			words++;
		if (str[i] != ' ')
			chars++;
		i++;
	}

	p = malloc(words * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	for (j = 0; j < words; j++)
	{
		for(b = 0; str[i] != ' ' && str[i + 1] == ' ' && str[i] != '\0'; i++)
		{
			b++;
		}
		p[j] = malloc((b + 2) * sizeof(char));
		if (p[j] == NULL)
		{
			for (; j >= 0; j--)
				free(p[j]);
			free(p);	
		}
		for (r = 0; str[c] != ' ' && str[i + 1] == ' ' && str[i] != '\0'; c++)
		{
			p[j][r] = str[c];
			r++;
		}
		p[j][r + 1] = '\n';
		p[j][r + 2] = '\0';
	}
	return (p);
}

