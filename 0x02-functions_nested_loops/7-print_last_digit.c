#include "holberton.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
	_putchar(_abs(n) % 10 + '0');
	return (_abs(n) % 10);
}
