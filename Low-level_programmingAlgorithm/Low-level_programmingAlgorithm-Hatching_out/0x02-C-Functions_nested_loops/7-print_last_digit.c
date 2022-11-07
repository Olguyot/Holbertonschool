#include "holberton.h"
/**
 * print_last_digit - last digit
 * @i: int value
 * Return: 0
 */

int print_last_digit(int i)
{
	int d;

	d = i % 10;
	if (d < 0)
		d = d * -1;
	_putchar('0' + d);
	return (d);
}
