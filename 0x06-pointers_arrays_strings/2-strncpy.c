#include "main.h"

/**
 * _strncpy - copies a string from source to destination
 * @dest: destination string
 * @src: source string
 * @n: number of characters in the string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
