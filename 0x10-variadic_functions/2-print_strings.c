#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string arguments
 * @separator: string between strings. can be NULL
 * @n: arguments number
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;
	char *string;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strs, char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
