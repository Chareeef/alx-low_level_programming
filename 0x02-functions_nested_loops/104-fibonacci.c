#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long a_head = 0, a_tail = 1;
	unsigned long b_head = 0, tmp_head, b_tail = 2, tmp_tail;
	unsigned long d = 1000000000, overflow;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (a_head != 0)
		{
			printf("%lu", a_head);
		}
		printf("%lu", a_tail);
		if (i < 97)
		{
			printf(", ");
		}

		tmp_tail = b_tail;
		tmp_head = b_head;
		overflow = (a_tail + b_tail) / d;
		b_tail = (a_tail + b_tail) % d;
		b_head = (a_head + b_head) + overflow;
		a_tail = tmp_tail;
		a_head = tmp_head;
	}

			
	printf("\n");

	return (0);
}

