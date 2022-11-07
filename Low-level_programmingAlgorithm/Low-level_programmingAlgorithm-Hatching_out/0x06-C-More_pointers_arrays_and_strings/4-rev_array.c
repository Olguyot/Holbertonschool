#include "holberton.h"
#include <stdio.h>
/**
* reverse_array - reverse_array
* @a: int point
* @n: int 2
*/

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	n = n - 1;
	for (i = 0; i <= n + 1 / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
