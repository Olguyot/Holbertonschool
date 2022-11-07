#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - malloc_checked
 * @b: unsigned
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned long int *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);

	return (c);
}
