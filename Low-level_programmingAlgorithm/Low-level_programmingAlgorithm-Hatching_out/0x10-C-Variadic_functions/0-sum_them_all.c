#include "variadic_functions.h"

/**
 * sum_them_all - sum_them_all
 * @n: const
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int i;
	va_list a_list;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(a_list, n);

	for (i = 0; i != n; i++)
	{
		sum += va_arg(a_list, int);
	}
	return (sum);
}
