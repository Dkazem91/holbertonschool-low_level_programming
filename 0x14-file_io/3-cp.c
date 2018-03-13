#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
int main (int ac, char **av)
{
	int fdFrum,fdToo;
	long int wrote,readed;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(2,"Usage: cp file_from file_to\n");
		exit(97);
	}
	fdFrum = open(av[1],O_RDWR);
	if (fdFrum == -1)
	{
		dprintf(2,"Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdToo = open(av[2],O_CREAT | O_RDWR | O_TRUNC,0664);
	while ((readed = read(fdFrum,buff,1024)) > 0)
	{
		wrote = write(fdToo,buff,readed);
		if (wrote == -1)
			return(-1);
	}

	if(close(fdFrum))
	{
		dprintf(2,"Error: Can't close fd %s\n",av[1]);
		exit(100);
	}
	if(close(fdToo))
	{
		dprintf(2,"Error: Can't close fd %s\n",av[2]);
		exit(100);
	}
	return(1);
}
