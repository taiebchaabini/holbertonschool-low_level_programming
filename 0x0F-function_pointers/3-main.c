#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main -  program that performs simple operations.
* @argc: number of argc
* @argv: arguments passed
* Return: return 99 if no arg passed otherwise if success 0
**/
int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	char arg = *argv[2];
	int (*dcop)(int, int);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		return (98);
	}
	if (arg == '+' || arg == '-' || arg == '*' || arg == '/' || arg == '%')
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if ((arg == '/' && b == 0) || (arg == '%' && b == 0))
		{
			printf("Error\n");
			return (100);
		}
		dcop = get_op_func(argv[2]);
		printf("%d\n", dcop(a, b));
		return (0);
	}
	printf("Error\n");
	return (99);
}
