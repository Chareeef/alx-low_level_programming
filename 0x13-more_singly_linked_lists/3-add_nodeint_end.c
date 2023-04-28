#include "lists.h"

/**
 * add_nodeint - add an element at the end of a singly linked list
 * @h: pointer to pointer to singly linked list head
 * @n: integer to be stored in the new node
 *
 * Return: pointer to the new element, or NULL if an error occurs
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new, *tracker = *h;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	while (tracker->next != NULL)
	{
		tracker = tracker->next;
	}
	tracker->next = new;

	return (new);
}

