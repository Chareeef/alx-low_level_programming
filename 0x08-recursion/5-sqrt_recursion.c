#include "main.h"

/**
 * check_sqrt - check if sq is square root if n
 * @n: our number
 * @sq: potential square root
 *
 * Return: the square root if exists, -1 if not.
 */
int check_sqrt(int n, int *sqrt)
{
	if (n / *sqrt == *sqrt && n % *sqrt == 0)
		return (*sqrt);
	if (*sqrt < n)
	{
		(*sqrt)++;
		check_sqrt(n, sqrt);
	}
	return (-1);
}

/**
 * _sqrt_recursion - compute square root if n
 * @n: our number
 *
 * Return: square root of n, or -1 if inexistant.
 */
int _sqrt_recursion(int n)
{
	int sqrt = 2;
	int *ps = &sqrt;

	sqrt = check_sqrt(n, ps);
	return (sqrt);
}

