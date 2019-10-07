#include "holberton.h"

/**
* print_chessboard - function that prints the chessboard.
* @a: getting the chess board table[8][8]
**/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int b = 0;

	for (i = 0; i < 8; i++)
	{
	for (b = 0; b < 8; b++)
	{
		_putchar(a[i][b]);
	}
	if (b <= 8 || i <= 8)
		_putchar('\n');
	}
}
