#include "holberton.h"
/**
 * print_line - print_line
 * @n: Number
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
