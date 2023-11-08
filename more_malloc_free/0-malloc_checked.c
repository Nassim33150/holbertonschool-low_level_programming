#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);

}
