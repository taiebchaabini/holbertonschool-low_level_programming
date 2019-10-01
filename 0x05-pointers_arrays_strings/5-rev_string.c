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
	while (s[n] != '\0')
	{
		n++;
	}
	for (n = n - 1; n > 0 && n % 2 == 0; n--)
	{
		temp = s[i];
		s[i] = s[n];
		s[n] = temp;
		i++;
	}
}
