#include "lists.h"
/**
 * reverse_listint - reverse_listint
 * @head: listint_t
 * Return: listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *node;

	if (head == NULL)
		return (NULL);
	previous = NULL;
	node = *head;
	while (node)
	{
		*head = (*head)->next;
		node->next = previous;
		previous = node;
		node = *head;
	}
	*head = previous;
	return (*head);
}
