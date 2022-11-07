#include "holberton.h"
/**
 * print_triangle - print_triangle
 * @size: size var
 * Return: 0
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	k = 1;
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; size > 0; j++)
		{
			for (i = 0; i < size - 1; i++)
			{
				_putchar(' ');
			}
			size -= 1;
			for (i = 0; i < k; i++)
				_putchar('#');
			k++;
			_putchar('\n');
		}
	}
}
