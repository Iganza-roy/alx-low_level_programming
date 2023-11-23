#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: parameter taken
 * @index: the position to be returned
 * Return: value of the bit at index on success and -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (n == 0 && index < 64)
		return (0);
	for (k = 0; k < 63; n >>= 1, k++)
	{
		if (index == k)
		{
			return (n & 1);
		}
	}
	return (-1);

}
