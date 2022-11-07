#include "lists.h"

/**
 * free_list-free_list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *tp;

	while (head != NULL)
	{
		tp = head;
		head = head->next;
		free(tp->str);
		free(tp);
	}
}
