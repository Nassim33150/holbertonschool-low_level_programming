#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	for (x = x - 1; s[x] != '\0'; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
