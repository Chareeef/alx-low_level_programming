#include "lists.h"

/**
 * free_listint2 - free a singly linked list and set head to NULL
 * @p_head: pointer to pointer to singly linked list head
 */
void free_listint2(listint_t **p_head)
{
	listint_t *current;
	listint_t *h;

	h = *p_head;
	while (h)
	{
		current = h;
		h = h->next;
		free(current);
	}

	*p_head = NULL;
}
