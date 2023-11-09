#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters
 * Return: 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list k;
	unsigned int i, sum = 0;

	va_start(k, n);

	for (i = 0; i < n; i++)
		sum += va_arg(k, int);
	va_end(k);

	return (sum);
}
