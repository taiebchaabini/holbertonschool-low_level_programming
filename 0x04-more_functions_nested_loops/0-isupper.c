#include "holberton.h"

/**
  * _isupper - Function that checks for uppercase character
  * @c: int
  * Return: 1 if c is upper otherwise it returns 0
**/
int _isupper(int c)
{
	if (c > 65 && c < 90)
		return (1);
	return (0);
}
