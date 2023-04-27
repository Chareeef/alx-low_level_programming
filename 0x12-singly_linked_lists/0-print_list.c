#include "lists.h"
#include <stdio.h>

/**
 * print_list - print a singly linked list
 * @h: pointer to singly linked list head
 *
 * Return: printed nodes number.
 */
size_t print_list(const list_t *h)
{
	size_t nodes_number = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str != NULL)
			printf("[%d] \"%s\"\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		nodes_number++;
	}

	return (nodes_number);
}

