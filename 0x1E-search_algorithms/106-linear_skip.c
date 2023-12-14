#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "search_algos.h"

skiplist_t *linear_search_sublist(skiplist_t *start,
		skiplist_t *end, int value);

/**
 * linear_skip - searches for a value in an list of integers
 * with an express lane using the jump search algorithm
 * @head: pointer the head of the list to search in
 * @value: the element to search for
 *
 * Return: the pointer to the first node where value is located,
 * or NULL if value is not found.
 */
skiplist_t *linear_skip(skiplist_t *head, int value)
{
	skiplist_t *last, *current;

	if (!head)
		return (NULL);

	last = head;

	while (last->n <= value)
	{
		current = last;

		if (last->express)
			current = last->express;
		else
		{
			while (current->next)
			{
				current = current->next;
			}

			printf("Value found between indexes [%ld] and [%ld]\n",
					last->index, current->index);

			return (linear_search_sublist(last, current, value));
		}

		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

		if (current->n >= value || !current->next)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					last->index, current->index);
			return (linear_search_sublist(last, current, value));
		}
		last = current;
	}

	return (NULL);
}

/**
 * linear_search_sublist - searches for a value in a sub-.list
 * of integers using the linear search algorithm
 * @start: pointer to the first node of the sublist to search in
 * @end: pointer to the last node of the sublist to search in
 * @value: the element to search for
 *
 * Return: the pointer to the first node where value is located,
 * or NULL if value is not found.
 */
skiplist_t *linear_search_sublist(skiplist_t *start,
		skiplist_t *end, int value)
{
	skiplist_t *current;

	if (!start || !end)
		return (NULL);

	current = start;

	while (current)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

		if (current->n == value)
			return (current);

		if (!current->next || current == end)
			return (NULL);

		current = current->next;
	}

	return (NULL);
}
