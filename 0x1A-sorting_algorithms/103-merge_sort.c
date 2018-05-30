#include "sort.h"
void mergeSort(int *array, int * sortArr, size_t beg, size_t mid, size_t end)
{
	size_t i = beg, left, right;

	left = beg;
	right = mid + 1;
	printf("merging...\n");
	printf("[left]:");
	while(left <= mid)
		printf("%d ", array[left++]);
	printf("\n[right]:");
	while(right <= end)
	      printf("%d ", array[right++]);
	printf("\n");
	left = beg;
	right = mid + 1;
	for(i = beg; left <= mid && right <= end; i++)
		if(array[left] <= array[right])
			sortArr[i] = array[left++];
		else
			sortArr[i] = array[right++];
	while(left <= mid)
		sortArr[i++] = array[left++];
	while(right <= end)
		sortArr[i++] = array[right++];
	for(i = beg; i <= end; i++)
		array[i] = sortArr[i];
	printf("[Done]:");
	for (i = beg; i <= end; i++)
		printf("%d ", array[i]);
	printf("\n");
}
void merge(int *array, int *sortArr, size_t beg, size_t end)
{
	size_t mid = (beg + end) / 2;

	if(beg < end)
	{
		merge(array, sortArr, beg, mid);
		merge(array, sortArr, mid + 1, end);
		mergeSort(array, sortArr, beg, mid, end);
	}
}
/**
 * merge_sort - sorts mergly
 * @array: array sort
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *sortArr;

	if(!(array) || size < 2)
		return;
	sortArr = malloc(sizeof(size_t) * size);
	if(!(sortArr))
		return;
	merge(array, sortArr, 0, size - 1);
}
