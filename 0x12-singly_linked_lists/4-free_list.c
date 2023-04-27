#include "lists.h"

/**
 * free_list - free a singly linked list
 * @h: pointer to singly linked list head
 */
void free_list(list_t *h)
{
	list_t *tracker = NULL;

	if (tracker == NULL)
		return;

	while (tracker->next != NULL)
	{
		tracker = h;
		free(tracker->str);
		free(tracker);
		h = h->next;
	}
}
