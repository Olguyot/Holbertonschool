#include "lists.h"

/**
 * add_node - add_node
 * @str: str
 * @head: head
 * Return: Number of node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *tmp;
	int i = 0;
	list_t *new;

	tmp = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		;
	}
	new->str = tmp;
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
