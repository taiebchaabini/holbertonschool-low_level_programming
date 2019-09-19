#include <stdio.h>

/**
 * main - a program that prints all possible
 * different combinations of two digits.
 * Return: 0
 **/

int main(void)
{
	short int n, i, k;

	k = 0;
	i = 1;
	n = 2;

	while (k <= 7)
	{
	i = k + 1;
	while (i <= 8)
	{
	n = i + 1;
	while (n <= 9)
	{
	putchar(k + '0');
	putchar(i + '0');
	putchar(n + '0');
	if (i < 8 || n < 9 || k < 7)
	{
	putchar(',');
	putchar(' ');
	}
	n++;
	}
	i++;
	}
	k++;
	}
	putchar('\n');
	return (0);
}
