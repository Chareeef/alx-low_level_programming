#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to singly linked list head
 * @index: rank of the wanted node
 *
 * Return: pointer to the wanted node, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int track;

	if (head == NULL)
		return (NULL);

	for (track = 0; track < index && head->next != NULL; track++)
	{
		head = head->next;
	}

	if (track == index)
		return (head);

	return (NULL);
}
