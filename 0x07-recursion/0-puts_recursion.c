#include "holberton.h"
/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s)
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
