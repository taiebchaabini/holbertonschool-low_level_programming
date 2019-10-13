#include <stdio.h>
#include <stdlib.h>

/**
* main - function that prints all arguments it receives.
* @argc: count number of argument passed to the function size @argv
* @argv: array of arguments passed size of @argc
* Return: always return 0
**/

int main(int argc, char **argv)
{
	(void) *argv;
	argc = argc - 1;
	printf("%d\n", argc);
	return (0);
}
