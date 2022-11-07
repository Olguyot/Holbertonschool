#include "holberton.h"
#include <stdio.h>

/**
* _strpbrk - _strpbrk
* @s: char
* @accept: char
* Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int b;
	int b1 = 0;

	for (i = 0; s[i] && b1 == 0; i++)
	{
		b  = 0;
		for (j = 0; accept[j] && b == 0; j++)
		{
			if (accept[j] == s[i])
			{
				b = 1;
				b1 = 1;
			}
		}
	}
	if (i > 0)
		i -= 1;
	if (b1 == 0)
		return (NULL);
	else
		return (&s[i]);
}
