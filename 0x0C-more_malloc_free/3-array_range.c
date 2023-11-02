#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creatrs an array of integers
 * @min: minimum value
 * @max: maximumvale
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pntr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pntr = malloc(sizeof(int) * size);

	if (pntr ==  NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pntr[i] = min++;

	return (pntr);
}
