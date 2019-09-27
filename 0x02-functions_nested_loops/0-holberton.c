#include "holberton.h"

/**
  * main - Display Holberton with _putchar function
  * Return: Always return 0
**/

int main(void)
{
	int a;
	char text[] = "Holberton";

	for (a = 0; a < 9; a++)
	{
	_putchar(text[a]);
	}
	_putchar('\n');
	return (0);
}
