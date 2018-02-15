#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *t[nmemb];
	unsigned int i, k;

	i = 0;
	while (i < nmemb)
	{
		t[i] = malloc(size);
		for (k = 0; k < size; k++)
			t[i][k] = '\0';
		i++;
	}

	return (*t);
}
