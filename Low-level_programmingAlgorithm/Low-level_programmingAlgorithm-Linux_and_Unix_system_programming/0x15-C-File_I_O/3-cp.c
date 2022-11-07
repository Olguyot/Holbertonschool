#include "holberton.h"

/**
 * main - Entry point
 * @ac: number of argument
 * @av: arguments.
 * Return: 0 in success.
 */
int main(int ac, char **av)
{
	char buf[1024];
	int e1, e, fd_from, fd_in, nb;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_in = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (fd_in == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((nb = read(fd_from, buf, 1024)) != 0)
	{
		e = write(fd_in, buf, nb);
		if (e == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (nb == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	e = close(fd_from);
	e1 = close(fd_in);
	if (e == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from), exit(100);
	if (e1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_in), exit(100);
	return (0);
}
