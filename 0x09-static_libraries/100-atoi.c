#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string
 *
 * Return: integer converted from string
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			x *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = -1;
			total = total * 10 + *s - '0';
		}
		else if (null_flag)
			break;
		s++;
	}
	if (x < 0)
		total = (-total);

	return (total);
}
