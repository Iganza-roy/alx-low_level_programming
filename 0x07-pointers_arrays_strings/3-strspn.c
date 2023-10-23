#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment
 * @accept: reference file
 *
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
