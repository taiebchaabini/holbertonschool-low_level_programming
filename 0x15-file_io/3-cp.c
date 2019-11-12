#include "holberton.h"
/**
* main - program that copies the content of a file to another file.
* @ac: number of arguments
* @av: arguments of the program
* Return: 0 if success otherwise exit with ERROR CODE
**/
int main(int ac, char **av)
{
	int fd = 0, i = 0, fd2 = 0, wstate = 0, FD_VALUE = 0;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);
	fd = open(av[1], O_RDONLY);
	i = read(fd, buf, 1024);
	if (fd == -1 || i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	wstate = write(fd2, buf, i);
	if (fd2 == -1 || wstate == -1 || wstate != i)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	FD_VALUE = close(fd);
	if (FD_VALUE == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", FD_VALUE);
		exit(100);
	}
	FD_VALUE = close(fd2);
	if (FD_VALUE == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", FD_VALUE);
		exit(100);
	}
	return (0);
}

