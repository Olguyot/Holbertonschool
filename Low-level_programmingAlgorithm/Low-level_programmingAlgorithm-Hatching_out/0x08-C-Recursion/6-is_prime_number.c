#include "holberton.h"
#include <stdio.h>

/**
 * prime - prime
 * @n: constant
 * @i: i recursive loop
 * Return: 1 prime, 0 no prime
 */
int prime(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else
	{
		if (i * i == n)
			return (0);
		return (prime(n, i + 1));
	}
}

/**
 * is_prime_number - is_prime_number
 * @n: Number;
 *  Return: 1 prime, 0 no prime
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
