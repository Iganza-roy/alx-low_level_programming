#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to the memory
 * @old_size: size of allocated space
 * @new_size: new size of new memory block
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *v;
	unsigned int i, k = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		v = malloc(new_size);
		return (v);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	v = malloc(new_size);
	if (v == NULL)
		return (NULL);
	if (new_size > old_size)
		k = old_size;
	for (i = 0; i < k; i++)
		v[i] = oldp[i];
	free(ptr);
	return (v);
}
