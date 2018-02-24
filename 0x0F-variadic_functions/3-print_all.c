#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_c - prints char
 * @a: list to give
 * Return: always 0
 */
int print_c(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}
/**
 * print_i - prints int
 * @a: list to give
 * Return: always 0
 */
int print_i(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}
/**
 * print_f - prints float
 * @a: list to give
 * Return: always 0
 */
int print_f(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}
/**
 * print_s - prints string
 * @a: list to give
 * Return: always 0
 */
int print_s(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}
/**
 * print_all - prints all
 * @format: format string that says arg types
 *
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep = "";
	char *sep2 = ", ";
	va_list anyArgs;
	printer ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(anyArgs, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", sep);
				ops[j].f(anyArgs);
			}
			j++;
		}
		sep = sep2;
		i++;
	}
	printf("\n");
	va_end(anyArgs);
}
