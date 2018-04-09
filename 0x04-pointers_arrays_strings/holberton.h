#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
void _print_rev_recursion(char *s);
/**
 * _atoi - convert char to int
 * @s: string
 * Return: returns a value
 */
int _atoi(char *s);
/**
 * _strcpy - main function
 * @dest: destination
 * @src: source
 * Return: return value
 */
char *_strcpy(char *dest, char *src);
/**
 * print_ array - prints array
 * @a: array
 * @n: number of elements
 *
 */
void print_array(int *a, int n);
/**
 * puts_half - puts half
 *
 * @str: string to put half
 */
void puts_half(char *str);
/**
 * puts2 - puts things twice
 *
 * @str: string to put twice
 */
void puts2(char *str);
/**
 * rev_string - reverses value of string
 *
 *
 * @s: string to reverse
 */
void rev_string(char *s);
/**
 * _rev - reverse a string
 *
 * @s: string to reverse
 */
void print_rev(char *s);
/**
 * _puts - prints something with new line
 *
 * @str: string to put
 */
void _puts(char *str);
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - function to print alphabet
 *
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
void print_alphabet_x10(void);
/**
 * _islower - prints if c is lower case
 * @c: character to use
 * Return: 1 or 0
 */
int _islower(int c);
/**
 * _isalpha - prints if character is alphabet
 * @c: character to use
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0  or -1
 */
int print_sign(int n);
/**
 * _abs - gives absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);
/**
 * print_last_last - prints digit last
 *
 * @int: integer to input
 * Return: last digit of integer
 */
int print_last_digit(int);
/**
 * jack_bauer - jack bauer gooo
 *
 */
void jack_bauer(void);
/**
 * times_table - times this up
 *
 *
 */
void times_table(void);
/**
 * add - adds stuff up
 *
 * @int: integers to add
 * Return: returns a sum
 */
int add(int, int);
/**
 * print_to_98 - prints to 98
 * @n: integer to start at
 *
 */
void print_to_98(int n);
/**
 * print_times_table - whatever man
 *@n: integer to put in this table
 *
 */
void print_times_table(int n);
/**
 * _isupper - determines uppercase or not
 * @c: character to determine
 * Return: true or false
 */
int _isupper(int c);
/**
 * _isdigit - checks if it is digit
 * @c: character to check
 *
 * Return: returns boolean
 */
int _isdigit(int c);
/**
 * mul - multiplies stuff
 * @a: integer to multiply
 * @b: integer to multiply
 * Return: gives result
 */
int mul(int a, int b);
/**
 * print_numbers - prints the numbers
 *
 */
void print_numbers(void);
/**
 * print_most_numbers - prints the numbers
 *
 */
void print_most_numbers(void);

/**
 * more_numbers - prints the numbers
 *
 */
void more_numbers(void);
/**
 * print_line - prints a line
 *
 * @n: integer to print stuff
 */
void print_line(int n);
/**
 * print_diagonal - prints diagonal
 *
 * @n: integer to see how many stupid lines
 */
void print_diagonal(int n);
/**
 * print_square - prints a square
 *
 * @size: prints the size of whatever
 */
void print_square(int size);
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */
void print_triangle(int size);
/**
 * print_number - prints number
 *
 * @n: integer to print to char
 */
void print_number(int n);
/**
 * reset_to_98 - resets variable to 98
 *
 * @n: variable with pointer
 */
void reset_to_98(int *n);
/**
 * swap_int - swapts integer values
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b);
/**
 * _strlen - length of string
 * @s: string
 *
 * Return: returns length
 */
int _strlen(char *s);
#endif
