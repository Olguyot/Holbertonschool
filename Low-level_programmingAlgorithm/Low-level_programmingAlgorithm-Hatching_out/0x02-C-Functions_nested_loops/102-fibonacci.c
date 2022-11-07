#include "holberton.h"
#include <stdio.h>
/**
 * main - main
 * Return: 0
 */

int main(void)
{
	long int i;
	long int j;
	long int k;
	int cp;

	i = 1;
	j = 2;
	printf("1, 2, ");
	for (cp = 3; cp <= 50; cp++)
	{
		k = i + j;
		i = j;
		j = k;
		if (cp != 50)
			printf("%li, ", k);
		else
			printf("%li", k);
	}
	printf("\n");
	return (0);
}
