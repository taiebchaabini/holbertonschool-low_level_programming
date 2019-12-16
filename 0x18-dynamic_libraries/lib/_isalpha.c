#include "holberton.h"
/**
  * _isalpha - checks for alphabetic character.
  * @c: parameter type int
  * Return: 0 if the parameter is not a letter, lowercase or uppercase
**/
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	return (1);
	return (0);
}
