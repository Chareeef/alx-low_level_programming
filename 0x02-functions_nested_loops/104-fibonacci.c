#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long n = 1, m = 2;
	int i;

	for (i = 0; i < 98; i++)
	{
		printf("%ld, %ld", (unsigned long) n, (unsigned long) m);
		n = n + m;
		i++;
		m = m + n;
		if (i < 97)
			printf(", ");
	}
	printf("\n");

	return (0);
}

