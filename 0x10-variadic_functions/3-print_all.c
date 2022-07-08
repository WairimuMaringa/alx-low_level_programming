#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints a character
 * @arg: arguments
 * @sep: separator
 */
void print_c(va_list arg, char *sep)
{
	printf("%s%c", sep, va_arg(arg, int));
}
/**
 * print_i - prints an integer
 * @arg: arguments
 * @s: separator
 */
void print_i(va_list arg, char *s)
{
	printf("%s%d", s, va_arg(arg, int));
}
/**
 * print_f - prints a float
 * @arg: arguments
 * @sep: separator
 */
void print_f(va_list arg, char *sep)
{
	printf("%s%f", sep, va_arg(arg, double));
}
/**
 * print_str - prints a string
 * @arg: arguments
 * @sep: separator
 */
void print_str(va_list arg, char *sep)
{
	char *strng;
	strng = va_arg(arg, char *);
	if (strng == NULL)
		strng = "(nil)";
	printf("%s%s", sep, strng);
}
/**
 * print_all - function that prints anything
 * @format: list of types of arguments to be passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	char *separator2 = ", ";
	struct (op[]) = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_str},
		{'\0', NULL}
	};
	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (op[j].f != NULL)
		{
			if (format[i] == *(op[j].c))
			{
				printf("%s", separator);
				op[j].f(args);
			}
			j++;
		}
		separator = separator2;
		i++;
	}
	printf("\n");
	va_end(args);
}
