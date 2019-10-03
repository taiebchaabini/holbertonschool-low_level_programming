#include "holberton.h"
#include <stdio.h>

/**
* reverse_array - Function that reverses the content of an array of integers.
* @a: pointer to char
* @n: type int
**/

void reverse_array(int *a, int n)
{
	int i;
	char temp;


	n = n - 1;
	for (i = 0; i < n; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = temp;
		n--;
	}
}
