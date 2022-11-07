#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - print_diagsums
* @a: string
* @size: size
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	int res = 0;
	int j = 0;

	for (i = 0; i < size; i++)
	{
		if (i > 0)
		{
			j += size + 1;
			res += a[j];
		}
		else
			res = a[i];
	}
	printf("%i, ", res);
	res = 0;
	j = size - 1;
	for (i = size - 1; i >= 0; i--)
	{
		if (i == size - 1)
			res = a[i];
		else
		{
			j += size - 1;
			res += a[j];
		}
	}
	printf("%i\n", res);
}
