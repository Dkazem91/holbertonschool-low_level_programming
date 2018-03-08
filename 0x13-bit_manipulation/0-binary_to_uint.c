#include "holberton.h"
/**
 * binary_to_uint - binary to uint
 * @b: string to convert
 * Return: unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, count = 0, sum = 0, bi = 1;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
	{
		count++;
	}
	for (i = count - 1; i != 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (sum * 0);
		sum += (b[i] - '0') * bi;
		bi *= 2;
	}
	sum += (b[i] - '0') * bi;

	return (sum);
}
