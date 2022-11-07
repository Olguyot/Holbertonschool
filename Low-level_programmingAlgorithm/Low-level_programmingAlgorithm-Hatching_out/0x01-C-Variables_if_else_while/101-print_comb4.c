#include <stdio.h>
/**
 * main -Entry
 * Return: 0
 */
int main(void)
{
	int u;
	int d;
	int c;

	c  = '0';
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			u = '0';
			while (u <= '9')
			{
				if (c < d && d < u)
				{
					putchar(c);
					putchar(d);
					putchar(u);
					if (c != '7' || d != '8' || u != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				u++;
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
