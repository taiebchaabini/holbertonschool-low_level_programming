#include "holberton.h"

/**
* _pow_recursion - function that returns the value of x raised
* to the power of y.
* @x: type of int
* @y: type of int
* Return: recursive return of @x raised to the power of @y
**/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y >= 1)
	{
		x = x * _pow_recursion(x, y - 1);
		return (x);
	}
	return (0);
}
