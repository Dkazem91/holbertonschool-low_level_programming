#include "holberton.h"

/**
 * print_times_table - times table function
 * @n: integer to return
 *
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int prod = j * i;

				if (j == 0)
				{
					_putchar('0');
				} else if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				} else if (prod > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prod / 100 + '0');
					_putchar((prod / 10) % 10 + '0');
					_putchar(prod % 10 + '0');
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
