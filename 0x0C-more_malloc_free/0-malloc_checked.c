#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *opt;

	opt = malloc(b);

	if (opt == NULL)
		exit(98);
	else
		return (opt);
}
