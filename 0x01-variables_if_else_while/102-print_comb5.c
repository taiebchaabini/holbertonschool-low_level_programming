#include <stdio.h>

/**
 * main - a program that prints all possible
 * different combinations of two digits.
 * Return: 0
 **/

int main(void)
{
	int p, c;


	for (p = 0; p < 99; p++)
	{
	for (c = p + 1; c < 100; c++)
	{
	putchar(p / 10 + '0');
	putchar(p % 10 + '0');
	putchar(' ');
	putchar(c / 10 + '0');
	putchar(c % 10 + '0');
	if (p != 98 || c != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
