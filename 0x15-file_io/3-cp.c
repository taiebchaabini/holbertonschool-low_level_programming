#include "holberton.h"

/**
* c_file - copy the content from file 1 to new file2
* or existing file
* @file1: src file
* @file2: dest file
**/
void c_file(char *file1, char *fil2)
{
	int i = 0, fd = 0, fd2 = 0, wstate = 0, cstate = 0, cstate2 = 0;


	fd = open(file1, O_RDONLY);
	fd2 = open(file2, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	while ((i = read(fd, &buf, 1024)) != 0)
	{
		wstate = write(fd2, &buf, 1024);
	}
	if (wstate == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	cstate = close(fd);
	if (cstate == -1 || cstate2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
		exit(100);
	}

}
/**
* main - program that copies the content of a file to another file.
* @ac: number of arguments
* @av: arguments of the program
* Return: 0 if success otherwise exit with ERROR CODE
**/
int main(int ac, char **av)
{
	int fd = 0, i = 0, cstate = 0;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	c_file(av[1], av[2]);
	return (0);
}

