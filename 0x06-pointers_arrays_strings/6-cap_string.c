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

	while (a[i] != '\0')
	{
		b = 25 - (122 - a[i]);
		if (i == 0)
		{
			if ((a[i] >= 97 && a[i] <= 122))
			a[i] = 65 + b;
		}
		last = a[i - 1];
		if (last == ' ' || last == '\t' || last == '\n' || last == ','
				|| last == ';' || last == '.' || last == '!' ||
				last == '?' || last == '"' || last == '(' ||
				last == ')' || last == '{' || last == '}')
		{
		if ((a[i] >= 97 && a[i] <= 122))
		{
			a[i] = 65 + b;
		}
		}
			i++;
	}

	return (a);
}
