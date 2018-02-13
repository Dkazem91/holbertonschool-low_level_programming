#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *t;

	if (str == '\0')
		return ('\0');
	while (str[c] != '\0')
		c++;

	t = malloc(sizeof(char) * c);
	for (i = 0; i <= c; i++)
		t[i] = str[i];

	return (t);

}
