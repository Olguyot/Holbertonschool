#include "variadic_functions.h"
/**
 * print_strings - print_strings
 * @separator: separator
 * @n: constant to stop variadic
 * Return: argument of type string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;
	char *s;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(va, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(va);
}
