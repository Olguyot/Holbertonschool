#include "lists.h"
/**
 * get_max_node - get_max_node
 * @h: pointer to head of list
 * Return: number of nodes
 */

int get_max_node(dlistint_t **h)
{
	dlistint_t *ptr = *h;
	unsigned int i = 0;

	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
/**
 * goToIndex - goToIndex
 * @h: pointer to head of list
 * @idx: pointer to head of list
 * Return: number of nodes
 */
dlistint_t *goToIndex(dlistint_t **h, unsigned int idx)
{
	dlistint_t *ptr;
	unsigned int cp = 0;

	ptr = *h;

	while (cp < idx)
	{
		ptr = ptr->next;
		cp++;
	}
	return (ptr);
}

/**
 * delete_dnodeint_at_index - delete_dnodeint_at_index
 * @head: head
 * @index: index
 * Return: sum
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptrM;
	dlistint_t *ptr;
	dlistint_t *ptrP;
	unsigned int indexmax;

	ptr = *head;
	indexmax = get_max_node(head);
	if (index > indexmax || ptr == NULL)
		return (-1);
	ptr = goToIndex(head, index);
	ptrM = ptr->prev;
	ptrP = ptr->next;
	if (ptrM != NULL)
		ptrM->next = ptrP;
	else
		*head = ptrP;
	if (ptrP != NULL)
		ptrP->prev = ptrM;
	free(ptr);
	return (1);
}


