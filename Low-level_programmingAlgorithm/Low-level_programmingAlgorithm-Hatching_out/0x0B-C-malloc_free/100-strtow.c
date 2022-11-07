#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _ischar - _ischar
 * @c : char c
 * Return: 1 else 0
 */
int _ischar(char c)
{
	if ((c >= '!' && c <= '~'))
		return (1);
	else
		return (0);
}

/**
 * _strlen - _strlen
 * @s: string
 * @j: start pos
 * Return: size of a word depending of start pos
 */
int _strlen(char *s, int j)
{
	int i;

	for (i = j; s[i] != '\0' &&  s[i] != ' '; i++)
		;
	return (i - j);
}

/**
 * _nbword - _nbword
 * @s: string
 * Return: number of words
 */
int _nbword(char *s)
{
	int i;
	int k;
	int j;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (_ischar(s[i]) == 1)
		{
			for (j = 0; _ischar(s[i]) == 1; j++)
				i++;
			k++;
		}
		else
			i++;
	}
	return (k);
}
/**
 * strtow - strtow
 * @str: char
 * Return: char
 */

char **strtow(char *str)
{
	char **ar;
	int i;
	int j;
	int k;
	int len;

	/*Detect nb word to alloc*/
	if (str == NULL)
		return (NULL);
	if (_nbword(str) == 0)
		return (NULL);
	ar = malloc((_nbword(str) + 1) * sizeof(char *));
	if (ar == NULL)
		return (NULL);
	/*Loop to string*/
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		/*Detect string start*/
		if (_ischar(str[i]) == 1)
		{
			/*Alloc len de words*/ /*comment utiliser seulemt _strlen(str)*/
			/* Detect size string */
			len = _strlen(str, i);
			ar[k] = malloc((len + 1) * sizeof(char));
			/*Loop to add each char in tab + add '\0' end*/
			for (j = 0; _ischar(str[i]) == 1; j++)
			{
				ar[k][j] = str[i];
				i++;
			}
			ar[k][j] = '\0'; /*Seems to work*/
			k++;
		}
		else
			i++;
		ar[k] = NULL;/*Seems to work*/
	}
	return (ar);
}
