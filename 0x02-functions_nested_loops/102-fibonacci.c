#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 1, m = 2;

	while (n <= 50 && m <= 50)
	{
		printf("%d, %d", n, m);
		n = n + m;
		m = m + n;
		if (n <= 50)
			printf(", ");
	}
	printf("\n");

	return (0);
}

