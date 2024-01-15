#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int k;

	for (k = 0; k < n && *src != '\0'; k++)
	{
		dest[len + k] = *src;
		src++;
	}
	dest[len + k] = '\0';
	return (dest);
}
