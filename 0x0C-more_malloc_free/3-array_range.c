#include "holberton.h"
#include <stdlib.h>

/**
* array_range - function that creates an array of integers.
* @min: w
* @max: w
* Return: w
**/

int *array_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < max; i++)
	{
		p[i] = min;
		min++;
	}
	p[i] = '\0';
	return (p);
}
