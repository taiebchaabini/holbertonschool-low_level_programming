#include "holberton.h"

/**
* factorial - function that returns the factorial of a given number.
* @n: taking an integrer
* Return: return the factorial of @n, if n < 0 return error
**/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
