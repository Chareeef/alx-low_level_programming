#include "lists.h"

/**
 * delete_nodeint_at_index - delete singly linked list node at a specific index
 * @p_head: pointer to pointer to singly linked list head
 * @index: rank of the node to delete
 *
 * Return: 1 is successfully deleted, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **p_head, unsigned int index)
{
	listint_t *temp;
	listint_t *h = *p_head;
	unsigned int tracker;

	if (p_head == NULL || *p_head == NULL)
		return (-1);

	if (index == 0)
	{
		*p_head = h->next;
		free(h);

		return (1);
	}

	for (tracker = 0; tracker < index - 1 && h->next != NULL; tracker++)
		h = h->next;

	if (tracker == index - 1)
	{
		temp = h->next;
		h->next = temp->next;
		free(temp);

		return (1);
	}

	return (-1);
}
