#include "holberton.h"
/**
  * _islower - checks for lowercase character.
  * @c: parameter type int
  * Return: 0 if doesnt meet the loop requirements
**/

int _islower(int c)
{
	if (c > 97 && c < 122)
	return (1);
	return (0);
}
