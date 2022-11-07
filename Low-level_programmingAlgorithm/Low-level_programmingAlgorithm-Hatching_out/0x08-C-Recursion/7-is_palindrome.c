#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - _strlen
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * pal - pal
 * @s: string order
 * @i: integer
 * @n: constant str len
 * Return: pal
 */
int pal(char *s, int i, int n)
{
	if (i > n / 2)
		return (1);
	if (s[i] == s[n - 1 - i])
		return (pal(s, i +  1, n));
	return (0);
}

/**
 * is_palindrome - is_palindrome
 * @s: int
 * Return: int
 */

int is_palindrome(char *s)
{
	return (pal(s, 0, _strlen(s)));
}
