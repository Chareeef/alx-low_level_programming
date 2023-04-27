#include "lists.h"

/**
 * add_node_end - add an element at the end of a singly linked list
 * @h: pointer to pointer to singly linked list head
 * @str: string to be stored in the new node
 *
 * Return: pointer to the new element, or NULL if an error occurs
 */
list_t *add_node_end(list_t **h, const char *str)
{
	list_t *new;
	list_t *tracker;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	tracker = *h;

	if (tracker != NULL)
	{
		while (tracker->next != NULL)
		{
			tracker = tracker->next;
		}

		tracker->next = new;
	}
	else
	{
		*h = new;
	}

	return (new);
}

