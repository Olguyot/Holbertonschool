#include "holberton.h"
/**
 * print_times_table - Time table with n
 * @n: integer 1
 * Return: 0
 */

void print_times_table(int n)
{
	int i;
	int j;
	int res;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (!(n > 15 || n < 0))
			{
				res = i * j;
				if (j == 0)
					_putchar('0');
				else
					_putchar(' ');
				if (j != 0 && res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				else if (res >= 100 && res < 1000)
				{
					_putchar(res / 100 + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar(res % 10 + '0');
				}
				if (j != n)
					_putchar(',');
				if (j == n)
					_putchar('\n');
			}
		}
	}
}
