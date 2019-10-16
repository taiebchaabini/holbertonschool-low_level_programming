#include <stdlib.h>
#include "holberton.h"

/**
* argstostr - function that concatenates all the arguments of your program.
* @ac: arg counts
* @av: arg array of string pointer of pointer
* Return: concatenates strings take from arguments
**/

char *argstostr(int ac, char **av)
{
	int i = 0, b = 0, c = 0, d = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
	{
		b = 0;
		for (; av[i][b] != '\0'; b++)
			c++;
	}

	p = malloc(c + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		b = 0;
		for (; av[i][b] != '\0'; b++)
		{
			p[d] = av[i][b];
			d++;
		}
		p[d] = '\n';
		d++;
	}
	return (p);
}
