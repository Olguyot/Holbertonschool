#include "lists.h"

/**
 * insert_node - insert a node in a sorted listed
 * @head: pointer to pointer of first node of listint_t list
 * @number: the number
 * Return: the new node
 **/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current;
	listint_t *new;
	int tmp, tmp2;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		tmp = current->n;
		if (number < tmp)
		{
			new->next = current;
			*head = new;
			break;
		}
		tmp2 = current->next->n;
		if (number >= tmp && number <= tmp2)
		{
			new->next = current->next;
			current->next = new;
			break;
		}
		current = current->next;
	}
	if (number > current->n && current->next == NULL)
	{
		current->next = new;
		new->next = NULL;
	}
	return (new);
}
