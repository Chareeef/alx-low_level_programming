#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array
 * of integers using the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the array's number of elements
 * @value: the element to search for
 *
 * Return: the index of the searched value if located, or -1 if not.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx;
	size_t step;

	if (!array)
		return (-1);

	step = sqrt(size);

	for (idx = 0; idx < size; idx += step)
	{
		if (array[idx] >= value)
		{
			if (idx == 0)
				idx += step;
			printf("Value found between indexes [%d] and [%d]\n", idx - step, idx);
			return (linear_search_sub(array, idx - step, idx, value));
		}

		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
	}

	return (-1);
}

/**
 * linear_search_sub - searches for a value in a subrray
 * of integers using the linear search algorithm
 * @array: pointer to the first element of the original array to search in
 * @low: the index of the subarray's first element
 * @high: the index of the subarray's last element
 * @value: the element to search for
 *
 * Return: the index of the searched value if located, or -1 if not.
 */
int linear_search_sub(int *array, size_t low, size_t high, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	for (idx = low; idx <= high; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
