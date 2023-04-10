#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print all arguments, one per line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (EXIT_SUCCESS);
}
