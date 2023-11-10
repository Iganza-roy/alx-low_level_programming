#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: type of argument
 *
 * Return: any argument passed
 */
void print_all(const char * const format, ...)
{
	int k, chkst;

	char *str;
	va_list sc;

	va_start(sc, format);i

	k = 0;
	chkst = 0;

	while (format != NULL && format[k] != '\0')
	{
		switch (format[k])
		{
			case 'i':
				printf("%d", va_arg(sc, int));
				chkst = 0;
				break;
			case 'f':
				printf("%f", va_arg(sc, double));
				chkst = 0;
				break;
			case 'c':
				printf("%c", va_arg(sc, int));
				chkst = 0;
				break;
			case 's':
				str = va_arg(sc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				chkst = 1;
				break;
		}
		if (format[k + 1] != '\0' && chkst == 0)
			printf(", ");
		k++;
	}
	printf("\n");
	va_end(sc);
}
