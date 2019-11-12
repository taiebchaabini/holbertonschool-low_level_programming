#include "holberton.h"
/**
* read_textfile - function that reads a text file and prints it to the POSIX
* standard output.
* @filename: file path to open
* @letters: number of letter to read and print to standard ouput
* Return: if error 0 otherwise number of characters readed from
* the file and should be printed
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, i = 0, res = 0;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buf, letters);
	buf[letters] = '\0';

	while (buf[i] != '\0')
		i++;

	res = write(STDOUT_FILENO, buf, i);
	if (res == -1 || res != i)
		return (0);

	close(fd);
	return (i);
}
