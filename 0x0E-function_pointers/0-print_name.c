#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print the name
 * @name: name to print
 * @f: function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
