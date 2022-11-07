#include "search_algos.h"
/**
 * linear_search - linear_search
 * @array: array to search
 * @size: size
 * @value: value
 * Return: search result
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size && array; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
