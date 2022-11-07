#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit - clear_bit
 * @n: unsigned
 * @index: index
 * Return: unsigned
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	i = ~i;
	*n = *n & i;
	return (1);
}
