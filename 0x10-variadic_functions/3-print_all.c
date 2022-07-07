#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints a character
 * @arg: arguments
 */
void print_c(va_list arg)
{
	char letter;
	letter = va_arg(arg, int);

	printf("%c", letter);
}
/**
 * print_i - prints an integer
 * @arg: arguments
 */
void print_i(va_list arg)
{
	int num;
	num = va_arg(arg, int);

	printf("%d", num);
}
/**
 * print_f - prints a float
 * @arg: arguments
 */
void print_f(va_list arg)
{
	float num;
	num = va_arg(arg, double);

	printf("%f", num);
}
/**
 * print_str - prints a string
 * @arg: arguments
 */
void print_str(va_list arg)
{
	char *strng;
	strng = va_arg(arg, char *);
	if (strng == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", strng);
}
/**
 * print_all - function that prints anything
 * @format: list of types of arguments to be passed
 * @...: variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	char *separator2 = ", ";
	printer ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_str},
		{NULL, NULL}
	};
	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", separator);
				ops[j].f(args);
			}
			j++;
		}
		separator = separator2;
		i++;
	}
	printf("\n");
	va_end(args);
}
