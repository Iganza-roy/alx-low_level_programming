#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to the string params
 * Return: *s
 */

char *rot13(char *s)
{
	int k;
	int r;
	char d1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopkrstuvwxyzabcdefghijkln";
	for (k = 0; s[k] != '\0'; k++)
	{
		for (r = 0; r < 52; r++)
		{
			if (s[k] == d1[r])
			{
				s[k] = drot[r];
				break;
			}
		}
	}
	return (s);
}

