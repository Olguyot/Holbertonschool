#include "lists.h"

/**
 * add_node_end - add_node_end
 * @head: head
 * @str: str
 * Return: adresse of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *tmp;
	int i = 0;
	int len;
	list_t *tmp1;
	list_t *new;

	new = malloc(sizeof(list_t));
	tmp = strdup(str);
	if (str == NULL || new == NULL)
		return (NULL);
	if (tmp != NULL)
	{
		for (i = 0; tmp[i] ; i++)
		;
	}
	len = i;
	new->next = NULL;
	new->str = tmp;
	new->len = len;
	tmp1 = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp1->next != NULL)
		{
			tmp1 = tmp1->next;
		}
		tmp1->next = new;
	}
	return (new);
}
