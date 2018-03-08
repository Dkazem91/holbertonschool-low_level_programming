#include "holberton.h"
/**
 *
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	return ((*n) |= 1 << index);
}
