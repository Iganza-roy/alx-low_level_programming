#include <stdio.h>

/**
 * main - Prints all possible two-digit combinations in ascending order.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 58; m++)
		{
			if (m > n)
			{
				putchar(n + '0');
				putchar(m + '0');
				if (n != 56 || m != 58)
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
