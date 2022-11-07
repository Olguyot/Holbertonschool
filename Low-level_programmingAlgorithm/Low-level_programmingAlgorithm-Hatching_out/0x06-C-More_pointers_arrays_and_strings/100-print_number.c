#include "holberton.h"
/**
* print_number - print_number
* @n: int
* Return: char
*/

void print_number(int n)
{
	int nbpower = 1;
	unsigned int nb = n;
	unsigned int nb1 = n;

	if (n < 0)
	{
		nb = -n;
		nb1 = -n;
		_putchar('-');
	}
	while (nb / 10 != 0)
	{
		nb /= 10;
		nbpower *= 10;
	}
	nb = nb1;
	while (nbpower > 0)
	{
		nb1 = nb / nbpower;
		_putchar(nb1  + '0');
		nb = nb - nb1 * nbpower;
		nbpower /= 10;
	}
}
