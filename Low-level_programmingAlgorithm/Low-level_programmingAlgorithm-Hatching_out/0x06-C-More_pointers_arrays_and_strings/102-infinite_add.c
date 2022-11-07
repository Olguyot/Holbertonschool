#include "holberton.h"
/**
* str_len - str_len
* @s: string
* Return: int
*/
int str_len(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	;

	return (i);
}
/**
* reverse_str - reverse_str
* @s: string
* Return: int
*/
char *reverse_str(char *s)
{
	char tmp;
	int size;
	int i;

	size = str_len(s) - 1;
	for (i = 0; i <= size / 2; i++)
	{
		tmp = s[i];
		s[i] = s[size - i];
		s[size - i] = tmp;
	}
	return (s);
}
/**
* ctoint - ctoint
* @c: char
* Return: int
*/
int ctoint(char c)
{
	return (c - '0');
}
/**
* infinite_add - infinite_add
* @n1: char
* @n2: char
* @r: char
* @size_r: int
* Return: char
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int k;
	int ret = 0;
	int tmpn1 = 0;
	int tmpn2 = 0;
	int tmptot = 0;

	i = str_len(n1) - 1;
	j = str_len(n2) - 1;
	k = 0;
	while (i >= 0 || j >= 0 || ret != 0)
	{
		tmpn1 = ctoint(n1[i]);
		tmpn2 = ctoint(n2[j]);
		if (i < 0)
			tmpn1 = 0;
		if (j < 0)
			tmpn2 = 0;
		tmptot = tmpn1 + tmpn2 + ret;
		ret = 0;

		if (tmptot >= 10)
		{
			ret = 1;
			tmptot -= 10;
		}
		r[k] = tmptot + '0';
		i--;
		j--;
		k++;
	}
	r[k] = '\0';
	reverse_str(r);
	i = str_len(r);
	if (size_r <= i)
		return ('\0');
	return (r);
}
