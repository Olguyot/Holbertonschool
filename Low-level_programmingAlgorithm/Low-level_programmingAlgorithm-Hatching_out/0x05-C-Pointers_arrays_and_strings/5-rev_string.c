#include "holberton.h"

/**
 * _strlen - strlen
 * @s: string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}

/**
 * rev_string - rev_string
 * @s: string
 */

void rev_string(char *s)
{
	int i;
	int size;
	char tmp;

	size = _strlen(s);
	size -= 1;

	for (i = 0; i <= size / 2; i++)
	{
		tmp = s[i];
		s[i] = s[size - i];
		s[size - i] = tmp;
	}
}
