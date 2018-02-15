#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *t[nmemb];
	unsigned int i;

	i = 0;
	while (i < nmemb)
	{
		t[i] = malloc(size);
		memset(t[i], '\0', size);
		i++;
	}

	return (*t);
}
