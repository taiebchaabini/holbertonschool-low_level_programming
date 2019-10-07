#include "holberton.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @s: type char
* @accept: pointer to char
* Return: Returns the number of bytes in the initial segment
* of @s which consist only of bytes from @accept
**/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int b = 0;
	unsigned int n = 0;

	for (; s[i] != ' '; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
				n++;
		}
	}
	return (n);
}
