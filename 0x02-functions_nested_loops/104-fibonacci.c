#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long n = 1, head_n, tail_n, m = 2, head_m, tail_m;
	unsigned long s = 0, d = 1000000000, hn, tn, ov;
	int i, balise = 0;

	for (i = 0; i < 98; i++)
	{
		if (i == 92 && balise == 0)
		{
			head_n = n / d;
			tail_n = n % d;
			head_m = m / d;
			tail_m = m % d;
			head_n = head_n + tail_n / d;
			tail_n = tail_n % d;
			head_m = head_m + tail_m / d;
			tail_m = tail_m % d;
			balise++;
		}
		if (balise == 0)
		{
			printf("%lu, ", n);
			s = n + m;
			n = m;
			m = s;

		}
		else
		{
			printf("%lu%lu", head_n, tail_n);
			tn = (tail_n + tail_m) % d;
			ov = (tail_n + tail_m) / d;
			hn = head_n + head_m + ov;
			head_n = head_m;
			tail_n = tail_m;
			head_m = hn;
			tail_m = tn;

			if (i < 97)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}

