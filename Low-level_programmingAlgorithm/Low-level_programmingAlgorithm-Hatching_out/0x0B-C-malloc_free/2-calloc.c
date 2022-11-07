#include<stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _calloc - _calloc
 * @nmemb: unsigned
 * @size: unsigned
 * Return: unsigned
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return ('\0');
	s = malloc(size * nmemb);
	if (s == NULL)
		return ('\0');

	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;

	return (s);
}
