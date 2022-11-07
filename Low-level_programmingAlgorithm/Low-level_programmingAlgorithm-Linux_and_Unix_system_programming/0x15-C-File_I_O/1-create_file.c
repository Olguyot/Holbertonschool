#include "holberton.h"
/**
 *create_file - create_file
 *@filename: char
 *@text_content: size
 *Return: w
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned long int i;
	int w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	close(fd);
	if (text_content == NULL)
		return (1);
	i = 0;
	while (text_content[i])
		i++;
	fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
