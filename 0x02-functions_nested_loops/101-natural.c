#include <stdio.h>
#include "main.h"

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			n += i;
	}
	printf("%d\n", n);
	return (0);
}

