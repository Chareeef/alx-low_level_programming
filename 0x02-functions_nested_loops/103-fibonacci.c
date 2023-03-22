#include <stdio.h>
#include "main.h"

/**
 * main - Prints the sum of the even-valued terms, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long n = 1, m = 2, s = 0;
	int i;

	for (i = 0; i < 4000000; i++)
	{
		if (n % 2 == 0)
			s += n;
		if (m % 2 == 0)
			s += m;
		n = n + m;
		i++;
		m = m + n;
	}
	printf("%ld\n", s);

	return (0);
}

