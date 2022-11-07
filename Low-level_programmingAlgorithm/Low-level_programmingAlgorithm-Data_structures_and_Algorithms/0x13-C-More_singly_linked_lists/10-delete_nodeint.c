#include "lists.h"
/**
 * delete_nodeint_at_index - delete_nodeint_at_index
 * @head: listint_t
 * @index: index
 * Return: listint_t
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *node1;
	listint_t *tmp;
	unsigned int i;

	i = 0;
	if (*head == NULL || head == NULL)
		return (-1);
	node = *head;
	node1 = *head;
	node1 = node1->next;

	if (index == 0)
	{
		*head = node1;
		free(node);
		return (1);
	}
	i = 1;
	while (node1)
	{
		if (i == index)
		{
			tmp = node->next;
			node->next = node1->next;
			free(tmp);
			return (1);
		}
		node = node->next;
		node1 = node1->next;
		i++;
	}
	return (-1);
}
