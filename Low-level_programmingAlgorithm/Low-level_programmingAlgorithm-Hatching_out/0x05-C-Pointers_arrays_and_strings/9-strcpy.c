#include "holberton.h"
/**
* _strcpy - _strcpy
* @dest: string pointed returned
* @src: string to copy
* Return: Always 0.
*/

char  *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
