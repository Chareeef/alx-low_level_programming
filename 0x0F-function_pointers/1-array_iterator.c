#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - execute action on each element of the array
 * @array: the array
 * @size: array's size
 * @action: pointer to action function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action || size == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
