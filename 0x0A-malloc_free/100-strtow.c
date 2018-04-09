#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * helper - helps function
 * @word: wordcount
 * @len: length
 * @str: string to go through
 * @s: array you are assigning
 * Return: char value
 */
char **helper(int word, int len, char *str, char **s)
{
	int i, k, j;

	j = 0;
	for (i = 0; i < word; i++)
	{
		k = 0;
		for (; j < len; j++)
		{
			if (str[0] != ' ' || str[j] != ' ')
			{
				s[i][k] = str[j];
				k++;
			}
			if (j != 0 && str[j] == ' ' && str[j - 1] != ' ')
			{
				j++;
				break;
			}
		}
		s[i][k + 1] = '\0';
	}
	s[word + 1] = NULL;
	return (s);
}
/**
 * strtow - string to words
 * @str: string to check
 * Return: return char value
 */
char **strtow(char *str)
{
	int len, i, j, size, k, word;
	char **s;

	if (str == NULL)
		return (NULL);
	len = 0;
	word = 0;
	while (str[len] != '\0')
	{
		if (str[0] != ' ')
		word++;
		if (str[len] != ' ' && str[len - 1] == ' ' && len != 0)
			word++;
		len++;
	}
	s = (char **)malloc(sizeof(char *) * word + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < word; i++)
	{
		size = 0;
		for (; j < len; j++)
		{
			if (str[0] != ' ' || str[j] != ' ')
				size++;
			if (str[j] == ' ' && size > 0)
				break;
		}
		printf("%d\n", size);
		s[i] = (char *)malloc(sizeof(char) * size + 1);
		if (s[i] == NULL)
		{
			for (k = i - 1; k >= 0; k--)
				free(s[k]);
			free(s);
		}
	}
	s = helper(word, len, str, s);
	return (s);
}
