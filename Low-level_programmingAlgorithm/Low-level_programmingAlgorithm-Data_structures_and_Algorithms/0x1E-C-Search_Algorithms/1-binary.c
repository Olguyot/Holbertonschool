#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  * @array: A pointer to the first element.
  * @size: The number of elements
  * @value: The value to search
  * Return: return value
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left;
	size_t right;
	size_t m;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		m = left + (right - left) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			right = m - 1;
		else
			left = m + 1;
	}
	return (-1);
}
