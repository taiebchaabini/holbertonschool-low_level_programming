#include <stdio.h>
#include <stdlib.h>

/**
* main - program that adds positive numbers.
* @argc: count number of argument passed to the function size @argv
* @argv: array of arguments passed size of @argc
* Return: always return 0
**/
int main(int argc, char **argv)
{
	int i = 1;
	int b = 0;
	int result = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = i; i < argc; i++)
		{
			for (b = b; argv[i][b] != '\0'; b++)
			{
				if (argv[i][b] >= 48 && argv[i][b] <= 57)
				;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			b = 0;
				result = result + atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
