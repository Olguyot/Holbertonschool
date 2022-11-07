#include "holberton.h"
/**
 *read_textfile - read_textfile
 *@filename: char
 *@letters: size
 *Return: w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sz;
	int tw;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	sz = read(fd, buf, letters);
	if (sz == -1)
	{
		free(buf);
		return (0);
	}
	buf[sz] = '\0';
	tw = write(STDOUT_FILENO, buf, sz);
	if (tw == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (sz);
}
