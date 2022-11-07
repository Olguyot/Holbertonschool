#include "holberton.h"
#include <stdio.h>
/**
 * main - main
 * Return: 0
 */

int main(void)
{
	long nb;
	long i;

	nb = 612852475143;

	for (i = 2; i < nb; i++)
		while (nb % i == 0)
			nb = nb / i;
	printf("%li\n", nb);

	return (0);
}
