#include "holberton.h"
#include <stdio.h>

/**
* rot13 - function that encodes a string using rot13.
* @a: pointer to char
* Return: return encoded string using rot13 from @a value
**/
char *rot13(char *a)
{
	int i = 0;
	int b = 0;
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (a[i] != '\0')
	{
		b = 0;
		while (lower[b] != '\0' || upper[b] != '\0')
		{
			if ((a[i] == lower[b] && lower[b] - 'a' < 26) || (a[i] == upper[b] && upper[b] - 'A' < 26))
			a[i] -= 13;
			b++;
		}
			i++;
	}

	return (a);
}
