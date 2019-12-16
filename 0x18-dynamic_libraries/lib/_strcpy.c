#include "holberton.h"
#include <stdio.h>

/**
* _strcpy - function that copies the string pointed to by src
* , including the terminating null byte (\0), to the buffer pointed to by dest.
* of an array of integers, followed by a new line.
* @dest: pointer to char
* @src: pointer to char
* Return: Value returned to pointer @dest
**/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (src[n] != '\0')
		n++;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	for (i = i; i <= n; i++)
		dest[i] = '\0';
	return (dest);
}
