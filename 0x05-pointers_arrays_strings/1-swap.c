#include "holberton.h"
#include <stdio.h>

/**
* swap_int - Function that swap two numbers
* parameter and updates the value it points to to 98.
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
