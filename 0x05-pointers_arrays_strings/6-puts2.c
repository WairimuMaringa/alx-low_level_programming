#include "main.h"

/**
 * puts2 - prints every other character starting with the first
 * @str: character pointer variable
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(*(str + len));
		}
		len++;
	}
	_putchar('\n');
}
