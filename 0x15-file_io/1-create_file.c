#include "holberton.h"
/**
* create_file - function that creates a file.
* @filename: file path to open
* @text_content: content to write into the file
* Return: return 1 on success otherwise -1 on failure
**/
int create_file(const char *filename, char *text_content)
{
	int i = 0, fd = 0, wstate;
	char error[6] = "fails\n";

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
		write(1, error, 6);
	}
	if (text_content == NULL)
		return (1);
	while (text_content[i] != '\0')
		i++;
	wstate = write(fd, text_content, i);
	if (wstate == -1 || wstate != i)
	{
		write(1, error, 6);
		return (-1);
	}
	close(fd);
	return (1);
}
