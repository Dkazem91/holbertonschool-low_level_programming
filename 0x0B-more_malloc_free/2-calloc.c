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

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		t[i] = 0;

	return (t);
}
