#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - prints the result of the operation, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for Success.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]), b = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op)(a, b);
	printf("%d\n", result);

	return (0);
}
