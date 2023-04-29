#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 * @p_head: pointer to pointer to singly linked list head
 *
 * Return: pointer to reversed linked list head, NULL if an error
 */
listint_t *reverse_listint(listint_t **p_head)
{
	listint_t *current, *previous, *next;

	if (p_head == NULL || *p_head == NULL)
		return (NULL);

	previous = NULL;
	current = *p_head;
	next = current->next;

	if (!next)
		return (current);

	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*p_head = previous;

	return (*p_head);
}
