#include "holberton.h"
/**
 * print_binary - print binary
 * @n: integer to mess with
 */
void print_binary(unsigned long int n)
{
	unsigned long long i = n;

	while (i > 0)
	{
		if ((i & n) == 0)
			_putchar('0');
		else
		{
			_putchar('1');
		}
		i = i >> 1;
	}
}
