#include "holberton.h"

/**
* _strncpy - Function that concatenates two strings
* @dest: pointer to char
* @src: pointer to char
* @n: pointer to int
* Return: It return the dest value
**/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = i; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
