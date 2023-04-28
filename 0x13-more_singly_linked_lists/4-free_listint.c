#include "lists.h"

/**
 * free_listint - free a singly linked list
 * @h: pointer to singly linked list head
 */
void free_listint(listint_t *h)
{
	listint_t *current;

	while (h)
	{
		current = h;
		h = h->next;
		free(current);
	}
}
