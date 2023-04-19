#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for Success.
 */
int main(int argc, char *argv[])
{
	int i, n;
	int (*main_ptr)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	n = atoi(argv[1]);

	for (i = 0; i < n; i++)
	{
		printf("%02x", ((unsigned char *) main_ptr)[i]);
		if (i < n - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
