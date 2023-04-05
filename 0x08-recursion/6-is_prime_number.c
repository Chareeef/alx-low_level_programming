#include "main.h"

/**
 * check_remainder - checks if n % d is 0
 * @n: our number
 * @d: devisor
 *
 * Return: 0 if remainder is zero, 1 if it isn't.
 */
int check_remainder(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d <= n / 2)
		check_remainder(n, d + 1);
	return (1);
}

/**
 * is_prime_number - checks if n is prime
 * @n: our number
 *
 * Return: 1 if n is prime, 0 if not.
 */
int is_prime_number(int n)
{
	int d = 2;

	if (check_remainder(n, d) == 1 && n > 1)
		return (1);
	else
		return (0);
}

