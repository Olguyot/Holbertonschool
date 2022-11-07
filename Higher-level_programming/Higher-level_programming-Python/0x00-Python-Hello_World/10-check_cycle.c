#include "lists.h"

/**
 * check_cycle - check_cycle
 * @list: list
 * Return: 1 true, 0 false
 **/

int check_cycle(listint_t *list)
{
	listint_t *p1;
	listint_t *p2;

	p1 = list;
	p2 = list;
	if (list == NULL)
		return (0);
	while (p2->next != NULL && p2->next->next != NULL)
	{
		p1 = p1->next;
		p2 = p2->next;
		p2 = p2->next;
		if (p1 == p2)
			return (1);
	}
	return (0);
}
