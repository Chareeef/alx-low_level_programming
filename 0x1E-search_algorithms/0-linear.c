#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the array's number of elements
 * @value: the element to search for
 *
 * Return: the index of the searched value if located, or -1 if not.
 */
int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (!array)
		return (-1);

	for (idx = 0; (size_t) idx < size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
