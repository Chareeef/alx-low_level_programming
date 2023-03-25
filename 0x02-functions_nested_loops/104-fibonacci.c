#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long n = 1, head_n, tail_n;
	unsigned long m = 2, head_m, tail_m;
	unsigned long d = 1000000000, overflow;
	int i, balise = 0;

	for (i = 0; i < 98; i++)
	{
		if (i == 92 && balise == 0)
		{
			head_n = n / d;
			tail_n = n % d;
			head_m = m / d;
			tail_m = m % d;
			balise++;
		}

		if (balise == 0)
		{
			printf("%lu, %lu, ", n, m);
			n = n + m;
			i++;
			m = m + n;
		}
		else
		{
			overflow = (tail_n + tail_m) / d;
			tail_n = (tail_n + tail_m) - (d * overflow);
			tail_m = tail_n;
			i++;
			overflow = (tail_n + tail_m) / d;
			tail_m = (tail_m + tail_n) - (d * overflow);
			head_m = (tail_m + tail_n) + overflow;

			printf("%lu%lu, %lu%lu", head_n, tail_n, head_m, tail_m);

			head_n = head_m;
			tail_n = tail_m;
			head_m = head_n;
			tail_m = tail_n;

			if (i < 97)
				printf(", ");
		}
	}
	printf("\n");

	return (0);
}

