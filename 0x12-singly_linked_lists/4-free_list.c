#include "lists.h"

/**
 * free_list - free a singly linked list
 * @h: pointer to singly linked list head
 */
void free_list(list_t *h)
{
	list_t *tracker = NULL;

	while (h != NULL)
	{
		tracker = h;
		h = h->next;
		free(tracker->str);
		free(tracker);
	}
}
