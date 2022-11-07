#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - _realloc
 * @ptr: int
 * @old_size: int
 * @new_size: int
 * Return: void*
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		tmp = malloc(new_size);
		if (tmp == NULL)
			return (NULL);
		return (tmp);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	tmp = malloc(new_size);
	free(ptr);
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
