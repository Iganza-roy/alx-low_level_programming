#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory foa an array
 * @nmemb: number of elements
 * @size: size of of memory
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = malloc(nmemb * size);

	if (k == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		k[j] = 0;
	return (k);
}
