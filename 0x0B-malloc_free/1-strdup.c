#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string
 * Return: NuLL if str is NULL and a pointer to a new string
 */

char *_strdup(char *str)
{
	char *cp;
	int cnt = 0, k;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
		cnt++;

	cp = malloc(sizeof(char) * cnt + 1);

	if (cp == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		cp[k] = str[k];
	return (cp);
}
