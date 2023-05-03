#include "lists.h"

/**
 * find_loop_after_meeting - find loop in a singly linked list after meeting point
 * @flash: hare pointer
 * @poo:tortoise pointer
 *
 * Return: pointer to loop's start.
 */
listint_t *find_loop_after_meeting(listint_t *flash, listint_t *poo)
{
	while (flash != poo)
	{
		flash = flash->next;
		poo = poo->next;
	}
	if (flash == poo)
	{
		return (flash);
	}
	return (NULL);
}

/**
 * find_listint_loop - find loop in a singly linked list
 * @head: pointer to singly linked list head
 *
 * Return: pointer to loop's start.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *flash = head, *poo = head;

	if (!head)
	{
		return (NULL);
		exit(98);
	}
	else if (head == head->next)
		return (head);
	else if (head->next->next == head)
		return (head->next);

	while (1)
	{
		poo = poo->next;
		if (!flash->next->next)
			return (NULL);
		else
			flash = flash->next->next;

		if (flash == poo)
		{
			poo = head;
			break;
		}
	}

	if (poo == head)
	{
		return (find_loop_after_meeting(flash, poo));
	}

	return (NULL);
}
