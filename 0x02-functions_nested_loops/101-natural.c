#include <stdio.h>
#include "main.h"

/**
 * sum_mult - Prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: void
 */
void sum_mult(void)
{
	// Init int n to 0
	// FOR i = 0; i < 10...
	// Search i mult of 3 or 5 from 0 to 1024 (strictely)
	// Add i to previous n
	// ENDFOR
	// Print n
	
	int n = 0;

	for (i = 0; i < 1024; o++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			n += i;
	}
	printf("%d", n);
}

