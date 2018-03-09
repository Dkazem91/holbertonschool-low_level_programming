#include "holberton.h"
/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 * Return: unsigned int value of number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = n ^ m, count = 0;

	while (flips > 0)
	{
		count += flips & 1;
		flips >>= 1;
	}
	return (count);
}
