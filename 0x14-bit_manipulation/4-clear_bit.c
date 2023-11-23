#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: parameter to be received
 * @index: the index starting from 0
 * Return: 1 on success and -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);

	if (index > 63)
		return (-1);
	return (1);

}
