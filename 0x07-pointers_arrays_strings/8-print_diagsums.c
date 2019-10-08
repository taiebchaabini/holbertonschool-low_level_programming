#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - function that prints the sum of the two diagonals
* of a square matrix of integers
* @a: Getting table
* @size: size of diagonals
**/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int ii = 0;
	int b = 0;
	int lval = 0;
	int rval = 0;
	int c = size - 1;

	for (i = 0; i < size * size; i++)
	{
		if (i > 0)
		i = i + size;
		lval += a[i];
	}
	for (b = 1; b <= size; b++)
	{
		ii = b * c;
		rval += a[ii];
	}
	printf("%d, %d\n", lval, rval);
}
