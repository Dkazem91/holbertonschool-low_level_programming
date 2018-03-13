#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	long int wrote;

	while (text_content[len])
		len++;
	if(filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT |O_RDWR|O_TRUNC,0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		wrote = write(fd, text_content,len);
		if (wrote == -1)
			return (-1);
	}
	return (1);
}
