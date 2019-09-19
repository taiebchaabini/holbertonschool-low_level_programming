#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase.
 * Return: 0
 **/

int main(void)
{
	int init_alphabet = 97;
	int upper_alphabet = 65;

	while (init_alphabet <= 122)
	{
	putchar(init_alphabet);
	init_alphabet++;
	}
	while (upper_alphabet <= 90)
	{
	putchar(upper_alphabet);
	upper_alphabet++;
	}
	putchar('\n');
	return (0);
}
