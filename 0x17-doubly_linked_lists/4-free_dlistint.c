#include "lists.h"

/**
 * free_dlistint - free a DDL
 * @h: pointer to the DLL's head
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *current, *temp;

	current = h;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
