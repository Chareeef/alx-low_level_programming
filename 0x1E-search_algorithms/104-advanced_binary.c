#include <stdlib.h>
#include <stdio.h>

/**
 * print_subarray - print an subarray of integers
 * @array: pointer to the first element of the original array
 * @low: the index of the subarray's first element
 * @high: the index of the subarray's last element
 */
void print_subarray(int *array, size_t low, size_t high)
{
	size_t idx;

	for (idx = low; idx < high + 1; idx++)
	{
		printf("%d", array[idx]);

		if (idx < high)
			printf(", ");
	}

	printf("\n");
}

/**
 * adv_search_subarray- searches for a value in an subarray
 * selected the advanced binary search algorithm (repeated elements)
 * @array: pointer to the first element of the array to search in
 * @low: the index of the subarray's first element
 * @high: the index of the subarray's last element
 * @value: the element to search for
 *
 * Return: the index of the searched value if located, or -1 if not.
 */
int adv_search_subarray(int *array, size_t low, size_t high, int value)
{
	size_t size, mid;

	if (!array || low > high)
		return (-1);

	printf("Searching in array: ");
	print_subarray(array, low, high);

	size = high - low;
	mid = size / 2 + low;

	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
		{
			return (adv_search_subarray(array, low, mid, value));
		}
		else
			return (mid);
	}
	else if (array[mid] < value)
		return (adv_search_subarray(array, mid + 1, high, value));
	else if (array[mid] > value)
		return (adv_search_subarray(array, low, mid - 1, value));

	return (-1);
}
/**
 * advanced_binary - searches for a value in an array
 * of integers using the advanced binary search algorithm (repeated elements)
 * @array: pointer to the first element of the array to search in
 * @size: the array's number of elements
 * @value: the element to search for
 *
 * Return: the index of the searched value if located, or -1 if not.
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (adv_search_subarray(array, 0, size - 1, value));
}
