#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - strdup
 * @str: char
 * Return: char
 */

char *_strdup(char *str)
{
	char *str2;
	int i = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;

	str2 = malloc(sizeof(char) * i + 1);
	if (str2 == NULL)
	{
		printf("malloc fail");
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		str2[i] = str[i];
	str2[i] = '\0';
	return (str2);
}
