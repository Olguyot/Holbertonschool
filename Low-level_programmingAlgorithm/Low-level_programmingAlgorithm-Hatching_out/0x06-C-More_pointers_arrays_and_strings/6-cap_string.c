#include "holberton.h"
#include <stdio.h>
/**
* delimiter - delimiter
* @c: special char
* Return: int 0 or 1
*/

int delimiter(char c)
{
	int res;

	res = 0;
	if (c == '\t' || c == '\n')
		res = 1;
	if (c == ',' || c == ';' || c == '.' || c == '!' || c == '?' || c == '"')
		res = 1;
	if (c == '(' || c == ')' || c == '{' || c == '}' || c == ' ')
		res = 1;

	return (res);
}
/**
* cap_string - cap_string
* @s: pointer
* Return: char
*/

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (((s[i] >= 'a' && s[i] <= 'z') && (delimiter(s[i - 1]) == 1 || i == 0)))
			s[i] = s[i] - ('a' - 'A');
	}
	return (s);
}
