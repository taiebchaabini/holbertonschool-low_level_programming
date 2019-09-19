#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase.
 * Return: 0
 **/

int main(void)
{
	int init_alphabet = 97;

	while (init_alphabet < 122)
	{
		putchar(init_alphabet);
		init_alphabet++;
	}
	putchar('\n');
	return (0);
}
