#include "lists.h"

/**
 * print_list - print_list
 * @h: constant list
 * Return: Number of node
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		i++;
	}
	return (i);
}
