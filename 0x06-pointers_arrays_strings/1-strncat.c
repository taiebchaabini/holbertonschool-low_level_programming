#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
* _strncat - Function that concatenates two strings
* @dest: pointer to char
* @src: pointer to char
* @n: pointer to int
* Return: It return the dest value
**/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while( dest[dest_len] != '\0')
		dest_len++;

	for (i = i; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
