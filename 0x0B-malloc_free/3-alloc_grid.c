#include "main.h"

/**
 * *alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to a 2D array of int and NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **output, k, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);
	if (output == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		output[k] = malloc(sizeof(int) * width);
		if (output[k] == NULL)
		{
			free(output);
			for (i = 0; i <= height; i++)
				free (output[i]);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			output[k][i] = 0;
	}
	return (output);
}
