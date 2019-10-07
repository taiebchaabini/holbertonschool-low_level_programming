#include "holberton.h"

/**
* _strchr - function that locates a character in a string.
* @s: pointer to char - src table
* @c: type char - character to found
* Return: the first occurence if character is found
* otherwise it returns null
**/

char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
		i++;
	}
	
	return (0);
}
