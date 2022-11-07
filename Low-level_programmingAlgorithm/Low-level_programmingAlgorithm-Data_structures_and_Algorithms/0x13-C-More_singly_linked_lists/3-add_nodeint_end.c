#include "lists.h"
/**
 * add_nodeint_end - add_nodeint_end
 * @head: listint_t
 * @n: int
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	ptr = *head;

	/*Init New*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	/*Add data if head == NULL*/
	if (*head == NULL)
		*head = new;
	else
	{
	/*Get last head*/
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
