#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct listint_s - a singly linked list
 * @n: an integer
 * @next: pointer to the next node of the list
 *
 * Description: singly linked list node structure.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **h, const int n);
listint_t *add_nodeint_end(listint_t **h, const int n);
void free_listint(listint_t *h);

#endif /* LISTS_H */
