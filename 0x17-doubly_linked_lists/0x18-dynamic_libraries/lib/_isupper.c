#include "holberton.h"

/**
  * _isupper - Function that checks for uppercase character
  * @c: int
  * Return: 1 if c is upper otherwise it returns 0
**/
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
