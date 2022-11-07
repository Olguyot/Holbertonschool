#include <stdlib.h>
#include <stdio.h>
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
 * str_concat - str_concat
 * @s1: char
 * @s2: char
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(sizeof(char) * (_strlen(s1)  + _strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s[j] = s2[i];
		j++;
	}
	s[j] = '\0';
	return (s);
}
