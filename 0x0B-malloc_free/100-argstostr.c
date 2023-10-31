#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer
 * @av: pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int k, n, m = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (n = 0; av[k][n]; n++)
			j++;
	}
	j += ac;

	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (n = 0; av[k][n]; n++)
		{
			str[m] = av[k][n];
			m++;
		}
		if (str[m] == '\0')
		{
			str[m++] = '\n';
		}
	}
	return (str);
}
