#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * followed by a new line.
 * Return: 0
 **/

int main(void)
{
	int n;
	char c;

	n = 0;
	c = 'a';

	while (n <= 9)
	{
	putchar(n + '0');
	n++;
	}
	while (c <= 'f')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
