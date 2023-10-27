#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string1
 * @needle: substring
 *
 * Return: pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
