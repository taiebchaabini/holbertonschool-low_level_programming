#include "holberton.h"

/**
* c_file - write the content passed to text_content in the new file
* or existing file
* @filename: filename where we are supposed to write the content
* @text_content: the content that should be copied to the new or existing file
* Return: 0 if success otherwise exist with ERROR CODE
**/
void c_file(char *filename, char *text_content)
{
	int i = 0, fd = 0, wstate = 0, cstate = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	while (text_content[i] != '\0')
		i++;
	wstate = write(fd, text_content, i);
	if (wstate == -1 || wstate != i || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	cstate = close(fd);
	if (cstate == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cstate);
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
	fd = open(av[1], O_RDONLY);
	i = read(fd, buf, sizeof(buf));
	if (i == -1 || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	c_file(av[2], buf);
	cstate = close(fd);
	if (cstate == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cstate);
		exit(100);
	}
	return (0);
}

