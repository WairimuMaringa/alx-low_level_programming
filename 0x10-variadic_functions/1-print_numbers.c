#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers followed by a new line
 * separator is a string is to be printed between numbers
 * @separator: string
 * @n: number of arguments
 * @...: variable number of n arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args_int;

	va_start(args_int, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args_int, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args_int);
}
