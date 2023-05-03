#include "lists.h"

/**
 * print_after_meeting - safely print a singly linked list after meeting point
 * @flash: hare pointer
 * @poo:tortoise pointer
 * @nodes: pointer to nođes number
 *
 * Return: printed nodes number.
 */
size_t print_after_meeting(const listint_t *flash, const listint_t *poo,
		size_t *nodes)
{
	while (flash != poo)
	{
		printf("[%p] %d\n", (void *) flash, flash->n);
		(*nodes)++;
		flash = flash->next;
		poo = poo->next;
	}
	if (flash == poo)
	{
		printf("-> [%p] %d\n", (void *) flash, flash->n);
		(*nodes)++;
	}
	return (*nodes);
}

/**
 * print_listint_safe - safely print a singly linked list
 * @head: pointer to singly linked list head
 *
 * Return: printed nodes number, or exits with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *flash = head,
	      *poo = head,
	      *meeting = NULL;
	size_t nodes = 0;

	if (!head)
	{
		return (nodes);
		exit(98);
	}

	while (poo)
	{
		printf("[%p] %d\n", (void *) poo, poo->n);
		nodes++;
		poo = poo->next;
		if (!poo || poo == head)
			return (nodes);
		if (flash->next->next)
			flash = flash->next->next;

		if (flash == poo && flash->next->next)
		{
			meeting = flash;
			poo = head;
			break;
		}
	}

	if (meeting)
	{
		return (print_after_meeting(flash, poo, &nodes));
	}

	return (0);
}
