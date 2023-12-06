#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the string to print.
 * @text_content: text to copy.
 *
 * Return: 1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len]; len++)
			;
	}
	else
	{
		if (filename != NULL)
			return (1);
		
		else
			return (-1);
	}

	fd = open(filename, O_APPEND | O_WRONLY);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
