#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
* _strcat - Function that concatenates two strings
* @dest: pointer to char
* @src: pointer to char
* Return: It return the dest value
**/

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
