#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 for uppercase or lowercase letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
