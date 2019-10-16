#include <stdlib.h>
#include "holberton.h"

/**
* create_array - function that creates an array of chars, and initializes it
* with a specific char.
* @size: type unsigned int
* @c: type char
* Return: if size is 0 return 0, null if it fails otherwhise return pointer
**/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		*(p + i) = c;
	*(p + i) = '\0';
	return (p);
}
