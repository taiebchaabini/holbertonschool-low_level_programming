#include "holberton.h"
#include <stdio.h>

/**
* rev_string - Function that reverse a string,
* @s: pointer to char
*/

void rev_string(char *s)
{
	int n, i;
	char temp;

	n = 0;
	i = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	for (i = 0; i < n / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + ((n  - 1) - i));
		*(s + ((n - 1) - i)) = temp;
	}
}
