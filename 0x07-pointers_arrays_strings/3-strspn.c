#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string
 * @accept: bytes that may or may not be part of the string
 *
 * Return: bytes in s which only consist of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(accept + y); y++)
		{
			if (*(accept + y) == *(s + x))
			{
				break;
			}
		}
		if (*(accept + y) == '\0')
		{
			break;
		}
	}
	return (x);
}
