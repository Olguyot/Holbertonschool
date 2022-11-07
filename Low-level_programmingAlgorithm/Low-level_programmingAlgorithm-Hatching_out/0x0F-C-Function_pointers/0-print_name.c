#include <stdio.h>
/**
 * print_name - print_name
 * @name: char
 * @f: char
 * Return: char
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
