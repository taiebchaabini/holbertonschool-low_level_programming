#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc.
* @b: Size of malloc
* Return: exit program if there is a problem with allocation
 **/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
