#include <stdio.h>

/**
 * main - a program that prints all possible
 * different combinations of two digits.
 * Return: 0
 **/

int main(void)
{
	short int n, i;

	n = 0;
	i = 0;
	while (i <= 9)
	{
	n = i + 1;
	while (n <= 9)
	{
	putchar(i + '0');
	putchar(n + '0');
	if (i < 8 || n < 9)
	{
	putchar(',');
	putchar(' ');
	}
	n++;
	}
	i++;
	}
	putchar('\n');
	return (0);
}
