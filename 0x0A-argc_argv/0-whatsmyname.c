#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print program's name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
