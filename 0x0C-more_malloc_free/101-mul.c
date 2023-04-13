#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Print the product of two arguments
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: returns 0, or exits on 98 if error
 */
int main(int argc, char *argv[])
{
	int i = 1, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (j = 0; i < 3; j++)
	{
		if (argv[i][j] == '\0')
		{
			i++;
			j = 0;
			continue;
		}
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	printf("%lld\n", (long long) atoi(argv[1]) * (long long) atoi(argv[2]));
	return (EXIT_SUCCESS);
}
