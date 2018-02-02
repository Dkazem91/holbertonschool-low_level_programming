#include "holberton.h"
/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] - s2[i] == 0 && s[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
