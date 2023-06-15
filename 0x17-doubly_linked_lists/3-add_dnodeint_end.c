#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a dlistint DDL
 * @head: pointer to pointer to the DLL's head
 * @n: integer to be stored in the new node
 *
 * Return: adress of the new node, NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;

	return (new);
}
