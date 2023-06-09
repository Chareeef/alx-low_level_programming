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

/* FUNCTIONS */
size_t		print_dlistint(const dlistint_t *h);
size_t		dlistint_len(const dlistint_t *h);
dlistint_t	*add_dnodeint(dlistint_t **head, const int n);
dlistint_t	*add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index);
dlistint_t	*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int		delete_dnodeint_at_index(dlistint_t **h, unsigned int idx);
int		sum_dlistint(dlistint_t *head);
void		free_dlistint(dlistint_t *h);

#endif
