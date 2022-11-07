#include "lists.h"
/**
 * dlistint_len - dlistint_len
 * @h: head
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int i;

	i = 0;
	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
