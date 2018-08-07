#include "search_algos.h"
void print_array(int *array, size_t start, size_t end)
{
	size_t i;
	printf("Searching in array:");
	for (i = start; i < end; i++)
	{
		if ((i + 1) != end)
			printf(" %d,", array[i]);
		else
			printf(" %d\n", array[i]);
	}
}
int actual_search(int *array, size_t l, size_t h, int value)
{
	size_t mid = (l + h) / 2;
	print_array(array, l, h);
	if (l == h || (l + 1) == h)
		return (-1);
	if (array[mid] == value)
	{
		print_array(array, mid, h);
		return (mid);
	}
	if (array[mid] > value)
		return (actual_search(array, l, mid - 1, value));
	else
		return (actual_search(array, mid, h,  value));
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
	return actual_search(array, 0, size, value);
}
