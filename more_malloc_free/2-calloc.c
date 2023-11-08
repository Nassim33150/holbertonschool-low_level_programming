#include "main.h"
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: number of members
 * @size: size
 *
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	s = malloc(l);

	if (s == NULL)
		return (NULL);

	while (i < l)
	{
		s[i] = 0;
		i++;
	}

	return (s);
}
