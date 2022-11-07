#include <stdio.h>
#include "holberton.h"


/**
 * power2max - power2max
 * @n: unsigned
 * Return: unsigned
 */
unsigned long int power2max(unsigned long int n)
{
	unsigned long int i;
	unsigned long int cp;

	cp = 0;
	i = 1;
	while (((n >> i) != 0) && (i < 64))
	{
		i++;
		cp++;
	}
	return (cp);
}

/**
 * power2 - power2
 * @n: unsigned
 * Return: unsigned
 */
unsigned long int power2(unsigned long int n)
{
	unsigned long int res;

	if (n == 0)
		return (1);
	n = n - 1;
	res = 2 << n;

	return (res);
}

/**
 * print_binary - print_binary
 * @n: unsigned
 * Return: unsigned
 */
void print_binary(unsigned long int n)
{
	unsigned long int lb;
	unsigned long int i;

	if (n == 0)
		putchar('0');
	else
	{
		i = power2max(n);
		while (i > 0)
		{
			lb = n >> i;
			if (lb & 1)
				_putchar('1');
			else
				_putchar('0');
			i--;
		}
		if (i == 0)
		{
			lb = n >> i;
			if (lb & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
