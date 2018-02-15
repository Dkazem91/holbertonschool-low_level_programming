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
	char *t;
	unsigned int i;

	t = malloc(nmemb * size);
	i = 0;
	while (i < nmemb * size)
	{
		t[i] = '\0';
		i++;
	}

	return (t);
}
