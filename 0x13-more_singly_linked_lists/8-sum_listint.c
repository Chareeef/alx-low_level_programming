#include "lists.h"

/**
 * sum_listint - Computes the sum of all nodes data
 * @h: pointer to singly linked list head
 *
 * Return: the  nodes data sum (n's)
 */
int sum_listint(listint_t *h)
{
	int sum = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
