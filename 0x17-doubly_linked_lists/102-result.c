#include "lists.h"
/**
 * rev_string - Function that reverse a string,
 * @s: pointer to char
 */

void rev_string(char *s)
{
	int n, i;
	char temp;

	n = 0;
	i = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	for (i = 0; i < n / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + ((n  - 1) - i));
		*(s + ((n - 1) - i)) = temp;
	}
}
/**
 *  hb_palindromes - A palindromic number reads the same both ways. The largest
 * palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 **/
void hb_palindromes(void)
{
	int a = 0, b = 0, res = 0, largest = 0;
	char buffer[10];
	char *rev;

	for (a = 0; a <= 999; a++)
	{
		for (b = 0; b <= 999; b++)
		{
			res = a * b;
			snprintf(buffer, sizeof(buffer), "%d", res);
			rev = strdup(buffer);
			rev_string(rev);
			if (strcmp(rev, buffer) == 0)
				largest = atoi(buffer);
		}
	}
	printf("%d", largest);
}

/**
 * main - Program that export a result the largest palindrome made from
 * the product of two 3-digit numbers.
 * Return: exit (1) if no error otherwise -1
**/
int main(void)
{
	hb_palindromes();
	exit(1);
}
