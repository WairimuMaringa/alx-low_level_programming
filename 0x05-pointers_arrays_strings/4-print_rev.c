#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	char l;
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (len--)
	{
		l = *(s + len);
		_putchar(l);
	}
	_putchar('\n');
}
