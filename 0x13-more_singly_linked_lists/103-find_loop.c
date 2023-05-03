#include "lists.h"

/**
 * find_listint_loop - find loop in a singly linked list
 * @head: pointer to singly linked list head
 *
 * Return: pointer to loop's start, or NULL if it doesn't exist.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *flash = head, *poo = head;

	if (!head)
	{
		return (NULL);
	}
	else if (head == head->next || head == head->next->next)
		return (head);

	while (1)
	{
		poo = poo->next;
		if (!flash->next->next || !flash->next)
			return (NULL);
		flash = flash->next->next;

		if (flash == poo)
		{
			poo = head;
			break;
		}
	}

	if (poo == head)
	{
		while (flash != poo)
		{
			flash = flash->next;
			poo = poo->next;
		}
		if (flash == poo)
			return (flash);
	}

	return (NULL);
}
