#include "main.h"

/**
 * _strcat -  appends the src string to the dest string
 * @src: source string
 * @dest: destination string
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int slen = 0;
	int dlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dlen++;
	for (i = 0; src[i] != '\0'; i++)
		slen++;
	for (i = 0; i <= slen; i++)
		dest[dlen + i] = src[i];
	return (dest);
}
