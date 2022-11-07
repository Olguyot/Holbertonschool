#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - argstostr
 * @ac: int
 * @av: char
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	s = malloc(len + 1 * sizeof(char) + ac);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';

	return (s);
}
