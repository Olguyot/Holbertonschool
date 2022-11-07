#include "lists.h"
/**
 * sum_listint - sum_listint
 * @head: listint_t
 * Return: listint_t
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	node = head;
	sum = 0;
	if (node == NULL)
		return (0);
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
