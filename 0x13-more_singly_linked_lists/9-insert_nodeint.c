#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new singly linked list node at a specific index
 * @p_head: pointer to pointer to singly linked list head
 * @idx: rank of new node
 * @n: data to store in it
 *
 * Return: pointer to the inserted node, or NULL if it's not possible.
 */
listint_t *insert_nodeint_at_index(listint_t **p_head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	listint_t *h = *p_head;
	unsigned int tracker;

	if (p_head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	
	for (tracker = 0; tracker < idx - 1 && h->next != NULL; tracker++)
		h = h->next;

	if (tracker == idx - 1)
	{
		new->n = n;
		temp = h->next;
		h->next = new;
		new->next = temp;

		return (new);
	}

	return (NULL);
}
