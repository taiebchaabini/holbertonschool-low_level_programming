#include "holberton.h"

/**
* string_toupper - Function that reverses the content of an array of integers.
* @a: pointer to char
* Return: return @a
**/

char *string_toupper(char *a)
{
	int i = 0;
	int b = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			b = 25 - (122 - a[i]);
			if (b == 0)
			a[i] = 65;
			else
			a[i] = 65 + b;
		}
			i++;
	}

	return (a);
}
