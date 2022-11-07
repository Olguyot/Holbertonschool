#include "lists.h"
/**
 * pop_listint - pop_listint
 * @head: listint_t
 * Return: listint_t
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	listint_t *tmp1;
	int tmp;

	node = *head;
	if (node != NULL)
	{
		tmp1 = node;
		tmp = node->n;
		node = node->next;
		free(tmp1);
		*head = node;
		return (tmp);
	}
	else
		return (0);
}
