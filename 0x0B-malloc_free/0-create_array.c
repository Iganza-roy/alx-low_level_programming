#include "main.h"

/**
 * create_array - creates an arrays of chars
 * @size: size to be allocated
 * @c: character
 * Return: NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int k;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		arr[k] = c;
	return (arr);
}
