#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Print last digit of n
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last < 0)
		last *= -1;
	printf("Last digit of %d is %d ", n, last);
	if (last == 0)
		printf("and is zero\n");
	else if (last > 5)
		printf("and is greater than 5\n");
	else if (last < 6)
		printf("and is less than 6 and not 0\n");

	return (0);
}
