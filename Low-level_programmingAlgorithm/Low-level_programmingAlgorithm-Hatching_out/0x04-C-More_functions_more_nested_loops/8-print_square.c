#include "holberton.h"
/**
 * print_square - print_square
 * @n: Number
 * Return: 0
 */

void print_square(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
