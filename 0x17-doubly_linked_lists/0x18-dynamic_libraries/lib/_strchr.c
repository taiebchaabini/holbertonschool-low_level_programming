#include "holberton.h"

/**
* _strchr - function that locates a character in a string.
* @s: pointer to char - src table
* @c: type char - character to found
* Return: the first occurence if character is found
* otherwise it returns NULL also if the first character '\0'
**/

char *_strchr(char *s, char c)
{
	int i = 0;
	int l = 0;

	while (s[l] != '\0')
		l++;

	while (i <= l)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
		i++;
	}
	if (i < l)
		s[i + 1] = '\0';
	return (0);
}
