#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 *
 * Result: Always 0
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}
