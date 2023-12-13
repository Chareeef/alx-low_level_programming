#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "search_algos.h"

listint_t *linear_search_sublist(listint_t *start, listint_t *end, int value);

/**
 * jump_list - searches for a value in an list
 * of integers using the jump search algorithm
 * @head: pointer the head of the list to search in
 * @size: the list's number of elements
 * @value: the element to search for
 *
 * Return: the pointer to the first node where value is located,
 * or NULL if value is not found.
 */
listint_t *jump_list(listint_t *head, size_t size, int value)
{
	listint_t *last, *current;
	int step, i;

	if (!head)
		return (NULL);

	last = head;
	step = sqrt(size);

	while (last->n <= value)
	{
		current = last;

		for (i = 0; i < step; i++)
		{
			if (current->next)
			{
				current = current->next;
			}
			else
			{
				printf("Value checked at index [%ld] = [%d]\n",
						current->index, current->n);
				printf("Value found between indexes [%ld] and [%ld]\n",
							last->index, current->index);
				return (linear_search_sublist(last, current, value));
			}
		}

		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

		if (current->n > value)
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
listint_t *linear_search_sublist(listint_t *start, listint_t *end, int value)
{
	listint_t *current;

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
