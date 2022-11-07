#include "lists.h"
/**
 * listint_len - listint_len
 * @h: const
 * Return: const
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
