#include "main.h"

/**
 * factorial - compute factorial of n
 * @n: our number
 *
 * Return: factorial of n, or -1 if n < 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}

