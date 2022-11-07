#include "lists.h"
/**
 * add_nodeint - add_nodeint
 * @head: head
 * @n: const
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(new));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
