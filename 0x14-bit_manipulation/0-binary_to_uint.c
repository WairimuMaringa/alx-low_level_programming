#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - covert a binary number to unsigned int
 * @b: binary number to be passed to the function
 * Return: converted number, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int len = 0, base = 1;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (len = len - 1; len >= 0; len--)
	{
		if (b[len] == 48 || b[len] == 49)
		{
			if (b[len] == '1')
				number = number + base;
			base = base * 2;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
