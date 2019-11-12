#include "holberton.h"
/**
* main - program that copies the content of a file to another file.
* @ac: number of arguments
* @av: arguments of the program
* Return: 0 if success otherwise it depends fn error
**/
int main(int ac, char **av)
{
	int fd = 0, i = 0;
	int fd2 = 0, wstate = 0;
	char buf[1024];
	int FD_VALUE = 0;

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	i = read(fd, buf, 1024);
	if (fd == -1 || i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wstate = write(fd2, buf, i);
	if (fd2 == -1 || wstate == -1)
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
	return (0);
}
