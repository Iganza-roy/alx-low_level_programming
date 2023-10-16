#include "main.h"

/**
* swap_int - swaps two integers
* @a: integer 1
* @b: integer 2
* Return: void
*/

void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
