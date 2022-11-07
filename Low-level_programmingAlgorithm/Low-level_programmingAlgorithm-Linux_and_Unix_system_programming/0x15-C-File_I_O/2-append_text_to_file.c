#include "holberton.h"
/**
 *append_text_to_file - append_text_to_file
 *@filename: char
 *@text_content: size
 *Return: w
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned long int i;
	int w;

	if (filename == NULL)
		return (-1);
	i = 0;
	if (text_content == NULL)
		return (1);
	while (text_content[i])
		i++;
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
