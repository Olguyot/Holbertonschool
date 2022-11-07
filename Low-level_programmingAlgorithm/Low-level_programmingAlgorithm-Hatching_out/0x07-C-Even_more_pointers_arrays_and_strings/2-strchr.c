#include "holberton.h"
#include <stdio.h>

/**
* _strchr - _strchr
* @s: char
* @c: char
* Return: string
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
