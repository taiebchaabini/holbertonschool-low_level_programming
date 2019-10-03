#include "holberton.h"

/**
* reverse_array - Function that reverses the content of an array of integers.
* @a: pointer to char
* @n: type int
**/
void reverse_array(int *a, int n)
{
	int i, b;
	char temp;

	b = n / 2;
	for (i = 0; i < b; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
