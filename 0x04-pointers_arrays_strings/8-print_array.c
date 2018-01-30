#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: pointer of array
 * @n: how many times to prints
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n -1; i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[i]);
}
