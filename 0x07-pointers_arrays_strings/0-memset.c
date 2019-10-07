#include "holberton.h"

/**
* _memset - function that fills memory with a constant byte.
* @s: pointer to char getting buffer table
* @b: type char - new adress
* @n: type unsigned int - delimiter
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
