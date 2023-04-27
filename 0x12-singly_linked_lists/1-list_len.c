#include "lists.h"
#include <stdio.h>

/**
 * list_len - give number of elements of a singly linked list
 * @h: pointer to singly linked list head
 *
 * Return: list elements number.
 */
size_t list_len(const list_t *h)
{
	size_t nodes_number = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		nodes_number++;
	}

	return (nodes_number);
}

