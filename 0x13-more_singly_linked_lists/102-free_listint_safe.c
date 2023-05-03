#include "lists.h"

/**
 * edge_free - free edge cases a singly linked list
 * @p_head: pointer to pointer to singly linked list head
 *
 * Return: freed size of the singly linked list.
 */
size_t edge_free(listint_t **p_head)
{
	size_t size = 0;
	listint_t *head = *p_head,
		  *temp = NULL;

	if (head == head->next)
	{
		free(head);
		size += sizeof(listint_t);
		*p_head = NULL;
	}
	else if (head == head->next->next)
	{
		free(head->next);
		free(head);
		size += 2 * sizeof(listint_t);
		*p_head = NULL;
	}

	return (size);
}

/**
 * free_listint_safe - safely free a singly linked list
 * @head: pointer to pointer to singly linked list head
 *
 * Return: freed size of the singly linked list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t size = 0;
	listint_t *flash = *head,
		  *poo = *head,
		  *temp  = NULL;

	if (!head || !(*head))
		return (0);

	size = edge_free(head);
	if (size > 0)
		return (size);

	while (poo && flash && flash->next)
	{
		poo = poo->next;
		flash = flash->next->next;

		if (flash == poo)
		{
			poo = *head;
			while (flash != poo)
			{
				temp = poo;
				poo = poo->next;
				free(temp);
				size += sizeof(listint_t);
				flash = flash->next;
			}
			while (poo->next)
			{
				temp = poo;
				poo = poo->next;
				temp->next = NULL;
				free(temp);
				size += sizeof(listint_t);
			}

			*head = NULL;
			return (size);
		}
	}

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		size += sizeof(listint_t);
	}
	*head = NULL;
	return (size);
}
