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
	print_strings(" @ ", 4, "open", NULL, "close", NULL);
	print_strings(" @ ", 0, 8, 5, 4);

	return (0);
}
