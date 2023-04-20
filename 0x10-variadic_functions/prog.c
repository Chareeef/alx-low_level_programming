#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers(" @ ", 3, 8, 5, 4);
	print_numbers(" @ ", 0, 8, 5, 4);

	return (0);
}
