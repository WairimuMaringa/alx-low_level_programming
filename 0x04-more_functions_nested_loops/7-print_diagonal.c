#include "main.h"

/**
 * print_diagonal - prints the backward slash
 * @n: number of times backward slash is printed
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
	}
	_putchar(10);
}
