#include <stdio.h>
#include "holberton.h"
/**
 * flip_bits - flip_bits
 * @n: unsigned
 * @m: index
 * Return: unsigned
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int nb1;

	nb1 = 0;
	i = n ^ m;
	while (i != 0)
	{
		if (i & 1)
			nb1++;
		i = i >> 1;
	}
	return (nb1);
}
