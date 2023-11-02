#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of string
 * Return: pointer to the newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1l = 0;
	unsigned int s2l = 0;
	char *otp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1l++;
	for (i = 0; s2[i] != '\0'; i++)
		s2l++;

	otp = malloc(sizeof(char) * (s1l + n) + 1);
	if (otp ==  NULL)
		return (NULL);
	if (n >= s2l)
	{
		for (i = 0; s1[i] != '\0'; i++)
			otp[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			otp[s1l + i] = s2[i];
		otp[s1l + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			otp[i] = s1[i];
		for (i = 0; i < n; i++)
			otp[s1l + i] = s2[i];
		otp[s1l + i] = '\0';
	}
	return (otp);
}
