#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @p_head: pointer to pointer to singly linked list head
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **p_head)
{
	listint_t *head;
	int n_head;

	head = *p_head;
	n_head = head->n;
	*p_head = head->next;
	free(head);

	return (n_head);
}
