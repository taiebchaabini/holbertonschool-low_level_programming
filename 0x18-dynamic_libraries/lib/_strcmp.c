#include "holberton.h"

/**
* _strcmp - Function that compares two strings
* @s1: pointer to char
* @s2: pointer to char
* Return: It return the dest value
**/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	return (*s1 - *s2);
}
