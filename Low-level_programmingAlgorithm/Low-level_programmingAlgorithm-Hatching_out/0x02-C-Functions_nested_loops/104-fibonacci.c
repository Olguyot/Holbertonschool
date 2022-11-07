#include "holberton.h"
#include <stdio.h>
/**
 * main - main
 * Return: 0
 */

int main(void)
{
	unsigned long a = 1, b = 2, c, a2 = 0, ncut = 10000000000;
	unsigned long i, b2, c2, a1, b1, c1;

	printf("1, 2, ");
	for (i = 3; i <= 98; i++)
	{
		if (a + b > b)
		{
			c = a + b;
			a = b;
			b = c;
			printf("%lu, ", c);
		}
		else
		{
			if (a2 == 0)
			{
				a2 = a % ncut;
				b2 = b % ncut;
				a1 = a / ncut;
				b1 = b / ncut;
			}
			c1 = a1 + b1;
			c2 = a2 + b2;
			if (c2 >= ncut)
			{
				c2 = c2 % ncut;
				c1 += 1;
			}
			a1 = b1;
			b1 = c1;
			a2 = b2;
			b2 = c2;
			if (i != 98)
				printf("%lu%lu, ", c1, c2);
			else
				printf("%lu%lu\n", c1, c2);
		}
	}
	return (0);
}
