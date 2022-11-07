#include "holberton.h"
/**
 * _abs - Val absolute
 * @c: int value
 * Return: 0
 */

int _abs(int c)
{
	int i;

	if (c < 0)
	{
		i = -1 * c;
	}
	else
	{
		i = c;
	}
	return (i);
}
