#include <stdlib.h>
#include <stdio.h>

/**
 * main - Add all numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if Error, Succes otherwise.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; argv[i] != NULL; i++)
	{
		/* Check if any unvalid symbols */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		/* Add current number */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (EXIT_SUCCESS);
}

