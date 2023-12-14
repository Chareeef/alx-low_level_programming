#include <stdlib.h>
#include <stdio.h>

/**
 * interpolation_search - searches for a value in an array
 * of integers using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the array's number of elements
 * @value: the element to search for
 *
 * Return: the index of the searched value if located, or -1 if not.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t probe;
	size_t high, low;

	if (!array)
		return (-1);

	high = size - 1;
	low = 0;

	while (low <= high && high < size)
	{
		probe = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

		if (probe < low || probe > high)
		{
			printf("Value checked array[%ld] is out of range\n", probe);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		if (array[probe] == value)
			return (probe);
		else if (array[probe] < value)
			low = probe + 1;
		else if (array[probe] > value)
			high = probe - 1;
	}

	return (-1);
}
