#include "holberton.h"

/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: type char
* @accept: pointer to char
* Return: ----
**/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int l = 0;
	int ii = 0;

	while(s[l] != '\0')
		l++;

	while(i <= l)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (accept[ii] == s[i])
			{
				s = s + i;
				return (s);
			}
		}
		i++;
	}
	if (i < l)
		s[i + 1] = '\0';
	return (0);
}
