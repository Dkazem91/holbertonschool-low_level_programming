#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds 5 functions
 * @a: int a
 * @b: int b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts
 * @a: int a
 * @b: int b
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies
 * @a: int a
 * @b: int b
 * Return: multipliy
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: int a
 * @b: int b
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulos
 * @a: int a
 * @b: int b
 * Return: modulo of ints
 */

int op_mod(int a, int b)
{
	return (a % b);
}
