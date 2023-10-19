#include "main.h"

/**
 * string_toupper - lowercase to uppercase.
 * @str: The string to be chenged.
 * Return: A pointer in changed string.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
