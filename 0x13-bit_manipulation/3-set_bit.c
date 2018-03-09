#include "holberton.h"
#include "2-get_bit.c"
/**
 * set_bit - sets a bit
 * @n: integer to grab 
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
