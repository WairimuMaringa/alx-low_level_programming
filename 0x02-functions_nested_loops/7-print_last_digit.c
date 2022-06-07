#include "main.h"

/**
 * print_last_digit - determine last digit of a number
 * @n: input number
 *
 * Return: last digit value
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
