#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big and 1 if little endianness
 */

int get_endianness(void)
{
	int i = 1;
	char *k;

	k = (char *) &i;

	return (*k);
}
