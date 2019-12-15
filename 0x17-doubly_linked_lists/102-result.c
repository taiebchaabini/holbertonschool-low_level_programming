#include "lists.h"
/**
*  hb_palindromes - A palindromic number reads the same both ways. The largest
* palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
**/
void hb_palindromes()
{
	int a = 0, b = 0;

	int res = 0, old = 0;
	char *cmb = NULL;

	for (a = 0; a <= 99; a++)
	{
		printf("--------------\n");
		for (b = 0; b <= 99; b++)
		{
			printf("%d\n", a * b);
		}
		printf("--------------\n");
	}
}
int main(void)
{
	hb_palindromes();
	exit(1);
}
