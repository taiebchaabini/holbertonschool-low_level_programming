#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiplies two numbers.
* @argc: count number of argument passed to the function size @argv
* @argv: array of arguments passed size of @argc
* Return: always return 0
**/

int main(int argc, char **argv)
{
	int i = 0;

	argc = argc - 1;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (0);
}
