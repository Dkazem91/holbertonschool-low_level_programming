#include "sort.h"
/**
 * bubble_sort sorts bubbly
 * @array: array to sort
 * @size: size
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, swaps = 0;

	for(i = 0; i < size; i++)
	{
		if(array[i] > array[i + 1])
		{
			tmp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = tmp;
			print_array(array, size);
			swaps = 1;
		}
	}
	if(swaps)
		bubble_sort(array, size);
}
