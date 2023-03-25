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
	unsigned long s = 0, d = 1000000000, hn, tn;
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
			printf("%lu, ", n);
			s = n + m;
			n = m;
			m = s;

		}
		else
		{
			hn = head_n + (head_m / d);
			tn = head_m % d;
			printf("%lu%lu", hn, tn);
			head_n = head_n + head_m;
			head_m = head_n + head_m;
			tail_n = tail_n - tail_m; 
			tail_m = tail_n - tail_m; 
			if (i < 97)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}

