#include "search_algos.h"
/**
 * print_array - prints it
 * @array: array to print
 * @start: start of array
 * @end: end of array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf(" %u,", array[i]);
		else
			printf(" %u\n", array[i]);
	}
}
/**
 * actual_search - searches it
 * @array: array to go through
 * @l: low end
 * @h: high end
 * @value: value to search for
 * Return: index or -1
 */
int actual_search(int *array, size_t l, size_t h, int value)
{
	size_t mid = l + (h - l) / 2;

	print_array(array, l, h);
	if (array[mid] == value)
		return (mid);
	if (l == h)
		return (-1);
	if (h > l)
	{
		if (array[mid] > value)
			return (actual_search(array, l, mid - 1, value));
		else
			return (actual_search(array, mid + 1, h,  value));
	}
	return (-1);
}
/**
 * binary_search - searches binarily
 * @array: array to go through
 * @size: size of array
 * @value: value of array
 * Return: int val
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (actual_search(array, 0, size - 1, value));
}
