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
 * free_after_meeting - safely free a singly linked list after meeting point
 * @flash: hare pointer
 * @poo:tortoise pointer
 * @size: pointer to nođes number
 * @p_head: pointer to pointer to singly linked list head
 *
 * Return: printed nodes number.
 */
size_t free_after_meeting(listint_t *flash, listint_t *poo,
		size_t *size, listint_t **p_head)
{
	listint_t *temp = NULL;

	while (flash != poo)
	{
		temp = poo;
		poo = poo->next;
		free(temp);
		flash = flash->next;
		*size += sizeof(listint_t);
	}
	while (poo->next)
	{
		temp = poo;
		poo = poo->next;
		temp->next = NULL;
		free(temp);
	}

	*p_head = NULL;
	return (*size);
}
/**
 * free_listint_safe - safely free a singly linked list
 * @head: pointer to pointer to singly linked list head
 *
 * Return: free'd size of the singly linked list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t size = 0;
	listint_t *flash = *head,
		  *poo = *head,
		  *meeting  = NULL;

	if (!head || !(*head))
		return (0);

	size = edge_free(head);
	if (size > 0)
		return (size);

	while (poo)
	{
		poo = poo->next;
		size += sizeof(listint_t);
		if (!poo)
		{
			*head = NULL;
			return (size);
		}
		if (flash->next->next)
			flash = flash->next->next;

		if (flash == poo && flash->next->next)
		{
			meeting = flash;
			poo = *head;
			break;
		}
	}

	if (meeting)
	{
		return (free_after_meeting(flash, poo, &size, head));
	}

	return (size);
}
