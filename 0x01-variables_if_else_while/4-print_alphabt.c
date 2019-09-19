#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase.
 * except q and a
 * Return: 0
 **/

int main(void)
{
	int init_alphabet = 97;

	while (init_alphabet <= 122)
	{
	if (init_alphabet != 101 && init_alphabet != 113)
	{
	putchar(init_alphabet);
	}
	init_alphabet++;
	}
	putchar('\n');
	return (0);
}
