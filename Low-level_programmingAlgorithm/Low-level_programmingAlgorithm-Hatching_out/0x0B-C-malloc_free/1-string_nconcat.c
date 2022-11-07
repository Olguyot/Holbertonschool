#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - _strlen
 * @s: char
 * Return: char *
 */
int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	;
	return (k);
}

/**
 * string_nconcat - string_nconcat
 * @s1: char
 * @s2: char
 * @n : unsigned int
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	s3 = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (s3 == NULL)
		return (NULL);
	j = 0;
	k = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i] != '\0' && k < n; i++)
	{
		s3[j] = s2[i];
		j++;
		k++;
	}
	s3[j] = '\0';

	return (s3);
}
