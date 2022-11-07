#include "variadic_functions.h"

/**
 * print_char - print_char
 * @separator: separateur
 * @va: valist
 * Return: void
 */

void print_char(const char *separator, va_list va)
{
	printf("%s%c", separator, va_arg(va, int));
}

/**
 * print_str - print_str
 * @separator: separateur
 * @va: valist
 * Return: void
 */

void print_str(const char *separator, va_list va)
{
	char *s;

	s = va_arg(va, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s%s", separator, s);
}

/**
 * print_integer - print_integer
 * @separator: separateur
 * @va: valist
 * Return: void
 */

void print_integer(const char *separator, va_list va)
{
	printf("%s%i", separator, va_arg(va, int));
}
/**
 * print_float - print_float
 * @separator: separateur
 * @va: valist
 * Return: void
 */

void print_float(const char *separator, va_list va)
{
	printf("%s%f", separator, va_arg(va, double));
}
/**
 * print_all - print_all
 * @format: const char*
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list va;
	char *separator = "";
	s_format tab[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	int i;
	int j;

	va_start(va, format);
	i = 0;
	/*parcourt le format */
	/* format = "ceis" */
	while (format && format[i])
	{
		j = 0;
		/*parcourt la structure*/
		while (tab[j].type)
		{
			if (format[i] == (*tab[j].type))
			/*launch associated format */
			{
				tab[j].fuprint(separator, va);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(va);
}
