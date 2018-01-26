#include "holberton.h"

/**
 * print_number - prints number
 *
 * @n: integer to print to character
 */
void print_number(int n)
{
	int i;
	int d = 1;
	int x = n;
	int c = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	while (x != 0)
	{
		x = x / 10;
		c++;
	}
	for (i = 0; i <= c; i++)
	{
		d *= 10;
	}
	for (i = 0; i < c; i++)
	{
		_putchar((n / d) + '0');
		n = n % d;
		d = d / 10;
	}
}
