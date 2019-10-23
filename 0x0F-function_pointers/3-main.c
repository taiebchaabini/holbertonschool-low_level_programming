#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main -  program that performs simple operations.
* @argc: number of argc
* @argv: arguments passed
* Return: if success 0
**/
int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	char arg = *argv[2];
	int (*dcop)(int, int);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((arg == '/' && atoi(argv[3]) == 0) || (arg == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (arg == '+' || arg == '-' || arg == '*' || arg == '/' || arg == '%')
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		dcop = get_op_func(argv[2]);
		printf("%d\n", dcop(a, b));
		return(0);
	}
	printf("Error\n");
	exit(99);
}
