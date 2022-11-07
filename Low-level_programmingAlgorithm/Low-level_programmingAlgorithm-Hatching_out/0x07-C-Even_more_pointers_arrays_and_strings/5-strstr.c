#include "holberton.h"
#include <stdio.h>

/**
* _strstr - _strstr
* @haystack: char
* @needle: char
* Return: char
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int tp = 0;
	int b;

	/* Check same occurence */
	for (i = 0; haystack[i]; i++)
	{
		if (needle[0] == haystack[i])
			tp = i;
			/* Check entire string */
			b = 1;
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					b = 0;
				}
			}
		if (b == 1)
		{
			return (&haystack[tp]);
		}
	}
	return (NULL);

}
