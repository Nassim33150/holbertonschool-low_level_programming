#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int x, size = 0;
	int start;
	int end;
	int hoolder;

	for (x = 0; s[x] != '\0'; x++)
	{
		size++;
	}

	end = size - 1;

	for (start = 0; start < (size / 2); start++)
	{
		hoolder = s[start];
		s[start] = s[end];
		s[end] = hoolder;
		end --;
	}
}
