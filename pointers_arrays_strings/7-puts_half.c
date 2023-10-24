#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, middle;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	middle = i / 2;
	for (; middle <= i; middle++)
	{
		_putchar(str[middle]);
	}
	_putchar('\n');
}
