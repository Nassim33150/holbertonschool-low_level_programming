#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: the string to duplicate
 *
 * Return: the string duplicate
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *strduplicated;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	strduplicated = malloc((sizeof(char) * i) + 1);

	if (strduplicated == NULL)
	{
		return (NULL);
	}

	while (a < i)
	{
		strduplicated[a] = str[a];
		a++;
	}

	strduplicated[a] = '\0';
	return (strduplicated);
}
