#include <stdio.h>

/**
 * is_prime - check if n is prime
 * @n: Our number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 on Succes.
 */
int main(void)
{
	unsigned long int largest = 0, f;

	for (f = 1; f * f < 612852475143; f++)
	{
		if (is_prime(f) && (612852475143 % f == 0))
		{
			if (f >= largest)
			{
				largest = f;
			}
			612852475143 /= f;
		}
	}

	printf("%lu\n", largest);

	return (0);
}

