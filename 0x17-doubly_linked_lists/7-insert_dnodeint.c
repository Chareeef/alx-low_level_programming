#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a dlistint DDL's new node at the specified index
 * @head: pointer to pointer to the DLL's head
 * @idx: position of the new node, starting from 0
 * @n: integer to be stored in the new node
 *
 * Return: adress of the new node, NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int count;

	if (!head)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(head, n));

	current = *head;
	count = 0;

	while (count < idx - 1)
	{
		count++;
		current = current->next;
		if (!current)
			return(NULL);
	}
	
	if (!current->next)
		return (add_dnodeint_end(head, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = current;
	new->next = current->next;
	(current->next)->prev = new;
	current->next = new;

	return(new);
}
