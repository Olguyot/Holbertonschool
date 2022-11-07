#include "lists.h"
/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: listint_t
 * @idx: int
 * @n: int
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *node;

	unsigned int i;

	i = 0;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	node = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	i = 1;
	while (node)
	{
		if (i == idx)
		{
			new->next = node->next;
			node->next = new;
			node = node->next;
			node = node->next;
			return (new);
		}
		else
		{
			node = node->next;
		}
		i++;
	}
	return (NULL);
}
