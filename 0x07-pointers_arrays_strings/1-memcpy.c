#include "holberton.h"

/**
* _memcpy - function that copies memory area.
* @dest: pointer to char - destination
* @src: pointer to char - from
* @n: type unsigned int - delimiter
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	int j = 0;

	for (; j < src[j] && i < n; i++)
	{
	dest[i] = src[i];
	j++;
	}
	return (dest);
}
