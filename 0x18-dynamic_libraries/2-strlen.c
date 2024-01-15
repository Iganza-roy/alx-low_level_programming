#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string to be counted
* Return: length og the string
*/

int _strlen(char *s)
{
	int i;
	int cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
		cnt++;
	return (cnt);
}
