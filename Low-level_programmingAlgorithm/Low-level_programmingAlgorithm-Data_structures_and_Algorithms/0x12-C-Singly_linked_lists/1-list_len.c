#include "lists.h"

/**
 * list_len - list_len
 * @h: constant list
 * Return: Number of node
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			i++;
		h = h->next;
	}
	return (i);
}
