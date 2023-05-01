#include "lists.h"

/**
 * print_listint_safe - safely print a singly linked list
 * @head: pointer to singly linked list head
 *
 * Return: printed nodes number, or exits with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current = head;
	const listint_t *addresses[100] = {NULL};
	int i = 0, j, check = 1;

	if (!current)
		exit(98);

	while (current)
	{
		addresses[i++] = current;

		if (check)
			printf("[%p] %d\n", (void *) current, current->n);
		else if (!check)
		{
			printf("-> [%p] %d\n", (void *) current, current->n);
			break;
		}
		if (!current->next)
			break;

		for (j = 0; addresses[j] != NULL; j++)
		{
			if (current->next == addresses[j])
				check = 0;
		}
		current = current->next;
		nodes++;
	}

	return (nodes);
}
