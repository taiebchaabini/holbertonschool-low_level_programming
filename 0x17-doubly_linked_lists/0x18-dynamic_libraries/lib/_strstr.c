#include "holberton.h"

/**
* _strstr - function that locates a substring.
* @haystack: pointer to char
* @needle: pointer to char
* Return:  Return the founded value
**/

char *_strstr(char *haystack, char *needle)
{
	int l = 0;
	int l2 = 0;
	int i = 0;
	int b = 0;
	int j = 0;

	while (haystack[l] != '\0')
		l++;
	while (needle[l2] != '\0')
		l2++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (b = 0; b < l2; b++)
		{
			if (haystack[i + b] == needle[b])
				j++;
			else
				j = 0;
		}

		if (j == l2)
		{
			haystack = haystack + i;
			return (haystack);
		}
	}
	return (0);
}
