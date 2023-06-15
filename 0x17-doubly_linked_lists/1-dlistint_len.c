#include "lists.h"

/**
 * dlistint_len - return the number of nodes in a dlistint DDL
 * @h: pointer to the DLL's head
 *
 * Return: number of DLL nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodes_count = 0;

	while (current)
	{
		current = current->next;
		nodes_count += 1;
	}

	return (nodes_count);
}
