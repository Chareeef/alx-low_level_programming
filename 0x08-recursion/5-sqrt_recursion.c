#include "main.h"

/**
 * check_sqrt - check if sq is square root if n
 * @n: our number
 * @sqrt: potential square root
 * @s: tracker
 *
 * Return: the square root if exists, -1 if not.
 */
int check_sqrt(int n, int sqrt, int *s)
{
	if (n / sqrt == sqrt && n % sqrt == 0)
	{
		*s = sqrt;
		return (*s);
	}
	if (sqrt <= n / 2 && *s == -1)
		check_sqrt(n, sqrt + 1, s);
	return (*s);
}

/**
 * _sqrt_recursion - compute square root if n
 * @n: our number
 *
 * Return: square root of n, or -1 if inexistant.
 */
int _sqrt_recursion(int n)
{
	int sqrt = 2, s = -1;
	int *p = &s;

	if (n == 0 || n == 1)
		return (n);
	sqrt = check_sqrt(n, sqrt, p);
	return (sqrt);
}

