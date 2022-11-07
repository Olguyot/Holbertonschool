#include <stdio.h>
#include "holberton.h"
/**
 * get_endianness - get_endianness
 * Return: unsigned
 */

int get_endianness(void)
{
	char *c;
	unsigned int i = 1;

	c = (char *)&i;
	if (*c == 1)
		return (1);
	else
		return (0);
}
