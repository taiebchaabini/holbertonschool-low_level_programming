#include <stdio.h>
#include <stdlib.h>
/**
* main - that prints the minimum number of coins
* @argc: count number of argument passed to the function size @argv
* @argv: array of arguments passed size of @argc
* Return: always return 0
**/
int main(int argc, char **argv)
{
	int b = 0, cents = 0, result = 0;
	int coin1 = 25, coin2 = 10, coin3 = 5, coin4 = 2, coin5 = 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (b = b; argv[1][b] != '\0'; b++)
		{
			if (argv[1][b] >= 48 && argv[1][b] <= 57)
			;
			else
			{
				printf("0\n");
				return (0);
			}
		}
		cents = atoi(argv[1]);
		result = cents / coin1;
		cents %= coin1;
		result += cents / coin2;
		cents %= coin2;
		result += cents / coin3;
		cents %= coin3;
		result += cents / coin4;
		cents %= coin4;
		result += cents / coin5;
		cents %= coin5;
	}
	printf("%d\n", result);
	return (0);
}
