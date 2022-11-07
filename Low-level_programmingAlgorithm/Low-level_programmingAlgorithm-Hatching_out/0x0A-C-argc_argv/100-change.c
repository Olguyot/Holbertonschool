#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: c
 */

int main(int argc, char *argv[])
{
	int coinval[5] = {25, 10, 5, 2, 1};
	int money;
	int coin = 0;
	int cointotal = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coin = money / coinval[i];
		if ((coin >= 1 && (money % coinval[i]) != 0) || coin * coinval[i] == money)
		{
			money = money % coinval[i];
			cointotal += coin;
		}
	}
	printf("%i\n", cointotal);
	return (0);
}
