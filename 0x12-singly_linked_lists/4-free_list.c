#include "lists.h"

/**
 * free_list - free a singly linked list
 * @h: pointer to singly linked list head
 */
void free_list(list_t *h)
{
	list_t *tracker = h;

	if (tracker == NULL)
		return;

	while (tracker->next != NULL)
	{
		free(tracker->str);
		free(tracker->next);
		tracker = tracker->next;
	}
	free(h);
}
