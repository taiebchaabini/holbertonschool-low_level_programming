#include <stdio.h>

/**
 * main - a program that prints the numbers from 00 to 99.
 * Return: 0
 **/

int main(void)
{
	short int n;

	n = 0;

	while (n <= 99)
	{
	putchar( n / 10 + '0');
	putchar( n % 10 + '0');
	if (n < 99)
	{
	putchar(',');
	putchar(' ');
	}
	
	n++;
	}
	putchar('\n');
	return (0);
}
