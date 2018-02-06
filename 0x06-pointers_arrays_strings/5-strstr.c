#include "holberton.h"
/**
 * _strstr - locates substring
 * @haystack: string to locte
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != haystack[i] && needle[j] != '\0'; j++)
		{
		}
		if (needle[j - 1] == '\0')
		{
			return (haystack + i);
		}

	}
	return ('\0');
}
