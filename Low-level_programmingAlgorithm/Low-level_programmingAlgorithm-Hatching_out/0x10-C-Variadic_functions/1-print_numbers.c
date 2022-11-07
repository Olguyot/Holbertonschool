#include "variadic_functions.h"
/**
 * print_numbers - print_numbers
 * @separator: const
 * @n : const
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(va, int));
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
