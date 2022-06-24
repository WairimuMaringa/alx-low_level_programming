#include "main.h"

/**
 * _isdigit - check for digit between zero and nine
 * @c: character to be checked
 *
 * Return: 1 for digit, 0 when otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
