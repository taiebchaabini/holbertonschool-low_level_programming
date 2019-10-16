#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

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

	p = malloc(words * sizeof(char *));
	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	c = 0;
	for (j = 0; j < words; j++)
	{
		b = 0, r = 0;
		for (; str[i] == ' '; i++)
			;
		for(; str[i] != ' '; i++)
		{
			b++;
		}
		b = b + 1;
		p[j] = malloc(b * sizeof(char));
		if (p[j] == NULL)
		{
			for (; j >= 0; j--)
				free(p[j]);
			free(p);	
		}
		for (; str[c] == ' '; c++)
			;
		for (; str[c] != ' '; c++)
		{
			p[j][r] = str[c];
			r++;
		}
		p[j][r] = '\0';
	}
	return (p);
}

