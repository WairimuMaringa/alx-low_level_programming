#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: argument list passed to the function
 * @...: variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list all_args;
	unsigned int i = 0, j = 0, b = 0;
	char *_type = "cifs", *str;

	va_start(all_args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (*(_type + j))
		{
			if (format[i] == _type[j])
			{
				b = 1;
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(all_args, int));
			break;
			case 'i':
			printf("%i", va_arg(all_args, int));
			case 'f':
			printf("%f", va_arg(all_args, double));
			case 's':
			str = va_arg(all_args, char*), str = str ? str : "(nil)";
			printf("%s", str);
			break;
		}
		if (b == 1 && *(format + (i + 1)) != '\0')
			printf(", "), b = 0;
		i++;
	}
	printf("\n");
	va_end(all_args);
}
