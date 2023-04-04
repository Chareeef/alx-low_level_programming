#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 on Succes.
 */
int main(void)
{
	long int num = 612852475143, maxF = 0, oddF = 3;

	while (num % 2 == 0)
	{
		maxF = 2;
		num /= 2;
	}

	while (num != 1)
	{
		while (num % oddF == 0)
		{
			maxF = oddF;
			num /= oddF;
		}
		oddF += 2;
	}


	printf("%ld\n", maxF);

	return (0);
}

