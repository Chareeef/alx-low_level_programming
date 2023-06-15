#include "lists.h"

/**
 * add_dnodeint - Add a node at the beginning of a dlistint DDL
 * @head: pointer to pointer to the DLL's head
 * @n: integer to be stored in the new node
 *
 * Return: adress of the new node, NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first;
	dlistint_t *new;

	if (!head)
		return (NULL);
	first = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	*head = new;
	new->prev = NULL;
	new->next = first;
	if (first)
		first->prev = new;

	return (new);
}
