#include "holberton.h"
/**
 * append_text_to_file - appends to file
 * @filename: name of file
 * @text_content: content of text
 * Return: int value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		wrote = write(fd, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
