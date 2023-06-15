#include "lists.h"

/**
 * print_dlistint - print integers stored in a Doubly Linked List (DLL)
 * @h: pointer to the DLL's head
 *
 * Return: number of DLL nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodes_count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes_count += 1;
	}

	return (nodes_count);
}
