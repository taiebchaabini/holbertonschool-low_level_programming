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

	for (a = 0; a <= 9; a++)
	{
		printf("--------------\n");
		for (b = 0; b <= 9; b++)
		{
			printf("%d", a);
			printf("%d\n", b);
			cmb = malloc(sizeof((a + '0') + (b + '0')));
			cmb[0] = a + '0';
			cmb[1] = b + '0';
			res =  atoi(cmb);
			printf("OLD IS : %d\n", old);
			printf("RES IS : %d\n", res);
			if (res != old || old == 0)
				old = atoi(cmb);
			printf("Comb is : %d\n", res * res);
		}
		printf("--------------\n");
	}
}
int main(void)
{
	hb_palindromes();
	exit(1);
}
