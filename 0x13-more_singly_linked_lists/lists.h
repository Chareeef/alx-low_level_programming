#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
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
listint_t *add_node(listint_t **h, const char *str);
listint_t *add_node_end(listint_t **h, const char *str);
void free_listint(listint_t *h);

#endif /* LISTS_H */
