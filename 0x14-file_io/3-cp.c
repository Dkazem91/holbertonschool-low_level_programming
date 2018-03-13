#include "holberton.h"
/**
 * closeCheck - checks for closed
 * @value: value to check
 * Return: a value
 */
int closeCheck(int value)
{
	if (value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", value);
		close(fdToo);
		exit(100);
	}
	return (0);
}
/**
 * main - program to copy
 * @ac: argument count
 * @av: array of arguments
 * Return: a value
 */
int main(int ac, char **av)
{
	int fdFrum, fdToo, wrote, readed;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdFrum = open(av[1], O_RDONLY);
	if (fdFrum == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdToo = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdToo == -1)
	{
		close(fdFrum);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((readed = read(fdFrum, buff, 1024)) > 0)
	{
		wrote = write(fdToo, buff, readed);
		if (wrote == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
			close(fdFrum);
			close(fdToo);
		}
	}
	closeCheck(close(fdFrum));
	closeCheck(close(fdToo));
	return (0);
}
