#include "lists.h"

/**
 * get_dnodeint_at_index - get the dlistint DDL's node at the specified index
 * @head: pointer to the DLL's head
 * @index: position of the node, starting from 0
 *
 * Return: adress of the node, NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (!head)
		return (NULL);

	current = head;
	count = 0;
	while (count < index)
	{
		current = current->next;
		if (!current)
			return (NULL);
		count++;
	}

	return (current);
}
