#include "lists.h"

/**
 * free_listint_safe - safely free a singly linked list
 * @p_head: pointer to pointer to singly linked list head
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
	{
		return (0);
	}

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
				size++;
				flash = flash->next;
			}
			free(poo);
			size++;
			*head = NULL;
			return (size);
		}
	}

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		size++;
	}
	*head = NULL;
	return (size);
}
