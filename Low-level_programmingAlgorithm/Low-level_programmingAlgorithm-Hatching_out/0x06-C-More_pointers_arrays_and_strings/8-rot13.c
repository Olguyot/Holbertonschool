#include "holberton.h"
/**
* rot13 - rot13
* @s: pointer
* Return: char
*/

char *rot13(char *s)
{
	int i;
	int j;
	int b;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		b = 0;
		for (j = 0; c[j] && b == 0; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = c2[j];
				b = 1;
			}
		}
	}
	return (s);
}
