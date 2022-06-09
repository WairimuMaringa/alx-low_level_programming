#include "main.h"

/**
 * print_line - prints the underscore
 * @n: number of times that underscore is printed
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
