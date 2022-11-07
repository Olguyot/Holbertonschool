#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - _puts_recursion
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);
		return (_puts_recursion(s + 1));
	}
}
