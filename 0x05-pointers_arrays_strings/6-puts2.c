#include "main.h"

/**
 * puts2 - prints every other character starting with the first
 * @str: character pointer variable
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < 1; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
