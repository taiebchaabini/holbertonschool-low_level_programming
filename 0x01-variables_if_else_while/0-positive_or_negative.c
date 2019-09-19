#include <stdlib.h>
#include <time.h>

/**
 * main - This program will print a random number each time it is executed.
 * return: Always 0 (Success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%f", n);
	if (n > 0)
	{
	printf("is positive");
	}
	else if (n == 0)
	{
	printf("is zero");
	}
	else
	{
	printf("is negative");
	}
	return (0);
}
