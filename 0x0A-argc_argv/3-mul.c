#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if Error, Succes otherwise.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (EXIT_SUCCESS);
}
