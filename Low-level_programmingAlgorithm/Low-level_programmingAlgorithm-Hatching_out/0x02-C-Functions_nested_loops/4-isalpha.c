#include "holberton.h"
/**
 * _isalpha - _isalpha
 * @c: value
 * Return: 0
 */
int _isalpha(int c)
{
	int i;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
