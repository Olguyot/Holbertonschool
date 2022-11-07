#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98- print 98
 * @n: integer 1
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n != 98; n--)
			printf("%i, ", n);
	}
	if (n < 98)
	{
		for (; n != 98; n++)
			printf("%i, ", n);
	}
	if (n == 98)
		printf("%i", n);
	printf("\n");
}
