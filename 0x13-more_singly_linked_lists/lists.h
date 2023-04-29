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

/* Functions : */

size_t		print_listint(const listint_t *h);
size_t		listint_len(const listint_t *h);
void		free_listint(listint_t *h);
void		free_listint2(listint_t **p_head);
int		pop_listint(listint_t **p_head);
int		sum_listint(listint_t *h);
int		delete_nodeint_at_index(listint_t **p_head, unsigned int index);
listint_t	*add_nodeint(listint_t **p_head, const int n);
listint_t	*add_nodeint_end(listint_t **p_head, const int n);
listint_t	*get_nodeint_at_index(listint_t *h, unsigned int index);
listint_t	*insert_nodeint_at_index(listint_t **p_head,
			unsigned int idx, int n);
listint_t	*reverse_listint(listint_t **p_head);

#endif /* LISTS_H */
