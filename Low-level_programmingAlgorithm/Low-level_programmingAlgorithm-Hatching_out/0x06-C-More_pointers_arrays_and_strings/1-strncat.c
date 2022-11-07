#include "holberton.h"
/**
* _strncat - _strncat
* @dest: destination
* @src: source
* @n: int
* Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	j = 0;
	for (; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
