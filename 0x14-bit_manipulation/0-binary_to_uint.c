#include "holberton.h"
/**
* tc_strlen - count the number of characters in a string
* @a: take a string as argument
* Return: if @a is not null return the number of string otherwise 0
**/
unsigned int tc_strlen(const char *a)
{
	unsigned int i = 0;

	if (a == NULL)
		return (0);
	while (a[i] != '\0')
		i++;
	return (i);
}
/**
* tc_binarytodec - convert passed binary to dec
* @a: take a string as argument
* Return: if @a is not null return the converted decimal number
**/
unsigned int tc_binarytodec(const char *a)
{
	int i = 0, sum = 0, len;

	if (a == NULL)
		return (-1);

	len = tc_strlen(a) - 1;
	while (len >= 0)
	{
		if (a[i] != '0' && a[i] != '1')
			return (0);

		if (a[i] == '1')
			sum += 1 << len;

		i++;
		len--;
	}

	return (sum);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer of char, getting bits
 * Return: the converted number OR 0 if there is more than characters in
 * the string b, that is not 0 or 1 OR if b is NULL
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;

	if (b == NULL)
		return (0);
	res = tc_binarytodec(b);
	return (res);
}
