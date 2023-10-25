#include "main.h"

/**
 * prime - calculate if its a prime
 * @k: input
 * @j: divisor
 * Return: (0)
 */

int prime(int k, int j)
{
	if (k <= 1 || (k != j && k % j == 0))
	{
		return (0);
	}
	else if (k == j)
	{
		return (1);
	}
	return (prime(k, j + 1));
}
/**
 * is_prime_number - calculates if a number is prime
 * @n: the number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
