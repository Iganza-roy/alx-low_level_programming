#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return Always 0 (success)
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			if (j != 9)
			{
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
