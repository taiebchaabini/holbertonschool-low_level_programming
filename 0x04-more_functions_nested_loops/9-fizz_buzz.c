#include "holberton.h"
#include <stdio.h>

/**
  * main - The “Fizz-Buzz test”
  * Return: Always return 0
 **/
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 5 == 0 && a % 3 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
		{
			printf("Buzz");
			if (a != 100)
			printf(" ");
		}
		else
			printf("%d ", a);
		if (a == 100)
			printf("\n");
	}
	return (0);
}
