#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		char *ptr;
		int num = strtol(argv[i], &ptr, 10);

		if (*ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		i++;
		add += num;
	}

	printf("%d\n", add);
	return (0);
}
