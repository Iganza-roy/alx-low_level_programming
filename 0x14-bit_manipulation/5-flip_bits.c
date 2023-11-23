#include "main.h"
/**
 * flip_bits - returns number of bits to flip to get from
 * one number to another
 * @n: first parameter
 * @m: second parameter
 * Return: the number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bs;

	for (bs = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bs++;
	}
	return (bs);
}
