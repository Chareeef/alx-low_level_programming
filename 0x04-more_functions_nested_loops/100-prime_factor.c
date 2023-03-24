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
		if (i % n == 0)
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
	unsigned long largest = 0, n = 61243, f;

	for (f = 1; f < n; f++)
	{
		if (is_prime(f) && (n % f == 0))
		{
			if (f >= largest)
			{
				largest = f;
			}
			n /= f;
		}
	}

	printf("%ul\n", largest);

	return (0);
}

