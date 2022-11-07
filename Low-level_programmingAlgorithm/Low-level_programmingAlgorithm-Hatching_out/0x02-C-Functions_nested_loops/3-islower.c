#include "holberton.h"
/**
 * _islower - Lower
 * @c: Input val
 * Return: 0
 */
int _islower(int c)
{
	int i;

	if (c >= 97 && c <= 122)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
