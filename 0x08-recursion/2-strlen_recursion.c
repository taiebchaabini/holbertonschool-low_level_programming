#include "holberton.h"

/**
* _strlen_recursion - function that returns the length of a string.
* @s: Getting string as input
* Return: return length of the string
**/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
		return (0);
}
