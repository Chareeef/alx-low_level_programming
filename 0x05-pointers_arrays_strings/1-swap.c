#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * swap_int - Swap a and b values
 * @a: Our 1st int pointer
 * @b: Our 2nd int pointer
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

