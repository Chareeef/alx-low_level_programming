#ifndef LISTS_H
#define LISTS_H

/* INCLUDES */
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint_s - a doubly linked list node
 * @n: integer
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif
