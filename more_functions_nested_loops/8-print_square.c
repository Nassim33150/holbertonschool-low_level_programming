#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/
void print_square(int size)
{
	int i, n;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			_putchar('#');

			for (n = 0; n <= size; n++)
			{
				_putchar('#');

			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
