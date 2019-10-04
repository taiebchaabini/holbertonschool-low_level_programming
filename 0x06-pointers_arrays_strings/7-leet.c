#include "holberton.h"
#include <stdio.h>

/**
* leet - function that encodes a string into 1337.
* @a: pointer to char
* Return: return encoded string from @a value
**/
char *leet(char *a)
{
	int i = 0;
	int ii = 0;
	char upper[] = "AEOTL";
	char lower[] = "aeotl";
	char leets[5] = "43071";

	while (a[i] != '\0')
	{
		ii = 0;
		while (upper[ii] != '\0' && lower[ii] != '\0')
		{
			if (a[i] == lower[ii] || a[i] == upper[ii])
				a[i] = leets[ii];
		ii++;
		}
			i++;
	}

	return (a);
}
