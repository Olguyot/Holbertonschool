#include "holberton.h"
#include <stdio.h>
/**
 * main - main
 * Return: 0
 */

int main(void)
{
	long int i;
	long int j;
	long int k;
	long int res;

	i = 1;
	j = 2;
	res = 2;

	k = 0;
	while (k <= 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0)
		{
			res = res + k;
		}
	}
	printf("%li\n", res);
	return (0);
}
