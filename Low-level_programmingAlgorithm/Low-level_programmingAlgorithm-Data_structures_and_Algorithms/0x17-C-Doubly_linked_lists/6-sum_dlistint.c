#include "lists.h"
/**
 * sum_dlistint - sum_dlistint
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int cp;

	cp = 0;
	while (head)
	{
		cp += head->n;
		head = head->next;
	}
	return (cp);
}
