#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - function that searches for an integer.
* @array: array of int
* @size: size of array
* @cmp: pointer to function to compare int
* Return: if error -1
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && size && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
