#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a dlistint DDL's node at an index
 * @head: pointer to pointer to the DLL's head
 * @idx: position of the node to delete, starting from 0
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *current;
	unsigned int count;

	if (!head)
		return (-1);

	current = *head;
	count = 0;

	while (count < idx)
	{
		count++;
		current = current->next;
		if (!current)
			return (-1);
	}

	if (current->next)
		(current->next)->prev = current->prev;

	if (current->prev)
		(current->prev)->next = current->next;
	else
		*head = current->next;

	free(current);

	return (1);
}
