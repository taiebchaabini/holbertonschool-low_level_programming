#include "holberton.h"

/**
  * main - Display Holberton with _putchar function
  * Return: void
**/

int main(void)
{
	unsigned int a;
	unsigned char text[] = "Holberton";

	for (a = 0; a < *(&text + 1) - text; a++)
	{
	_putchar(text[a]);
	}
	_putchar('\n');
	return (0);
}
