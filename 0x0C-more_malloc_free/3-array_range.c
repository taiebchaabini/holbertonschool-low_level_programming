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
	int b = (max - min) + 1;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < b; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
