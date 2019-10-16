#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
* split_word - function that count the number of words
* @str: Getting a string
* Return: Number of words founds in a string delimited by white space
**/

int split_word(char *str)
{
	int i = 0, words = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			words++;
		i++;
	}
	return (words);
}

/**
* strtow - function that splites a string into words.
* @str: Getting a string
* Return: Array of words, without white space
**/
char **strtow(char *str)
{
	int i = 0, j = 0, b = 0, c = 0, r = 0;
	int words = 0;
	char **p;

	if (str == NULL)
		return (NULL);
	words = split_word(str);
	p = malloc(1 + words * sizeof(char *));
	if (p == NULL)
	{
		return (NULL);
	}

	i = 0, c = 0;
	for (j = 0; j < words; j++)
	{
		b = 0, r = 0;
		for (; str[i] == ' '; i++)
			;
		for (; str[i] != ' '; i++)
			b++;
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
		for (; str[c] != ' ' && r <= b; c++)
		{
			p[j][r] = str[c];
			r++;
		}
		p[j][r] = '\0';
	}
	return (p);
}

