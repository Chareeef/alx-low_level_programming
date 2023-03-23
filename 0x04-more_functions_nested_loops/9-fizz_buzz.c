#include <stdio.h>

/**
 * FizzBuzz - Prints Fizz for x3, Buzz for x5, FizzBuzz fot both.
 * @n: number to check
 *
 * Return: void
 */
void FizzBuzz(int n)
{
	if (n % 3 == 0 && n % 5 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (n % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (n % 5 == 0)
	{
		printf("Buzz ");
	}
	else
	{
		printf("%d ", n);
	}
}

/**
 * main - Entry point
 *
 * Return: 0 on Succes.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		FizzBuzz(n);
	}
	printf("\n");

	return (0);
}

