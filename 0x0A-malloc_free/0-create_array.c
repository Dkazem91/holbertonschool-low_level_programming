#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of array to create
 * @c: char to initialize with?
 * Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	t = malloc(sizeof(char) * (size + 1));
	for (i = 0; i < size + 1; i++)
		t[i] = c;

	return (t);
}
