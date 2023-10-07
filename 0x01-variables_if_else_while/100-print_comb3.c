#include <stdio.h>

/**
 * main - Prints all possible two-digit combinations in ascending order.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	for (int n = 0; n <= 9; n++)
	{
		for (int m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
