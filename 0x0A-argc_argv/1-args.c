#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
