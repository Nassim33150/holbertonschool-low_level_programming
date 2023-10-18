#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 97; a < 123; a++)
			_putchar(a);
		_putchar('\n');
	}
}
