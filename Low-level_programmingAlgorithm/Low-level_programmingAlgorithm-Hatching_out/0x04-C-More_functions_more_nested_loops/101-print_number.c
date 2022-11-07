#include "holberton.h"
/**
 * print_number - print_number
 * @n: integer number
 * Return: 0
 */

void print_number(int n)
{
	unsigned int i;
	unsigned int nbcar;
	unsigned int nbcarpower;
	unsigned int n1;

	nbcar = 0;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n == 0)
		_putchar('0');
	n1 = n;
	while (n % 10 != 0 || n / 10 != 0)
	{
		nbcar += 1;
		n /= 10;
	}
	while (nbcar > 0)
	{
		nbcarpower = 1;
		for (i = 1; i < nbcar; i++)
			nbcarpower = nbcarpower * 10;
		_putchar((n1 / nbcarpower) % 10 + '0');
		nbcar -= 1;
	}
}
