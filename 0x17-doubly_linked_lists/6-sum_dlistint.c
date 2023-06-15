#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t DDL
 * @head: pointer to the DLL's head
 *
 * Return: the sum of all the data (n) of a DDL.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int count;

	if (!head)
		return (0);

	current = head;
	count = 0;
	while (current)
	{
		count += current->n;
		current = current->next;
	}

	return (count);
}
