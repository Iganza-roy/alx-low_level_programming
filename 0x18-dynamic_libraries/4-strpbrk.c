#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches for a string
 * @s: string1
 * @accept: string2
 *
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
