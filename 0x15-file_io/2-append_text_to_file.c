#include "holberton.h"
/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: file path to open
* @text_content: the text we will append to the file
* Return: 1 otherwise -1 (ERROR)
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, i = 0, wstate = 0;

	if (filename == NULL)
		return (ERROR);
	fd = open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL && fd != -1)
		return (1);
	if (fd == -1)
		return (ERROR);
	while (text_content[i])
		i++;
	wstate = write(fd, text_content, i);
	if (wstate == -1)
		return (ERROR);
	return (1);
}
