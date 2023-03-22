#include <stdio.h>
#include "main.h"

/**
 * main - Prints the sum of the even-valued fibonacci terms up to 4,000,000.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int n = 1, m = 2, s = 0;

	while (n < 4000000)
	{
		if (n % 2 == 0)
			s += n;
		if (m % 2 == 0)
			s += m;
		n = n + m;
		m = m + n;

	}
	printf("%ld\n", s);

	return (0);
}

