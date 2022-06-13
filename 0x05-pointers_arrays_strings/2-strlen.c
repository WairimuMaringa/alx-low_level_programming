#include "main.h"

/**
 * _strlen - return string length
 * @s: string to be evaluated
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
