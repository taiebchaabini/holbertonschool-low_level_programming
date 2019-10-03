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
	
	i = 0;
	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + ((n  - 1) - i));
		*(a + ((n - 1) - i)) = temp;
	}
}
