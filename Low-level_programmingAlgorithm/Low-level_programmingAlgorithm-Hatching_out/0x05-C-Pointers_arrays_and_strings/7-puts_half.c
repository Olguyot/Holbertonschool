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
* puts_half - puts_half
* @str: string
*/

void puts_half(char *str)
{
	int i;
	int size;
	int max;

	max = _strlen(str);
	if (max % 2 != 0)
		size = (max + 1) / 2;
	else
		size = max / 2;
	for (i = size; i < max; i++)
		_putchar(str[i]);
	_putchar('\n');
}
