#include "holberton.h"
/**
* _strlen - _strlen
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
* puts2 - puts2
* @str: string
*/

void puts2(char *str)
{
	int i;
	int size;

	size = _strlen(str);
	for (i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
