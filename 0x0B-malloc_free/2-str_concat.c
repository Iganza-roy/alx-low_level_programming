#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to a newly allocated space and on failure return NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int s1l = 0;
	int s2l = 0;
	int k;
	char *retv;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (k = 0; s1[k] != '\0'; k++)
		s1l++;
	for (k = 0; s2[k] != '\0'; k++)
		s2l++;
	retv = malloc(sizeof(char) * (s1l + s2l) + 1);
	if (retv == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		retv[k] = s1[k];
	for (k = 0; s2[k] != '\0'; k++)
		retv[s1l + k] = s2[k];
	return (retv);
}
