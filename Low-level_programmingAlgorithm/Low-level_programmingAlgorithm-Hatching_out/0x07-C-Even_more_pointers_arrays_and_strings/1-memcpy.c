#include "holberton.h"
#include <stdio.h>

/**
* _memcpy - _memcpy
* @dest: string
* @src: char
* @n: unsigned int
* Return: string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
