#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2D grid previously created by alloc grid
 * @grid: grid of integers
 * @height: the number of rows
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
