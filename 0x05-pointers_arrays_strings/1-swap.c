#include "holberton.h"
#include <stdio.h>

/**
* reset_to_98 - Function that takes a pointer to an int as
* parameter and updates the value it points to to 98.
* @n: pointer to int
**/

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
