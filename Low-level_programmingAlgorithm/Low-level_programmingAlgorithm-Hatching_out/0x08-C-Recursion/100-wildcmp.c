#include <stdio.h>
#include "holberton.h"
/**
 * wildcmp - wildcmp
 * @s1: string
 * @s2: string
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	if (s2[0] == '\0' && s1[0] == '\0')
	{
		return (1);
	}
	if (s2[0] == s1[0])
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/* for multiple * */
	if (s2[0] == '*' && s1[0] == '\0')
		return (wildcmp(s1, s2 + 1));
	/* for multiple char for don't work */
	if (s2[0] == '*')
	{
		if (wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
