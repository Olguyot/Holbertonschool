#include "holberton.h"
/**
* string_toupper - string_toupper
* @s: pointer
* Return: char
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');
	}
	return (s);
}
