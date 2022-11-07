#include "holberton.h"
/**
* leet - leet
* @s: pointer
* Return: char
*/

char *leet(char *s)
{
	int i;
	int j;
	char tb[] = "aeotl";
	char tb2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if ((s[i] == tb[j]) || (s[i] == tb[j] - ('a' - 'A')))
				s[i] = tb2[j];
		}
	}
	return (s);
}
