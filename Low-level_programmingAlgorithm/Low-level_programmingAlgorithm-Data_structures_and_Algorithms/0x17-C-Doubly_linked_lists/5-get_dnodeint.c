#include "lists.h"
/**
 * get_dnodeint_at_index - get_dnodeint_at_index
 * @head: head
 * @index: index
 * Return: void
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cp;

	cp = 0;
	while (head)
	{
		if (cp == index)
			return (head);
		head = head->next;
		cp++;
	}
	return (NULL);
}
