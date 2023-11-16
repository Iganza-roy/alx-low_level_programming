#include "lists.h"

/*
 * _putchar - prints a single character
 * @c: char to be printed
 * Return: character
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
