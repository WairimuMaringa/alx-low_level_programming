#include "main.h"

/**
 * _puts - print a string
 * @str: string to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	char l;
	int len = 0;

	while (*(str + len) != '\0')
	{
		l = *(str + len);
		_putchar(l);
		len++;
	}
	_putchar('\n');
}
