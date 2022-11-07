#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
int _strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * Multiplier un chiffre n1 par une infinite de chiffre le resultat sous char et decalle de dec ( max long int)
 */ 

char *Multiplication(char *res, char n1, char *n2, long int dec)
{
	/*n2 le plus a droite)*/
	int ret = 0;
	int restp;
	char c;
	int i; /*compteur de char */
	int j = 0; /* compteur de res */
	for (i = _strlen(n2) - 1; i >= 0; i--)
	{
		restp = ((n1 - '0') * (n2[i] - '0')) + ret;
		if (ret > 0)
			ret = 0;
		//printf("j = %d, restp FULL  = %d\n",j, restp);
		if (restp >= 10)
		{
			ret = restp / 10;
			restp = restp % 10;
		}
		//printf("i = %d j = %d", i, j); 
		//printf("n2[i] = %d, n1[0] - '0'= %d, n2[i] - '0'= %d, restp = %d, ret = %d\n",n2[i],  n1[0] - '0', n2[i] - '0',restp, ret);
		c = restp + 48;
		//printf("c = %c ajout de c dans j\n", c);
		res[j] = c;
		if (ret > 0 && i == 0)
		{
			j++;
			//printf("ajoute retenue dans res %d", ret);
			res[j] = ret + 48;
		}
		j++;
		
	}
	for (i = 1; i <= dec; i++)
	{

		res[j] = 48;
		j++;
	}
	res[j] = '\0';
	return (res);
}



/**
 * @ac,: int
 * Return: int
 */

int main(int ac, char *av[])
{
	char *ar;
	char nb;
	int i,j,k;

	ar = malloc(100 * sizeof(char));
	if (ar == NULL)
		return (0);
	k = 0;
	for (i = _strlen(av[1]) - 1; i >= 0; i--)
	{
		printf("AV1i vault %c and av2 i vault  %s\n",av[1][i], av[2]);
		Multiplication(ar, av[1][i], av[2], k);
		printf("[main res] %s\n ", ar);
	}
	free (ar);
	return (0);
}
