#include "main.h"

/**
 * print_times_table - gives the multiplication table
 * @n: starting point of input number
 *
 * Return: no return if greater than fifteen or less than zero
 *
 */
void print_times_table(int n)
{
	int a, b, pr;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				pr = a * b;
				_putchar(44);
				_putchar(32);
				if (pr <= 9)
				{
					_putchar(32);
					_putchar((pr / 10) + 48);
					_putchar((pr % 10) + 48);
				}
				else
				{
					_putchar(((pr / 100) % 10) + 48);
					_putchar(((pr / 10) % 10) + 48);
					_putchar((pr % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
