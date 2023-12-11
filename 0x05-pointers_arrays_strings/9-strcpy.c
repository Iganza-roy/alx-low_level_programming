#include "main.h"

/**
*_strcpy - copies string to the buffer
* @dest: destiation string
* @src: source string
* Return: the new string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
