#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid  - frees up a grid
 * @grid: grid to check
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
