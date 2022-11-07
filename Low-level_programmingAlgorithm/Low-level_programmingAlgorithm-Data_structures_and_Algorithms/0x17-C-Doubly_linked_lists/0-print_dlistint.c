#include "lists.h"
/**
 * print_dlistint - print_dlistint
 * @h: head
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int i;

	i = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
