#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
* Return: void
*/
void rev_string(char *s)
{
	int i;
	int cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
		cnt++;
	for (i = 0; i < cnt / 2; i++)
	{
		char k;

		k = s[i];
		s[i] = s[cnt - 1 - i];
		s[cnt - 1 - i] = k;
	}

}
