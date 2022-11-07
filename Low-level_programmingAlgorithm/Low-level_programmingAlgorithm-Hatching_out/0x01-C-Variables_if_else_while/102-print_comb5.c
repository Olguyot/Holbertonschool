#include <stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int cp1;
	int cp2;

	for (cp1 = 0; cp1 < 100; cp1++)
	{
		for (cp2 = 0; cp2 < 100; cp2++)
		{
			if (cp2 > cp1)
			{
				putchar(cp1 / 10 + '0');
				putchar(cp1 % 10 + '0');
				putchar(' ');
				putchar(cp2 / 10 + '0');
				putchar(cp2 % 10 + '0');
				if (cp1 != 98 || cp2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
