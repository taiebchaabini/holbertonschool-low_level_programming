#include <stdio.h>
#include <stdlib.h>


/**
* main - a function that prints its name follow by a new line
* @argc: count number of argument passed to the function size @argv
* @argv: array of arguments passed size of @argc
* Return: always return 0
**/

int main(int argc, char **argv)
{
	while (argc--)
	{
	printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
	}
	return (0);
}
