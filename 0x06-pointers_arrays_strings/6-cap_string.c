#include "holberton.h"

/**
* cap_string - function that capitalizes all words of a string.
* @a: pointer to char
* Return: return @a
**/

char *cap_string(char *a)
{
	int i = 0;
	int b = 0;
	int last = 0;
	char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (a[i] != '\0')
	{
		last = a[i - 1];
		if (a[i] == 9)
		{
		a[i] = ' ';
		}
		if (last == ' ' || last == '\t' || last == '\n'
				|| last == ',' || last == ';' || last == '.' || last == '!'
				|| last == '?' || last == '"' || last == '(' || last == ')'
				|| last == '{' || last == '}')
		{
		if (a[i] >= 97 && a[i] <= 122)
		{
			b = 25 - (122 - a[i]);
			if (b == 0)
			a[i] = p[0];
			else
			a[i] = p[b];
		}
		}
			i++;
	}

	return (a);
}
