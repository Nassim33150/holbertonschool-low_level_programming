#include "main.h"
#include <stdio.h>
/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/
void more_numbers(void)
{
	int i;

	for (i = 0 ; i <= 14; i++)
{
	putchar('0' + i);
}
	putchar('\n');
}

