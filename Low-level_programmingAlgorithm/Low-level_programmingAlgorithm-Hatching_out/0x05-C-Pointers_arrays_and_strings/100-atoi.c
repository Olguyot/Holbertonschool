#include "holberton.h"
/**
 * _atoi - Transform string to integer
 * @s: string
 * Return: Integer
 */
int _atoi(char *s)
{
	int stnb;
	int ednb;
	int lennb;
	int res = 0;
	int coef = 1;
	int i = 0;
	int sign = 1;

/* Detect start number */
	for (i = 0; !(s[i] >= '0' && s[i] <= '9') && s[i] != '\0'; i++)
	;
	stnb = i;
/* Detect end number */
	for (; s[i] >= '0' && s[i] <= '9'; i++)
	;
	ednb = i;
/* sign */
	for (i = 0; i < stnb; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
	}
/* calculate len number*/
	lennb = ednb - stnb;
/* Convert Number */
	for (i = 1; i < lennb ; i++)
		coef *= 10;
	for (i = 0; i < lennb; i++)
	{
		res += sign * (s[stnb + i] - '0') * coef;
		coef /= 10;
	}

	return (res);
}
