#include "lists.h"

/**
 * print_listint - print a singly linked list
 * @head: pointer to singly linked list head
 *
 * Return: printed nodes number.
 */
size_t print_listint(const listint_t *head)
{
	size_t nodes = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		nodes++;
	}

	return (nodes);
}
