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

	for (i = 0; i < n / 2; i++)
	{
		if (i == 0)
			n = n - 1;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
	for (i = i; i < n; i++)
		a[i] = '\0';
}
