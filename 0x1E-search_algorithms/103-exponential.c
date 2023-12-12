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
 * binary_search- searches for a value in an subarray
 * selected the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: the index of the subarray's first element
 * @high: the index of the subarray's last element
 * @value: the element to search for
 *
 * Return: the index of the searched value if located, or -1 if not.
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t size, mid;

	if (!array || low > high)
		return (-1);

	printf("Searching in array: ");
	print_subarray(array, low, high);

	size = high - low;
	mid = size / 2 + low;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		return (binary_search(array, mid + 1, high, value));
	else if (array[mid] > value)
		return (binary_search(array, low, mid - 1, value));

	return (-1);
}

/**
 * exponential_search - searches for a value in an array
 * of integers using the exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the array's number of elements
 * @value: the element to search for
 *
 * Return: the index of the searched value if located, or -1 if not.
 */
int exponential_search(int *array, size_t size, int value)
{
	int idx, low, high;

	idx = 1;
	while ((size_t) idx < size && array[idx] < value)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		idx *= 2;
	}

	low = idx / 2;
	high = (size_t) idx < size - 1 ? idx : size - 1;

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	return (binary_search(array, low, high, value));
}
