#include "lists.h"
/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: listint_t
 * @index: index
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	i = 0;
	tmp = head;
	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
