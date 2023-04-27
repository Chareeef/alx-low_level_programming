#include "lists.h"

/**
 * add_node - add an element at the beginning of a singly linked list
 * @h: pointer to pointer to singly linked list head
 * @str: string to be stored in the new node
 *
 * Return: pointer to the new element, or NULL if an error occurs
 */
list_t *add_node(list_t **h, const char *str)
{
	list_t *new;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *h;
	*h = new;

	return (new);
}

