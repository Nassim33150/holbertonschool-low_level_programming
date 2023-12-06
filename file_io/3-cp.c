#include "main.h"


/**
 * 
 * 
 * 
 * 
*/

int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, r, w, fd_to, w_to, close_from, close_to;
	unsigned int len = 0;
	char *buf;


	if (file_from == NULL)
		return (-1);

	fd_from = open(file_from, O_RDONLY);

	for (; buf[len]; len++)
		;

	buf = malloc(sizeof(char) * len);
	if (buf == NULL)
		return (0);

	r = read(fd_from, buf, len);
	w = write (STDOUT_FILENO, buf, r);

	close_from = close(fd_from);

	if (fd_from == -1)
	{
		dprintf (fileno(stderr),"Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	w_to = write(fd_to, buf, r);

	close_to = close(fd_to);

	if (fd_to == -1 || w_to == -1)
	{	
		dprintf (fileno(stderr), "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}

	if (close_from == -1 || close_to == -1)
	{
		dprintf (fileno(stderr), "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (w);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = copy_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
