#include "holberton.h"
#include <stdio.h>

/**
* _strspn - _strspn
* @s: char
* @accept: char
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int b = 1;
	int b1;

	for (i = 0; b == 1 ; i++)
	{
		b1 = 0;
		b = 0;
		for (j = 0; accept[j] && b1 == 0; j++)
		{
			if (accept[j] == s[i])
			{
				b = 1;
				b1 = 1;
			}

		}
	}
	if (i != 0)
		i -= 1;
	return (i);
}
