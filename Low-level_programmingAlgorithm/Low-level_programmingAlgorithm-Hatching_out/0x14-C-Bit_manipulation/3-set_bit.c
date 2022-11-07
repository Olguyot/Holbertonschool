#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - set_bit
 * @n: unsigned
 * @index: index
 * Return: unsigned
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
