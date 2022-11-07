#include "holberton.h"
/**
*_strcmp - _strcmp
* @s1: string 1
* @s2: string 2
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && (s1[i] || s2[i]); i++)
	;

	return (s1[i] - s2[i]);
}
