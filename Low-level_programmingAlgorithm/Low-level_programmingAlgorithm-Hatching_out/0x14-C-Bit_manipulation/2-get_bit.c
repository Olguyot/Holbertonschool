#include "holberton.h"

/**
 * get_bit - get_bit
 * @n: unsigned
 * @index: index
 * Return: unsigned
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int lb;

	if (index > 63)
		return (-1);
	lb = (n >> index);
	if (lb & 1)
		return (1);
	else
		return (0);
}
