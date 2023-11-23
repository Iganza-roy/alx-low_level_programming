#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 ata given index
 * @n: pointer to a set of values
 * @index: the position of a value
 * Return: 1 on success and -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	k = 1 << index;
	*n = (*n | k);

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	return (1);
}
