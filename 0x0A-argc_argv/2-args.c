#include <stdio.h>
#include <stdlib.h>

/**
* main - Program that prints all arguments it receives.
* @argc: count number of argument passed to the function size @argv
* @argv: array of arguments passed size of @argc
* Return: always return 0
**/

int main(int argc, char **argv)
{
	int i = 0;

	for (i = i; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
