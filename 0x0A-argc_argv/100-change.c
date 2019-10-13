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
	int i = 0, b = 0, result = 0, c = 0;

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
			if (argv[1][b] >= 48 && argv[1][b] <= 57)
			{
				i++;
				if (argv[1][b] == 48)
					c = 1;
			}
			else
			{
				printf("0\n");
				return (0);
			}
		}

		if (i == 3)
		{
			result = atoi(argv[1]) % 25;
			result = result + atoi(argv[1]) / 25;
		}
		if (i == 2)
		{
			result = atoi(argv[1]) % 10;
			if (c == 1)
				result = result + atoi(argv[1]) / 10;
		}

	}
	printf("%d\n", result);
	return (result);
}
