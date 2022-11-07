#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - create_array
 * @size: int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		printf("ar not null");
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
