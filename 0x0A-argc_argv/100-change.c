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
	int b = 0, amount = 0, result = 0;
	int coin1 = 25, coin2 = 10, coin3 = 5, coin4 = 2, coin5 = 1;

	argc = argc - 1;
	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (b = b; argv[1][b] != '\0'; b++)
		{
			if (argv[1][b] < 48 && argv[1][b] > 57)
			{
				printf("0\n");
				return (0);
			}
		}
		amount = atoi(argv[1]);
		if (amount >= 50)
			result = amount / coin1 + amount % coin1;
		else if (amount > 10)
			result = amount % coin2;
		else if (amount == 10)
			result = amount / coin2 + amount % coin2;
		else if (amount >= 5)
			result = amount / coin3 + amount % coin3;
		else if (amount >= 2)
			result = amount / coin4 + amount % coin4;
		else if (amount >= 1)
			result = amount / coin4 + amount % coin5;
	}
	printf("%d\n", result);
	return (result);
}
