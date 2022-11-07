#ifndef __VARIADIC_FUNCTION_H__
#define __VARIADIC_FUNCTION_H__
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct s_format - structure for print function
 * @type: type;
 * @fuprint: structure to print function
 */
struct s_format
{
	char *type;
	void (*fuprint)(const char *, va_list);
};
typedef struct s_format s_format;
#endif
