#include "main.h"

/**
 * print_sign - determines the sign of a number
 * @n: the input number
 *
 * Return: 1 if n is greater, -1 if n is less than, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
