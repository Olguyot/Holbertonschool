#include "lists.h"

/**
 * free_listint2 - free_listint2
 * @head: listint_t
 * Return: listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *node;

	if (head == NULL)
		return;
	node = *head;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}
