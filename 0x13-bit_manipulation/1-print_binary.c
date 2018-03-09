#include "holberton.h"
/**
 * print_binary - print binary
 * @n: integer to mess with
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	i <<= ((sizeof(i) * 8) - 1);
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
		}
	while (i > 0)
	{
		if ((i & n) == 0)
			i = i >> 1;
		else
			break;
	}
	while (i > 0)
	{
		if ((i & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		i = i >> 1;
	}

}
