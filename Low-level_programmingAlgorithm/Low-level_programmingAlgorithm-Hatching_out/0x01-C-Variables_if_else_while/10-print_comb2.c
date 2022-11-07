#include <stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (j != '9' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
