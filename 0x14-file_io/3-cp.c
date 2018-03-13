#include "holberton.h"
/**
 * main - program to copy
 * @ac: argument count
 * @av: array of arguments
 * Return: a value
 */
int main(int ac, char **av)
{
	int fdFrum, fdToo;
	long int wrote, readed;
	char *buff;

	buff = malloc(1024);
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		free(buff)
		exit(97);
	}
	fdFrum = open(av[1], O_RDONLY);
	if (fdFrum == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		free(buff);
		exit(98);
	}
	fdToo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(fdFrum, buff, 1024)) > 0)
	{
		wrote = write(fdToo, buff, readed);
		if (wrote == -1)
			return (-1);
	}

	if (close(fdFrum) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[1]);
		free(buff);
		exit(100);
	}
	if (close(fdToo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[2]);
		free(buff);
		exit(100);
	}
	free(buff);
	return (0);
}
