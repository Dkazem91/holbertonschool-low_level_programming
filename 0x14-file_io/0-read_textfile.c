#include "holberton.h"
/**
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, printed, wrote;
	char buff[letters];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	printed = read(fd, buff, letters);
	if (printed == -1)
		return (0);
	wrote = write(1, buff, printed);
	if (wrote == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	return (printed);
}
