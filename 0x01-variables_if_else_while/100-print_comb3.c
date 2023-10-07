#include <stdio.h>

/**
 * main - Prints all possible two-digit combinations in ascending order.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;
	
	for (n = 0; n <= 9; n++)
	{
		for (m = 49; m <= 57; m++)
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
