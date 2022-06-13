#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int h = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		h = len / 2;
	}
	else
	{
		h = (len + 1) / 2;
	}
	for (; h < len; h++)
	{
		_putchar(*(str + h));
	}
	_putchar('\n');
}
