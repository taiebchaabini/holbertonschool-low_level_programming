#include "holberton.h"
#include <stdio.h>

/**
* swap_int - Function that swap two numbers
* @a: pointer to int
* @b: pointer to int
**/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
