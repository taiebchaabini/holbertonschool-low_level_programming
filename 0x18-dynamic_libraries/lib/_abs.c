#include "holberton.h"
/**
  * _abs - function that computes the absolute value of an integer.
  * @a: parameter type int
  * Return: if parameter is under 0 it make it positive
**/
int _abs(int a)
{
	if (a < 0)
	{
	a = -a;
	return (a);
	}
	return (a);
}
