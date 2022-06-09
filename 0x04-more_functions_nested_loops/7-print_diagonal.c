#include "main.h"

/**
 * print_diagonal - prints the backward slash
 * @n: number of times backward slash is printed
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);
}
