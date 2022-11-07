#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * array_range - array_range
 * @min: int
 * @max: int
 * Return: int
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int j;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);
	i = 0;
	j = 0;
	for (j = min; j <= max; j++)
	{
		ar[i] = j;
		i++;
	}
	return (ar);
}
