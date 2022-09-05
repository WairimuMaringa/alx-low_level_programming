#include "main.h"

/**
 * _isupper - check for uppercase letter
 * @c: character to be checked
 *
 * Return: 1 for uppercase letter, 0 when otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
