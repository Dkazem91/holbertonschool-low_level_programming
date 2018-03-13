#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: filename to grab
 * @text_content: content to add
 * Return: int value
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
