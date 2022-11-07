#include "holberton.h"

/**
* swap_int - void swap_int
* @a: int 1
* @b: int 2
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
