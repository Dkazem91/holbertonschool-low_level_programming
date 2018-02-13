#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats strings
 * @s1: first string to concat
 * @s2: second string to concat
 * Return: char value of concated string
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	int len1, len2, i;
	char *t;

	i = 0;
	len1 = 0;
	len2 = 0;
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}

	t = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
		t[i] = s1[i];

	for (i = 0; i < len2; i++)
		t[i + len1] = s2[i];

	return (t);
}
