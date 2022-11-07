#include <stdio.h>
#include "holberton.h"

/**
 * power - power
 * @nb: cnb
 * @pow: pow
 * Return: const
 */

unsigned int power(unsigned int nb, unsigned int pow)
{
	unsigned int i;
	unsigned int res;

	res = nb;
	if (pow == 0)
		return (1);
	for (i = 1; i < pow; i++)
		res *= nb;
	return (res);
}


/**
 * binary_to_uint - binary_to_uint
 * @b: const
 * Return: const
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int len;
	unsigned int sum;

	i = 0;
	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	len = i - 1;
	sum = 0;
	for (i = 0; b[i]; i++)
	{
		sum += (b[i] - '0') * power(2, len);
		len -= 1;
	}

	return (sum);
}
