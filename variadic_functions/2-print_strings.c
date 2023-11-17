#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints integer arguments with a separator
 *
 * @separator: - thing to print between strings
 * @n: - number of arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *str;
	va_list args;
	unsigned int i;

	if (separator == NULL || *separator == 0)
		sep = "";

	else
		sep = (char *) separator;

	va_start(args, n);

	if (n > 0)
		printf("%s", va_arg(args, char *));
	for (i = 1; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s%s", sep, str);
	}
	printf("\n");
	va_end(args);
}
